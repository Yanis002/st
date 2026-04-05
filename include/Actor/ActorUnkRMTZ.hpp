//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMTZ();

    /* 4C */ virtual ~ActorUnkRMTZ() override;

    void func_ov064_021594f0(void);
    void func_ov064_02159518(void);
    void func_ov064_0215958c(void);
    void func_ov064_021595c8(void);
    void func_ov064_02159610(void);
    void func_ov064_02159630(void);
    void func_ov064_02159650(void);
    void func_ov064_02159678(void);
};

class ActorTypeUnkRMTZ : public ActorType {
public:
    static ActorTypeUnkRMTZ gInstance;

    /* 00 (base) */

    ActorTypeUnkRMTZ();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMTZ *GetInstance();
};
