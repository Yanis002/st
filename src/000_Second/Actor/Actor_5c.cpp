#include "Actor/Actor.hpp"

extern "C" void func_02028c4c(unk32, void *, size_t);
extern "C" void func_02028c18(unk32, void *, size_t);

ARM void Actor_5c::func_ov000_020975f8() {
    this->mUnk_00.x = 0;
    this->mUnk_00.y = 0;
    this->mUnk_00.z = 0;
    this->mUnk_0c   = 0;
    this->mUnk_0e   = 0;
    this->mUnk_0f   = 0;
    this->mUnk_20   = 0;
    func_02028c4c(0, this->mUnk_10, sizeof(this->mUnk_10));
    func_02028c18(0, this->mUnk_18, sizeof(this->mUnk_18));
    func_02028c18(0, this->mUnk_1a, sizeof(this->mUnk_1a));
    this->mUnk_24 = -1;
    this->mUnk_28 = 0;
    this->mUnk_2c = 0;
    this->mUnk_26 = 0;
    this->mUnk_27 = 0;
}
