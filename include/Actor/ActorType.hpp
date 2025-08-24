#pragma once

#include "Actor/ActorId.hpp"
#include "System/SysNew.hpp"
#include "types.h"

struct ActorTypeData {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk8 mUnk_10[0x16 - 0x10];
    /* 16 */ unk16 mUnk_16;
    /* 18 */ unk16 mUnk_18;
    /* 1a */ unk16 mUnk_1a;
    /* 1c */ ActorId mActorId;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2c */ unk32 mUnk_2c;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk8 mUnk_34;
    /* 35 */ unk8 mUnk_35;
};

class Actor;

class ActorType : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ ActorTypeData mData;
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
