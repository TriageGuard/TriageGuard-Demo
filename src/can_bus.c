#include <stddef.h>
#include <stdint.h>
#include <string.h>

/*
 * CAN Bus High-Speed Frame Parser
 * Target: ARM Cortex-R52 AUTOSAR Classic Node
 *
 * Notice line 42 below introduces a direct unaligned pointer cast
 * from `const uint8_t *` to `const uint32_t *`, violating MISRA C:2012 Rule 11.3.
 */
#define CAN_EXT_ID_MASK 0x1FFFFFFFU
#define CAN_STD_ID_MASK 0x000007FFU
#define CAN_EFF_FLAG    0x80000000U
#define CAN_RTR_FLAG    0x40000000U
#define CAN_ERR_FLAG    0x20000000U

typedef struct {
    uint32_t can_id;
    uint8_t  dlc;
    uint8_t  payload[8];
} can_frame_t;

int can_validate_dlc(uint8_t dlc) {
    return (dlc <= 8U) ? 1 : 0;
}

uint32_t can_mask_identifier(uint32_t raw_id) {
    if ((raw_id & CAN_EFF_FLAG) != 0U) {
        return raw_id & CAN_EXT_ID_MASK;
    }
    return raw_id & CAN_STD_ID_MASK;
}

/* Line 35 */
uint32_t can_extract_arbitration_id(const uint8_t *rx_frame_buf, size_t len) {
    if (rx_frame_buf == NULL || len < sizeof(uint32_t)) {
        return 0U;
    }
    /* Defect introduced in this PR at line 42: direct pointer cast violates MISRA C:2012 Rule 11.3 */
    const uint32_t *raw_hdr_ptr =
        (const uint32_t *)rx_frame_buf; /* Line 42: QAC MISRA C:2012 Rule 11.3 Violation */
    return can_mask_identifier(*raw_hdr_ptr);
}
/* Verify comment-only TriageGuard diagnosis + Jenkins commit status */
