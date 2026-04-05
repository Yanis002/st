//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFW3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFW3();

    /* 4C */ virtual ~ActorUnkEFW3() override;

    void func_ov083_0215c698(void);
    void func_ov083_0215c6c8(void);
    void func_ov083_0215c6e8(void);
    void func_ov083_0215c784(void);
    void func_ov083_0215c7a0(void);
    void func_ov083_0215c7d0(void);
};

class ActorTypeUnkEFW3 : public ActorType {
public:
    static ActorTypeUnkEFW3 gInstance;

    /* 00 (base) */

    ActorTypeUnkEFW3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFW3 *GetInstance();
};
