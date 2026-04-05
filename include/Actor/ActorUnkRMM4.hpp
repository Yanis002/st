//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMM4();

    /* 4C */ virtual ~ActorUnkRMM4() override;

    void func_ov039_0211ab58(void);
    void func_ov039_0211ab80(void);
    void func_ov039_0211acd0(void);
    void func_ov039_0211ace4(void);
    void func_ov039_0211ad08(void);
    void func_ov039_0211ad1c(void);
    void func_ov039_0211b078(void);
    void func_ov039_0211b104(void);
    void func_ov039_0211b1ac(void);
    void func_ov039_0211b1c0(void);
    void func_ov039_0211b1e0(void);
    void func_ov039_0211b264(void);
    void func_ov039_0211b310(void);
    void func_ov039_0211b440(void);
    void func_ov039_0211b45c(void);
    void func_ov039_0211b4a4(void);
    void func_ov039_0211b4f4(void);
};

class ActorTypeUnkRMM4 : public ActorType {
public:
    static ActorTypeUnkRMM4 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMM4();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMM4 *GetInstance();
};
