//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRIC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTRIC();

    /* 4C */ virtual ~ActorUnkTRIC() override;

    void func_ov091_02175d00(void);
    void func_ov091_02175d74(void);
    void func_ov091_02175e78(void);
    void func_ov091_02175f14(void);
    void func_ov091_02175f64(void);
    void func_ov091_0217610c(void);
    void func_ov091_02176144(void);
    void func_ov091_02176158(void);
    void func_ov091_02176198(void);
    void func_ov091_02176224(void);
    void func_ov091_02176238(void);
    void func_ov091_02176304(void);
    void func_ov091_02176318(void);
    void func_ov091_0217637c(void);
    void func_ov091_021763b4(void);
    void func_ov091_02176410(void);
    void func_ov091_0217646c(void);
    void func_ov091_021765f8(void);
    void func_ov091_0217669c(void);
    void func_ov091_021766e8(void);
    void func_ov091_02176704(void);
    void func_ov091_02176728(void);
    void func_ov091_021767d4(void);
    void func_ov091_02176804(void);
};

class ActorTypeUnkTRIC : public ActorType {
public:
    static ActorTypeUnkTRIC gInstance;

    /* 00 (base) */

    ActorTypeUnkTRIC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTRIC *GetInstance();
};
