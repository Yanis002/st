//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSCCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSCCN();

    /* 4C */ virtual ~ActorUnkSCCN() override;

    void func_ov031_020efa3c(void);
    void func_ov031_020efa64(void);
    void func_ov031_020efaa0(void);
    void func_ov031_020efc78(void);
    void func_ov031_020efc98(void);
    void func_ov031_020efcc0(void);
    void func_ov031_020efcd4(void);
    void func_ov031_020efd6c(void);
    void func_ov031_020efdcc(void);
    void func_ov031_020efe08(void);
    void func_ov031_020efec0(void);
    void func_ov031_020efed8(void);
    void func_ov031_020eff04(void);
    void func_ov031_020effbc(void);
    void func_ov031_020f005c(void);
    void func_ov031_020f0060(void);
    void func_ov031_020f0090(void);
    void func_ov031_020f0094(void);
    void func_ov031_020f0098(void);
    void func_ov031_020f009c(void);
    void func_ov031_020f00a0(void);
    void func_ov031_020f00c4(void);
    void func_ov031_020f0198(void);
    void func_ov031_020f01ac(void);
    void func_ov031_020f0220(void);
    void func_ov031_020f0244(void);
    void func_ov031_020f02a8(void);
    void func_ov031_020f02c8(void);
    void func_ov031_020f0450(void);
    void func_ov031_020f04a8(void);
    void func_ov031_020f04dc(void);
    void func_ov031_020f0514(void);
    void func_ov031_020f0638(void);
    void func_ov031_020f064c(void);
    void func_ov031_020f0654(void);
    void func_ov031_020f065c(void);
    void func_ov031_020f0680(void);
    void func_ov031_020f0740(void);
    void func_ov031_020f0820(void);
    void func_ov031_020f09d0(void);
    void func_ov031_020f09f8(void);
    void func_ov031_020f0a14(void);
    void func_ov031_020f0a38(void);
    void func_ov031_020f0aa8(void);
    void func_ov031_020f0b5c(void);
    void func_ov031_020f0b8c(void);
    void func_ov031_020f0ba8(void);
    void func_ov031_020f0bd0(void);
};

class ActorTypeUnkSCCN : public ActorType {
public:
    static ActorTypeUnkSCCN gInstance;

    /* 00 (base) */

    ActorTypeUnkSCCN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSCCN *GetInstance();
};
