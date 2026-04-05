//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZSRS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkZSRS();

    /* 4C */ virtual ~ActorUnkZSRS() override;

    void func_ov031_020ea038(void);
};

class ActorTypeUnkZSRS : public ActorType {
public:
    static ActorTypeUnkZSRS gInstance;

    /* 00 (base) */

    ActorTypeUnkZSRS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkZSRS *GetInstance();
};
