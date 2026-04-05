//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPHTM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkPHTM();

    /* 4C */ virtual ~ActorUnkPHTM() override;

    void func_ov093_0217797c(void);
    void func_ov093_021779e0(void);
};

class ActorTypeUnkPHTM : public ActorType {
public:
    static ActorTypeUnkPHTM gInstance;

    /* 00 (base) */

    ActorTypeUnkPHTM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkPHTM *GetInstance();
};
