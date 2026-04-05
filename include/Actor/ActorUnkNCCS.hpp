//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNCCS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNCCS();

    /* 4C */ virtual ~ActorUnkNCCS() override;

    void func_ov040_0212abfc(void);
};

class ActorTypeUnkNCCS : public ActorType {
public:
    static ActorTypeUnkNCCS gInstance;

    /* 00 (base) */

    ActorTypeUnkNCCS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNCCS *GetInstance();
};
