//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDKTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDKTR();

    /* 4C */ virtual ~ActorUnkDKTR() override;

    void func_ov026_0212b8ec(void);
    void func_ov026_0212b958(void);
    void func_ov026_0212b9b4(void);
    void func_ov026_0212bb68(void);
    void func_ov026_0212bbf8(void);
    void func_ov026_0212bc90(void);
    void func_ov026_0212bc98(void);
    void func_ov026_0212bda0(void);
    void func_ov026_0212bdc0(void);
    void func_ov026_0212bde0(void);
    void func_ov026_0212bfec(void);
    void func_ov026_0212c134(void);
    void func_ov026_0212c138(void);
    void func_ov026_0212c2a8(void);
    void func_ov026_0212c398(void);
    void func_ov026_0212c3c8(void);
    void func_ov026_0212c3f4(void);
    void func_ov026_0212c478(void);
};

class ActorTypeUnkDKTR : public ActorType {
public:
    static ActorTypeUnkDKTR gInstance;

    /* 00 (base) */

    ActorTypeUnkDKTR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDKTR *GetInstance();
};
