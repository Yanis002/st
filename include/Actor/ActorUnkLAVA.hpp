//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLAVA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkLAVA();

    /* 4C */ virtual ~ActorUnkLAVA() override;

    void func_ov084_0215df9c(void);
    void func_ov084_0215dfcc(void);
    void func_ov084_0215e178(void);
    void func_ov084_0215e18c(void);
    void func_ov084_0215e334(void);
    void func_ov084_0215e498(void);
    void func_ov084_0215e4ac(void);
    void func_ov084_0215e54c(void);
    void func_ov084_0215e5d0(void);
    void func_ov084_0215e64c(void);
    void func_ov084_0215e670(void);
    void func_ov084_0215e674(void);
    void func_ov084_0215e7fc(void);
    void func_ov084_0215e988(void);
    void func_ov084_0215e9e0(void);
    void func_ov084_0215e9fc(void);
    void func_ov084_0215ea14(void);
    void func_ov084_0215ea70(void);
    void func_ov084_0215ea8c(void);
    void func_ov084_0215eae4(void);
    void func_ov084_0215eb44(void);
};

class ActorTypeUnkLAVA : public ActorType {
public:
    static ActorTypeUnkLAVA gInstance;

    /* 00 (base) */

    ActorTypeUnkLAVA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkLAVA *GetInstance();
};
