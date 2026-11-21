# AGENTS.md — ECU Telemetry & CAN Bus Firmware Engineering Rules

Every AI agent and contributor working in `TriageGuard/TriageGuard-Demo` MUST follow these invariants:

1. **Zero Unaligned Pointer Casts (MISRA C:2012 Rule 11.3):**
   - Never cast `uint8_t *` CAN frame buffers directly to `uint32_t *` or struct pointers. Always use `memcpy()` into a stack-aligned destination variable.
2. **Conan 2.0 Deterministic Lockfiles (`.agents/skills/conan-dependency-audit`):**
   - When a prebuilt Conan binary is missing for the target profile, pass `--build=missing` or pre-populate the Conan cache.
3. **LTO Linker Memory Ceiling (`--memory=8g`):**
   - C++ Link-Time Optimization (`ld.lld`) jobs exiting with `137` (`OOMKilled`) must cap `-DCMAKE_BUILD_PARALLEL_LEVEL=2` or raise container memory to `8g`.
