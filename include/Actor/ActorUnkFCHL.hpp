//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFCHL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFCHL();

    /* 4C */ virtual ~ActorUnkFCHL() override;

    void func_ov034_02119ed4(void);
    void func_ov034_02119efc(void);
    void func_ov034_02119ff0(void);
    void func_ov034_0211a004(void);
    void func_ov034_0211a208(void);
    void func_ov034_0211a21c(void);
    void func_ov034_0211a23c(void);
    void func_ov034_0211a258(void);
    void func_ov034_0211a288(void);
    void func_ov034_0211a2c0(void);
    void func_ov034_0211a2d4(void);
};

class ActorTypeUnkFCHL : public ActorType {
public:
    static ActorTypeUnkFCHL gInstance;

    /* 00 (base) */

    ActorTypeUnkFCHL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFCHL *GetInstance();
};
