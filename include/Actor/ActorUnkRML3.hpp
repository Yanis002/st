//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRML3();

    /* 4C */ virtual ~ActorUnkRML3() override;

    void func_ov062_0215826c(void);
    void func_ov062_02158294(void);
    void func_ov062_021582b4(void);
    void func_ov062_02158304(void);
    void func_ov062_02158324(void);
    void func_ov062_0215834c(void);
};

class ActorTypeUnkRML3 : public ActorType {
public:
    static ActorTypeUnkRML3 gInstance;

    /* 00 (base) */

    ActorTypeUnkRML3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRML3 *GetInstance();
};
