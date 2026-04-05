//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBWS();

    /* 4C */ virtual ~ActorUnkRBWS() override;

    void func_ov083_0215c1c8(void);
    void func_ov083_0215c1f0(void);
    void func_ov083_0215c264(void);
    void func_ov083_0215c2a0(void);
    void func_ov083_0215c2a4(void);
    void func_ov083_0215c2c4(void);
    void func_ov083_0215c2e4(void);
    void func_ov083_0215c30c(void);
};

class ActorTypeUnkRBWS : public ActorType {
public:
    static ActorTypeUnkRBWS gInstance;

    /* 00 (base) */

    ActorTypeUnkRBWS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBWS *GetInstance();
};
