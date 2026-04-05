//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPBM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSPBM();

    /* 4C */ virtual ~ActorUnkSPBM() override;

    void func_ov031_020f9e6c(void);
};

class ActorTypeUnkSPBM : public ActorType {
public:
    static ActorTypeUnkSPBM gInstance;

    /* 00 (base) */

    ActorTypeUnkSPBM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSPBM *GetInstance();
};
