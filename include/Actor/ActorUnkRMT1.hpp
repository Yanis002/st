//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMT1();

    /* 4C */ virtual ~ActorUnkRMT1() override;

    void func_ov061_02157ff4(void);
    void func_ov061_0215801c(void);
    void func_ov061_02158090(void);
    void func_ov061_021580a4(void);
    void func_ov061_021580f8(void);
    void func_ov061_0215810c(void);
    void func_ov061_02158120(void);
    void func_ov061_02158170(void);
    void func_ov061_02158194(void);
    void func_ov061_021581a4(void);
    void func_ov061_021581ac(void);
    void func_ov061_021581c8(void);
    void func_ov061_021581f0(void);
    void func_ov061_02158220(void);
};

class ActorTypeUnkRMT1 : public ActorType {
public:
    static ActorTypeUnkRMT1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMT1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMT1 *GetInstance();
};
