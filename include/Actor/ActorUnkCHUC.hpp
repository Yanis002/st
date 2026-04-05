//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCHUC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCHUC();

    /* 4C */ virtual ~ActorUnkCHUC() override;

    void func_ov055_02139838(void);
    void func_ov055_02139894(void);
    void func_ov055_021399a4(void);
    void func_ov055_021399b8(void);
    void func_ov055_021399cc(void);
    void func_ov055_02139a34(void);
    void func_ov055_02139aa4(void);
    void func_ov055_02139ac8(void);
    void func_ov055_02139b70(void);
    void func_ov055_02139b8c(void);
    void func_ov055_02139bc4(void);
    void func_ov055_02139eb4(void);
    void func_ov055_02139f28(void);
    void func_ov055_02139f60(void);
    void func_ov055_02139f9c(void);
    void func_ov055_0213a08c(void);
    void func_ov055_0213a0d0(void);
    void func_ov055_0213a194(void);
    void func_ov055_0213a240(void);
    void func_ov055_0213a254(void);
    void func_ov055_0213a2a0(void);
    void func_ov055_0213a364(void);
    void func_ov055_0213a3a4(void);
    void func_ov055_0213a3e0(void);
    void func_ov055_0213a3fc(void);
    void func_ov055_0213a418(void);
    void func_ov055_0213a434(void);
    void func_ov055_0213a4cc(void);
    void func_ov055_0213a724(void);
    void func_ov055_0213a7a0(void);
    void func_ov055_0213a88c(void);
    void func_ov055_0213a8f0(void);
    void func_ov055_0213a938(void);
    void func_ov055_0213a964(void);
    void func_ov055_0213a984(void);
    void func_ov055_0213a9dc(void);
    void func_ov055_0213aa4c(void);
    void func_ov055_0213aa8c(void);
    void func_ov055_0213aaac(void);
    void func_ov055_0213aca8(void);
    void func_ov055_0213ae38(void);
    void func_ov055_0213ae54(void);
    void func_ov055_0213ae98(void);
    void func_ov055_0213af04(void);
    void func_ov055_0213af70(void);
    void func_ov055_0213b03c(void);
    void func_ov055_0213b06c(void);
    void func_ov055_0213b09c(void);
    void func_ov055_0213b0d0(void);
    void func_ov055_0213b17c(void);
    void func_ov055_0213b228(void);
    void func_ov055_0213b24c(void);
    void func_ov055_0213b25c(void);
    void func_ov055_0213b264(void);
    void func_ov055_0213b278(void);
    void func_ov055_0213b294(void);
    void func_ov055_0213b2a8(void);
    void func_ov055_0213b2b4(void);
    void func_ov055_0213b2d8(void);
    void func_ov055_0213b330(void);
    void func_ov055_0213b388(void);
    void func_ov055_0213b444(void);
    void func_ov055_0213b458(void);
    void func_ov055_0213b478(void);
    void func_ov055_0213b4a0(void);
    void func_ov055_0213b538(void);
    void func_ov055_0213b570(void);
    void func_ov055_0213b614(void);
    void func_ov055_0213b644(void);
    void func_ov055_0213b67c(void);
    void func_ov055_0213b6b4(void);
    void func_ov055_0213b740(void);
    void func_ov055_0213b7bc(void);
    void func_ov055_0213b894(void);
    void func_ov055_0213b8a4(void);
    void func_ov055_0213b920(void);
    void func_ov055_0213b9d8(void);
    void func_ov055_0213b9e8(void);
    void func_ov055_0213b9ec(void);
    void func_ov055_0213ba0c(void);
    void func_ov055_0213baa0(void);
    void func_ov055_0213bb58(void);
    void func_ov055_0213bc50(void);
    void func_ov055_0213bc7c(void);
    void func_ov055_0213bd18(void);
    void func_ov055_0213bd70(void);
    void func_ov055_0213bda0(void);
    void func_ov055_0213bdb4(void);
    void func_ov055_0213bdd0(void);
    void func_ov055_0213be10(void);
    void func_ov055_0213be4c(void);
    void func_ov055_0213be68(void);
};

class ActorTypeUnkCHUC : public ActorType {
public:
    static ActorTypeUnkCHUC gInstance;

    /* 00 (base) */

    ActorTypeUnkCHUC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCHUC *GetInstance();
};
