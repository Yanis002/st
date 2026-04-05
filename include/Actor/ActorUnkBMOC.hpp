//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBMOC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBMOC();

    /* 4C */ virtual ~ActorUnkBMOC() override;

    void func_ov091_0216e6d0(void);
    void func_ov091_0216e72c(void);
    void func_ov091_0216e730(void);
    void func_ov091_0216e858(void);
    void func_ov091_0216e9a8(void);
    void func_ov091_0216ec60(void);
    void func_ov091_0216ece0(void);
    void func_ov091_0216edec(void);
    void func_ov091_0216ee1c(void);
    void func_ov091_0216eeb4(void);
    void func_ov091_0216eee4(void);
    void func_ov091_0216ef1c(void);
};

class ActorTypeUnkBMOC : public ActorType {
public:
    static ActorTypeUnkBMOC gInstance;

    /* 00 (base) */

    ActorTypeUnkBMOC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBMOC *GetInstance();
};
