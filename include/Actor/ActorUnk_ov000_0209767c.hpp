#pragma once

#include "Actor/Actor.hpp"
#include "System/SysNew.hpp"
#include "types.h"

class ActorUnk_ov000_0209767c : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;

    ActorUnk_ov000_0209767c(u32 actorId);

    /* 00 */ virtual void vfunc_00() = 0;
    /* 04 */ virtual void vfunc_04() = 0;
    /* 08 */ virtual void vfunc_08() = 0;
    /* 0c */ virtual Actor *Create() = 0;
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1c */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28() = 0;
    /* 2c */ virtual void vfunc_2c() = 0;
    /* 30 */ virtual void vfunc_30() = 0;
    /* 34 */ virtual void vfunc_34() = 0;
    /* 38 */ virtual void vfunc_38() = 0;
    /* 3c */ virtual void vfunc_3c() = 0;
    /* 40 */ virtual void vfunc_40() = 0;
    /* 44 */ virtual void vfunc_44() = 0;
    /* 48 */
};
