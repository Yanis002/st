//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYKAP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkYKAP();

    /* 4C */ virtual ~ActorUnkYKAP() override;

    void func_ov040_0212c7b8(void);
};

class ActorTypeUnkYKAP : public ActorType {
public:
    static ActorTypeUnkYKAP gInstance;

    /* 00 (base) */

    ActorTypeUnkYKAP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkYKAP *GetInstance();
};
