#pragma once

#include "types.h"
#include "Actor/Actor.hpp"
#include "Actor/ActorUnk_ov000_0209767c.hpp"
#include "Player/PlayerGet.hpp"


class ActorRupeeBase : public ActorUnk_ov000_0209767c {
public:
    /* 00 (base) */

    ActorRupeeBase();

    /* 0c */ virtual Actor* Create();
};

class Actor_9c {
public:
    void func_ov000_02097bb8();
};

class Actor_c4 {
public:
    void func_ov031_020e9ef0(void*);
};

class ActorRupee : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk16 mUnk_94;
    /* 96 */ unk16 mUnk_96;
    /* 98 */ unk16 mUnk_98;
    /* 9a */ unk16 mUnk_9a;
    /* 9c */ Actor_9c mUnk_9c;
    /* a0 */ unk32 mUnk_a0;
    /* a4 */ unk32 mUnk_a4;
    /* a8 */ unk32 mUnk_a8;
    /* ac */ unk32 mUnk_ac;
    /* b0 */ unk32 mUnk_b0;
    /* b4 */ unk32 mUnk_b4;
    /* b8 */ unk32 mUnk_b8;
    /* bc */ unk32 mUnk_bc;
    /* c0 */ unk32 mUnk_c0;
    /* c4 */ Actor_c4 mUnk_c4;
    /* c8 */ unk32 mUnk_c8;
    /* cc */ unk32 mUnk_cc;
    /* d0 */ unk32 mUnk_d0;
    /* d4 */ unk32 mUnk_d4;
    /* d8 */ unk32 mUnk_d8;
    /* dc */ unk32 mUnk_dc;
    /* e0 */ unk32 mUnk_e0;
    /* e4 */ unk32 mUnk_e4;
    /* e8 */ unk32 mUnk_e8;
    /* ec */ unk32 mUnk_ec;
    /* f0 */ UnkStruct_PlayerGet_ec mUnk_f0;
    /* f4 */ unk8 mUnk_f4;
    /* f5 */ unk8 mUnk_f5;
    /* f6 */ unk8 mUnk_f6;
    /* f7 */ unk8 mUnk_f7;
    /* f8 */

    ActorRupee();

    /* 18 */ virtual unk32 vfunc_18() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2c */ virtual void vfunc_2c() override;
    /* 4c */ virtual ~ActorRupee() override;

    unk32* func_ov031_020e8cb8();
};
