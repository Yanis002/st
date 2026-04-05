//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTE : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMTE();

    /* 4C */ virtual ~ActorUnkRMTE() override;

    void func_ov065_02159498(void);
    void func_ov065_021594c0(void);
    void func_ov065_021594e0(void);
    void func_ov065_0215964c(void);
    void func_ov065_0215969c(void);
    void func_ov065_021596bc(void);
    void func_ov065_021596e4(void);
};

class ActorTypeUnkRMTE : public ActorType {
public:
    static ActorTypeUnkRMTE gInstance;

    /* 00 (base) */

    ActorTypeUnkRMTE();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMTE *GetInstance();
};
