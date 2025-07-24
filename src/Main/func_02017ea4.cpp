#include "types.h"
#include "System/Random.hpp"

ARM extern "C" void func_02017ea4(u16* param1) {
    *param1 = gRandom.Next(0, 1);
}

ARM extern "C" void func_02017ee4(u16* param1) {
    *param1 = gRandom.Next(0, 1);
}
