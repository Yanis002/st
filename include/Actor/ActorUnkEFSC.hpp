//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFSC();

    /* 4C */ virtual ~ActorUnkEFSC() override;

    void func_ov086_0215b834(void);
    void func_ov086_0215b85c(void);
    void func_ov086_0215b870(void);
    void func_ov086_0215b96c(void);
    void func_ov086_0215b9d4(void);
    void func_ov086_0215ba40(void);
    void func_ov086_0215ba54(void);
    void func_ov086_0215baac(void);
    void func_ov086_0215badc(void);
    void func_ov086_0215bb04(void);
    void func_ov086_0215bb20(void);
};

class ActorTypeUnkEFSC : public ActorType {
public:
    static ActorTypeUnkEFSC gInstance;

    /* 00 (base) */

    ActorTypeUnkEFSC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFSC *GetInstance();
};
