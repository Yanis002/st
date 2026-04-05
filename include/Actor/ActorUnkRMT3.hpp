//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMT3();

    /* 4C */ virtual ~ActorUnkRMT3() override;

    void func_ov061_02158388(void);
    void func_ov061_021583b0(void);
    void func_ov061_021583d0(void);
    void func_ov061_02158420(void);
    void func_ov061_02158440(void);
    void func_ov061_02158468(void);
};

class ActorTypeUnkRMT3 : public ActorType {
public:
    static ActorTypeUnkRMT3 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMT3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMT3 *GetInstance();
};
