//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMTD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkPMTD();

    /* 4C */ virtual ~ActorUnkPMTD() override;

    void func_ov093_02177b7c(void);
    void func_ov093_02177be0(void);
};

class ActorTypeUnkPMTD : public ActorType {
public:
    static ActorTypeUnkPMTD gInstance;

    /* 00 (base) */

    ActorTypeUnkPMTD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkPMTD *GetInstance();
};
