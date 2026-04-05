//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDGPC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDGPC();

    /* 4C */ virtual ~ActorUnkDGPC() override;

    void func_ov073_02163258(void);
    void func_ov073_02163280(void);
    void func_ov073_021632cc(void);
    void func_ov073_0216330c(void);
    void func_ov073_0216333c(void);
    void func_ov073_02163350(void);
    void func_ov073_02163368(void);
    void func_ov073_02163388(void);
    void func_ov073_021633c0(void);
    void func_ov073_021633c8(void);
    void func_ov073_02163430(void);
    void func_ov073_02163458(void);
};

class ActorTypeUnkDGPC : public ActorType {
public:
    static ActorTypeUnkDGPC gInstance;

    /* 00 (base) */

    ActorTypeUnkDGPC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDGPC *GetInstance();
};
