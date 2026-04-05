//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDSFR();

    /* 4C */ virtual ~ActorUnkDSFR() override;

    void func_ov077_02158ba8(void);
    void func_ov077_02158bd0(void);
    void func_ov077_02158bf0(void);
    void func_ov077_02158c40(void);
    void func_ov077_02158c60(void);
    void func_ov077_02158c88(void);
};

class ActorTypeUnkDSFR : public ActorType {
public:
    static ActorTypeUnkDSFR gInstance;

    /* 00 (base) */

    ActorTypeUnkDSFR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDSFR *GetInstance();
};
