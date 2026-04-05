//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMW1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMW1();

    /* 4C */ virtual ~ActorUnkRMW1() override;

    void func_ov066_0215c474(void);
    void func_ov066_0215c49c(void);
    void func_ov066_0215c4bc(void);
    void func_ov066_0215c50c(void);
    void func_ov066_0215c52c(void);
    void func_ov066_0215c554(void);
};

class ActorTypeUnkRMW1 : public ActorType {
public:
    static ActorTypeUnkRMW1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMW1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMW1 *GetInstance();
};
