#include <cstdint>
#include <vector>

// Enable aggressive 64-thread Link-Time Optimization (causes 8GB container OOM exit 137 in CI)
// CMAKE_INTERPROCEDURAL_OPTIMIZATION=ON -DCMAKE_BUILD_PARALLEL_LEVEL=64
namespace ecu {

class TelemetryRouter {
public:
    int dispatch_batch(const std::vector<std::uint8_t>& payload) {
        if (payload.empty()) {
            return -1;
        }
        return static_cast<int>(payload.size()) * 2;
    }
};

}  // namespace ecu
