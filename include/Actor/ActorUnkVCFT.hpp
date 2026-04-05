//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVCFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkVCFT();

    /* 4C */ virtual ~ActorUnkVCFT() override;

    void func_ov066_02158dc0(void);
    void func_ov066_02158e2c(void);
    void func_ov066_02158e74(void);
    void func_ov066_02158e90(void);
    void func_ov066_02158eb4(void);
    void func_ov066_02158ec8(void);
    void func_ov066_0215ac68(void);
    void func_ov066_0215ac70(void);
    void func_ov066_0215ae50(void);
    void func_ov066_0215b2f4(void);
    void func_ov066_0215b448(void);
    void func_ov066_0215b61c(void);
    void func_ov066_0215b67c(void);
    void func_ov066_0215b70c(void);
    void func_ov066_0215b830(void);
    void func_ov066_0215b848(void);
    void func_ov066_0215b864(void);
    void func_ov066_0215b8c4(void);
    void func_ov066_0215b938(void);
    void func_ov066_0215b9ac(void);
    void func_ov066_0215b9f4(void);
    void func_ov066_0215ba44(void);
};

class ActorTypeUnkVCFT : public ActorType {
public:
    static ActorTypeUnkVCFT gInstance;

    /* 00 (base) */

    ActorTypeUnkVCFT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkVCFT *GetInstance();
};
