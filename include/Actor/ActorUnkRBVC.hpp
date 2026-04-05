//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBVC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBVC();

    /* 4C */ virtual ~ActorUnkRBVC() override;

    void func_ov084_0215d0c8(void);
    void func_ov084_0215d0f0(void);
    void func_ov084_0215d1f8(void);
    void func_ov084_0215d20c(void);
    void func_ov084_0215d2b4(void);
    void func_ov084_0215d2b8(void);
    void func_ov084_0215d33c(void);
    void func_ov084_0215d350(void);
    void func_ov084_0215d380(void);
    void func_ov084_0215d3c0(void);
    void func_ov084_0215d3dc(void);
    void func_ov084_0215d414(void);
    void func_ov084_0215d454(void);
    void func_ov084_0215d468(void);
    void func_ov084_0215d474(void);
    void func_ov084_0215d498(void);
    void func_ov084_0215d544(void);
    void func_ov084_0215d5e0(void);
    void func_ov084_0215d67c(void);
    void func_ov084_0215d7cc(void);
    void func_ov084_0215d820(void);
    void func_ov084_0215d8c0(void);
    void func_ov084_0215d998(void);
    void func_ov084_0215d9ac(void);
    void func_ov084_0215da28(void);
    void func_ov084_0215da48(void);
    void func_ov084_0215da98(void);
    void func_ov084_0215dabc(void);
    void func_ov084_0215dacc(void);
    void func_ov084_0215db1c(void);
    void func_ov084_0215db3c(void);
    void func_ov084_0215db64(void);
    void func_ov084_0215db78(void);
    void func_ov084_0215db84(void);
    void func_ov084_0215dba8(void);
    void func_ov084_0215dbf4(void);
    void func_ov084_0215dc7c(void);
    void func_ov084_0215de2c(void);
    void func_ov084_0215de80(void);
    void func_ov084_0215dec0(void);
    void func_ov084_0215df10(void);
    void func_ov084_0215df30(void);
    void func_ov084_0215df58(void);
};

class ActorTypeUnkRBVC : public ActorType {
public:
    static ActorTypeUnkRBVC gInstance;

    /* 00 (base) */

    ActorTypeUnkRBVC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBVC *GetInstance();
};
