//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBRT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBRT();

    /* 4C */ virtual ~ActorUnkRBRT() override;

    void func_ov026_02120a9c(void);
    void func_ov026_02120b0c(void);
    void func_ov026_02120c80(void);
    void func_ov026_02120c94(void);
    void func_ov026_02120cc4(void);
    void func_ov026_02120cfc(void);
    void func_ov026_02120d74(void);
    void func_ov026_02120db0(void);
    void func_ov026_02120e30(void);
    void func_ov026_02120e40(void);
    void func_ov026_02120e44(void);
    void func_ov026_02120e90(void);
    void func_ov026_02120f0c(void);
    void func_ov026_02120f98(void);
    void func_ov026_02120fb8(void);
    void func_ov026_02120fc4(void);
    void func_ov026_02121034(void);
    void func_ov026_0212110c(void);
    void func_ov026_0212112c(void);
    void func_ov026_02121138(void);
    void func_ov026_02121150(void);
    void func_ov026_02121180(void);
    void func_ov026_02121198(void);
    void func_ov026_021211c8(void);
    void func_ov026_021211e4(void);
};

class ActorTypeUnkRBRT : public ActorType {
public:
    static ActorTypeUnkRBRT gInstance;

    /* 00 (base) */

    ActorTypeUnkRBRT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBRT *GetInstance();
};
