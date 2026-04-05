//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMV0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMV0();

    /* 4C */ virtual ~ActorUnkRMV0() override;

    void func_ov067_02159d88(void);
    void func_ov067_02159db0(void);
    void func_ov067_02159dd0(void);
    void func_ov067_02159e20(void);
    void func_ov067_02159e40(void);
    void func_ov067_02159e68(void);
};

class ActorTypeUnkRMV0 : public ActorType {
public:
    static ActorTypeUnkRMV0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMV0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMV0 *GetInstance();
};
