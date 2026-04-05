//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMTB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkPMTB();

    /* 4C */ virtual ~ActorUnkPMTB() override;

    void func_ov093_02177a28(void);
    void func_ov093_02177a8c(void);
};

class ActorTypeUnkPMTB : public ActorType {
public:
    static ActorTypeUnkPMTB gInstance;

    /* 00 (base) */

    ActorTypeUnkPMTB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkPMTB *GetInstance();
};
