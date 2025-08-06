#pragma once

#include "Actor/Actor.hpp"
#include "types.h"

class ActorUnk_ov000_020a8bb0_94 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 08 */ unk16 mUnk_0a;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 14 */ unk16 mUnk_16;
    /* 18 */ unk32 mUnk_18;
    /* 1c */

    ActorUnk_ov000_020a8bb0_94();
    ~ActorUnk_ov000_020a8bb0_94();
};

class ActorUnk_ov000_020a8bb0_ec {
public:
    void func_ov024_020d6668();
};

class ActorUnk_ov000_020a8bb0 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ActorUnk_ov000_020a8bb0_94 mUnk_094;
    /* 0b0 */ u16 mUnk_0b0;
    /* 0b4 */ unk32 mUnk_0b4;
    /* 0b8 */ unk32 mUnk_0b8;
    /* 0bc */ unk32 mUnk_0bc;
    /* 0c0 */ unk32 mUnk_0c0;
    /* 0c4 */ unk32 mUnk_0c4;
    /* 0c8 */ unk32 mUnk_0c8;
    /* 0cc */ unk16 mUnk_0cc;
    /* 0cc */ unk16 mUnk_0ce;
    /* 0d0 */ unk32 mUnk_0d0;
    /* 0d4 */ unk32 mUnk_0d4;
    /* 0d8 */ unk16 mUnk_0d8;
    /* 0d8 */ unk16 mUnk_0da;
    /* 0dc */ unk16 mUnk_0dc;
    /* 0dc */ unk16 mUnk_0de;
    /* 0e0 */ unk16 mUnk_0e0;
    /* 0e0 */ unk16 mUnk_0e2;
    /* 0e4 */ unk32 mUnk_0e4;
    /* 0e8 */ unk16 mUnk_0e8;
    /* 0e8 */ unk16 mUnk_0ea;
    /* 0ec */ ActorUnk_ov000_020a8bb0_ec mUnk_0ec;
    /* 0f0 */ unk32 mUnk_0f0;
    /* 0f4 */ unk32 mUnk_0f4;
    /* 0f8 */ unk32 mUnk_0f8;
    /* 0fc */ unk32 mUnk_0fc;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ unk32 mUnk_104;
    /* 108 */ unk32 mUnk_108;
    /* 10c */ unk32 mUnk_10c;
    /* 110 */ unk32 mUnk_110;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ unk32 mUnk_118;
    /* 11c */ unk32 mUnk_11c;

    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual unk32 vfunc_18() override;
    /* 1c */ virtual void vfunc_1c() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2c */ virtual void vfunc_2c() override;
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4c */ virtual ~ActorUnk_ov000_020a8bb0();
    /* 54 */ virtual void vfunc_54();
    /* 54 */ virtual void vfunc_58() = 0;
    /* 5c */ virtual void vfunc_5c();
    /* 60 */ virtual void vfunc_60();
    /* 64 */ virtual void vfunc_64();
    /* 68 */ virtual void vfunc_68();
    /* 6c */ virtual void vfunc_6c();
    /* 70 */ virtual void vfunc_70();
    /* 74 */ virtual void vfunc_74();
    /* 78 */ virtual void vfunc_78();
    /* 7c */ virtual unk32 vfunc_7c();
    /* 80 */ virtual unk32 vfunc_80();
    /* 84 */ virtual unk32 vfunc_84();
    /* 88 */ virtual unk32 vfunc_88();
    /* 8c */ virtual unk32 vfunc_8c();
    /* 90 */ virtual unk32 vfunc_90();
    /* 94 */ virtual void vfunc_94();
    /* 98 */ virtual void vfunc_98();
    /* 9c */ virtual void vfunc_9c();
    /* a0 */ virtual void vfunc_a0();
    /* a4 */ virtual void vfunc_a4();
    /* a8 */ virtual unk32 vfunc_a8();
    /* ac */ virtual void vfunc_ac();
    /* b0 */ virtual void vfunc_b0();
    /* b4 */ virtual void vfunc_b4();
    /* b8 */ virtual void vfunc_b8();
    /* bc */

    ActorUnk_ov000_020a8bb0(unk32 param1, unk32 param2);
    void func_ov000_020a8db0();
    void func_ov000_020a8dd0();
    void func_ov000_020a8df0();
    void func_ov000_020a8e9c();
    void func_ov000_020a8ff4();
    void func_ov000_020a91b8();
    void func_ov000_020a9200();
    void func_ov000_020a9248();
    void func_ov000_020a94b0();
    void func_ov000_020a95d8();
    void func_ov000_020a9804();
    void func_ov000_020a9a20();
    void func_ov000_020a9a34();
    void func_ov000_020a9a50();
    void func_ov000_020a9a94();
    void func_ov000_020a9abc();
    void func_ov000_020a9ae0();
    void func_ov000_020a9afc();
};
