//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMVS();

    /* 4C */ virtual ~ActorUnkRMVS() override;

    void func_ov059_02161f20(void);
    void func_ov059_02161f48(void);
    void func_ov059_02162008(void);
    void func_ov059_021620a8(void);
    void func_ov059_021620d4(void);
    void func_ov059_02162124(void);
    void func_ov059_0216212c(void);
    void func_ov059_0216215c(void);
    void func_ov059_02162194(void);
};

class ActorTypeUnkRMVS : public ActorType {
public:
    static ActorTypeUnkRMVS gInstance;

    /* 00 (base) */

    ActorTypeUnkRMVS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMVS *GetInstance();
};
