//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYWS();

    /* 4C */ virtual ~ActorUnkSYWS() override;

    void func_ov058_02142e24(void);
};

class ActorTypeUnkSYWS : public ActorType {
public:
    static ActorTypeUnkSYWS gInstance;

    /* 00 (base) */

    ActorTypeUnkSYWS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYWS *GetInstance();
};
