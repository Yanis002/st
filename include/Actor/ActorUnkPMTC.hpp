//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMTC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkPMTC();

    /* 4C */ virtual ~ActorUnkPMTC() override;

    void func_ov093_02177ad0(void);
    void func_ov093_02177b34(void);
};

class ActorTypeUnkPMTC : public ActorType {
public:
    static ActorTypeUnkPMTC gInstance;

    /* 00 (base) */

    ActorTypeUnkPMTC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkPMTC *GetInstance();
};
