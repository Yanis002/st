//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMW0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMW0();

    /* 4C */ virtual ~ActorUnkRMW0() override;

    void func_ov066_0215c598(void);
    void func_ov066_0215c5c0(void);
    void func_ov066_0215c5d4(void);
    void func_ov066_0215c650(void);
    void func_ov066_0215c674(void);
    void func_ov066_0215c688(void);
    void func_ov066_0215c7bc(void);
    void func_ov066_0215c80c(void);
    void func_ov066_0215c868(void);
    void func_ov066_0215c900(void);
    void func_ov066_0215c920(void);
    void func_ov066_0215c93c(void);
    void func_ov066_0215c97c(void);
    void func_ov066_0215c9c4(void);
    void func_ov066_0215c9d8(void);
    void func_ov066_0215c9e4(void);
    void func_ov066_0215ca08(void);
    void func_ov066_0215ca3c(void);
    void func_ov066_0215ca5c(void);
    void func_ov066_0215caac(void);
    void func_ov066_0215cab4(void);
    void func_ov066_0215cad4(void);
    void func_ov066_0215cafc(void);
};

class ActorTypeUnkRMW0 : public ActorType {
public:
    static ActorTypeUnkRMW0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMW0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMW0 *GetInstance();
};
