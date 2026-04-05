//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPDR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSPDR();

    /* 4C */ virtual ~ActorUnkSPDR() override;

    void func_ov031_020f9edc(void);
};

class ActorTypeUnkSPDR : public ActorType {
public:
    static ActorTypeUnkSPDR gInstance;

    /* 00 (base) */

    ActorTypeUnkSPDR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSPDR *GetInstance();
};
