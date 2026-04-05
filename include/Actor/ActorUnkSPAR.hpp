//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPAR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSPAR();

    /* 4C */ virtual ~ActorUnkSPAR() override;

    void func_ov031_020f9dfc(void);
};

class ActorTypeUnkSPAR : public ActorType {
public:
    static ActorTypeUnkSPAR gInstance;

    /* 00 (base) */

    ActorTypeUnkSPAR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSPAR *GetInstance();
};
