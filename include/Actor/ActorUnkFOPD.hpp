//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOPD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFOPD();

    /* 4C */ virtual ~ActorUnkFOPD() override;

    void func_ov040_0212afd0(void);
};

class ActorTypeUnkFOPD : public ActorType {
public:
    static ActorTypeUnkFOPD gInstance;

    /* 00 (base) */

    ActorTypeUnkFOPD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFOPD *GetInstance();
};
