//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGORM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGORM();

    /* 4C */ virtual ~ActorUnkGORM() override;

    void func_ov067_02157ed0(void);
};

class ActorTypeUnkGORM : public ActorType {
public:
    static ActorTypeUnkGORM gInstance;

    /* 00 (base) */

    ActorTypeUnkGORM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGORM *GetInstance();
};
