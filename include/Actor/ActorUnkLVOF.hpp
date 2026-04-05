//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLVOF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkLVOF();

    /* 4C */ virtual ~ActorUnkLVOF() override;

    void func_ov021_020f3ad8(void);
    void func_ov021_020f3b00(void);
    void func_ov021_020f3c8c(void);
    void func_ov021_020f3ca0(void);
    void func_ov021_020f403c(void);
    void func_ov021_020f4238(void);
    void func_ov021_020f424c(void);
    void func_ov021_020f4330(void);
    void func_ov021_020f4360(void);
    void func_ov021_020f43ec(void);
    void func_ov021_020f4458(void);
    void func_ov021_020f4514(void);
    void func_ov021_020f45f8(void);
    void func_ov021_020f4624(void);
    void func_ov021_020f4660(void);
    void func_ov021_020f467c(void);
    void func_ov021_020f46c8(void);
};

class ActorTypeUnkLVOF : public ActorType {
public:
    static ActorTypeUnkLVOF gInstance;

    /* 00 (base) */

    ActorTypeUnkLVOF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkLVOF *GetInstance();
};
