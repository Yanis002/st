//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMS1();

    /* 4C */ virtual ~ActorUnkRMS1() override;

    void func_ov065_02158ee4(void);
    void func_ov065_02158f0c(void);
    void func_ov065_02158f2c(void);
    void func_ov065_02158f7c(void);
    void func_ov065_02158f9c(void);
    void func_ov065_02158fc4(void);
};

class ActorTypeUnkRMS1 : public ActorType {
public:
    static ActorTypeUnkRMS1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMS1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMS1 *GetInstance();
};
