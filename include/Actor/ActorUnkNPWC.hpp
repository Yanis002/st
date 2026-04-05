//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNPWC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNPWC();

    /* 4C */ virtual ~ActorUnkNPWC() override;

    void func_ov083_0215c350(void);
    void func_ov083_0215c378(void);
    void func_ov083_0215c3b4(void);
    void func_ov083_0215c458(void);
    void func_ov083_0215c478(void);
    void func_ov083_0215c4a0(void);
};

class ActorTypeUnkNPWC : public ActorType {
public:
    static ActorTypeUnkNPWC gInstance;

    /* 00 (base) */

    ActorTypeUnkNPWC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNPWC *GetInstance();
};
