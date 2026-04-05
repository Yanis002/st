//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGOCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGOCB();

    /* 4C */ virtual ~ActorUnkGOCB() override;

    void func_ov067_02158034(void);
};

class ActorTypeUnkGOCB : public ActorType {
public:
    static ActorTypeUnkGOCB gInstance;

    /* 00 (base) */

    ActorTypeUnkGOCB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGOCB *GetInstance();
};
