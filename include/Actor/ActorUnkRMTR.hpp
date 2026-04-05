//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMTR();

    /* 4C */ virtual ~ActorUnkRMTR() override;

    void func_ov059_02162a00(void);
    void func_ov059_02162a28(void);
    void func_ov059_02162a9c(void);
    void func_ov059_02162ad4(void);
    void func_ov059_02162af4(void);
    void func_ov059_02162b1c(void);
    void func_ov059_02162b3c(void);
    void func_ov059_02162b64(void);
};

class ActorTypeUnkRMTR : public ActorType {
public:
    static ActorTypeUnkRMTR gInstance;

    /* 00 (base) */

    ActorTypeUnkRMTR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMTR *GetInstance();
};
