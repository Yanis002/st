//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFW2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFW2();

    /* 4C */ virtual ~ActorUnkEFW2() override;

    void func_ov094_021708dc(void);
    void func_ov094_0217090c(void);
    void func_ov094_0217092c(void);
    void func_ov094_021709c8(void);
    void func_ov094_021709e4(void);
    void func_ov094_02170a14(void);
};

class ActorTypeUnkEFW2 : public ActorType {
public:
    static ActorTypeUnkEFW2 gInstance;

    /* 00 (base) */

    ActorTypeUnkEFW2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFW2 *GetInstance();
};
