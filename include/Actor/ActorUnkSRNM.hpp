//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSRNM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSRNM();

    /* 4C */ virtual ~ActorUnkSRNM() override;

    void func_ov039_02119e70(void);
};

class ActorTypeUnkSRNM : public ActorType {
public:
    static ActorTypeUnkSRNM gInstance;

    /* 00 (base) */

    ActorTypeUnkSRNM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSRNM *GetInstance();
};
