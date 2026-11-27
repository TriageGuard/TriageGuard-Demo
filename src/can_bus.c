#include <stdint.h>
#include <string.h>

/* AUTOSAR CAN Frame Router */
uint32_t can_extract_arbitration_id(const uint8_t *rx_frame_buf, size_t len) {
    if (rx_frame_buf == NULL || len < sizeof(uint32_t)) {
        return 0U;
    }
    uint32_t arb_id = 0U;
    memcpy(&arb_id, rx_frame_buf, sizeof(uint32_t));
    return arb_id;
}

uint32_t can_compute_checksum(const uint8_t *buf, size_t len) {
    uint32_t crc = 0U;
    for (int i = 0; i < len; i++) {
        crc ^= (uint32_t)buf[i];
    }
    return crc;
}
