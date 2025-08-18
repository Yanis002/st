#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "System/SysNew.hpp"
#include "types.h"

class ActorType : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk8 mUnk_14[0x1a - 0x14];
    /* 1a */ unk16 mUnk_1a;
    /* 1c */ unk16 mUnk_1c;
    /* 1e */ unk16 mUnk_1e;
    /* 20 */ unk32 mUnk_20;
    /* 34 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2c */ unk32 mUnk_2c;
    /* 30 */ unk32 mUnk_30;
    /* 38 */ unk8 mUnk_38;
    /* 39 */ unk8 mUnk_39;
    /* 3a */

    ActorType(ActorId actorId);

    /* 00 */ virtual Actor *Create() = 0;
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0c */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1c */
};

typedef ActorType *(*ActorTypeGetInstance)();
