//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMV1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMV1();

    /* 4C */ virtual ~ActorUnkRMV1() override;

    void func_ov067_02159eac(void);
    void func_ov067_02159ed4(void);
    void func_ov067_02159ef4(void);
    void func_ov067_02159f44(void);
    void func_ov067_02159f64(void);
    void func_ov067_02159f8c(void);
    void func_ov067_02159fa0(void);
    void func_ov067_02159fc0(void);
    void func_ov067_02159fc4(void);
};

class ActorTypeUnkRMV1 : public ActorType {
public:
    static ActorTypeUnkRMV1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMV1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMV1 *GetInstance();
};
