//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFBCH();

    /* 4C */ virtual ~ActorUnkFBCH() override;

    void func_ov062_02158764(void);
    void func_ov062_0215878c(void);
    void func_ov062_021587a0(void);
    void func_ov062_02158890(void);
    void func_ov062_021588a4(void);
    void func_ov062_021589d8(void);
    void func_ov062_021589fc(void);
    void func_ov062_02158a00(void);
    void func_ov062_02158a9c(void);
    void func_ov062_02158ab0(void);
    void func_ov062_02158b00(void);
    void func_ov062_02158b10(void);
    void func_ov062_02158b18(void);
    void func_ov062_02158b34(void);
    void func_ov062_02158b50(void);
    void func_ov062_02158b88(void);
    void func_ov062_02158bc8(void);
};

class ActorTypeUnkFBCH : public ActorType {
public:
    static ActorTypeUnkFBCH gInstance;

    /* 00 (base) */

    ActorTypeUnkFBCH();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFBCH *GetInstance();
};
