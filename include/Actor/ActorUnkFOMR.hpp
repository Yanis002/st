//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOMR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFOMR();

    /* 4C */ virtual ~ActorUnkFOMR() override;

    void func_ov040_0212b2a8(void);
};

class ActorTypeUnkFOMR : public ActorType {
public:
    static ActorTypeUnkFOMR gInstance;

    /* 00 (base) */

    ActorTypeUnkFOMR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFOMR *GetInstance();
};
