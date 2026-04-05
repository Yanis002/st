//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSWT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDSWT();

    /* 4C */ virtual ~ActorUnkDSWT() override;

    void func_ov082_02157aa0(void);
    void func_ov082_02157ac8(void);
    void func_ov082_02157ae8(void);
    void func_ov082_02157b38(void);
    void func_ov082_02157b58(void);
};

class ActorTypeUnkDSWT : public ActorType {
public:
    static ActorTypeUnkDSWT gInstance;

    /* 00 (base) */

    ActorTypeUnkDSWT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDSWT *GetInstance();
};
