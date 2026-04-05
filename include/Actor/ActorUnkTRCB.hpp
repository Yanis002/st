//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTRCB();

    /* 4C */ virtual ~ActorUnkTRCB() override;

    void func_ov026_02110280(void);
    void func_ov026_021102c4(void);
    void func_ov026_02110388(void);
    void func_ov026_021103ac(void);
    void func_ov026_021103cc(void);
    void func_ov026_02110414(void);
    void func_ov026_021104c0(void);
    void func_ov026_02110514(void);
    void func_ov026_0211059c(void);
    void func_ov026_021105a0(void);
    void func_ov026_021105a4(void);
    void func_ov026_021105b8(void);
    void func_ov026_021105f4(void);
    void func_ov026_02110624(void);
    void func_ov026_02110660(void);
    void func_ov026_021107d0(void);
    void func_ov026_021108ec(void);
    void func_ov026_021109d4(void);
    void func_ov026_02110b58(void);
    void func_ov026_02110bdc(void);
    void func_ov026_02110c68(void);
    void func_ov026_02110c7c(void);
    void func_ov026_02110ca4(void);
    void func_ov026_02110cc4(void);
    void func_ov026_02110ce0(void);
    void func_ov026_02110d14(void);
    void func_ov026_02110d38(void);
    void func_ov026_02110d68(void);
    void func_ov026_02110d7c(void);
    void func_ov026_02110dac(void);
    void func_ov026_02110ddc(void);
    void func_ov026_02110e38(void);
    void func_ov026_02110e70(void);
    void func_ov026_02110eb8(void);
    void func_ov026_02110ee4(void);
    void func_ov026_02110f28(void);
    void func_ov026_02110f68(void);
    void func_ov026_02110fcc(void);
    void func_ov026_02111014(void);
    void func_ov026_02111028(void);
    void func_ov026_02111044(void);
    void func_ov026_02111070(void);
    void func_ov026_02111084(void);
};

class ActorTypeUnkTRCB : public ActorType {
public:
    static ActorTypeUnkTRCB gInstance;

    /* 00 (base) */

    ActorTypeUnkTRCB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTRCB *GetInstance();
};
