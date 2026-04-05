//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRNTN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRNTN();

    /* 4C */ virtual ~ActorUnkRNTN() override;

    void func_ov086_0215bdc8(void);
    void func_ov086_0215bdf0(void);
    void func_ov086_0215bfb4(void);
    void func_ov086_0215c3cc(void);
    void func_ov086_0215c838(void);
    void func_ov086_0215c8fc(void);
    void func_ov086_0215ccf8(void);
    void func_ov086_0215cdd8(void);
    void func_ov086_0215cf94(void);
    void func_ov086_0215d154(void);
    void func_ov086_0215d394(void);
    void func_ov086_0215d610(void);
    void func_ov086_0215d890(void);
    void func_ov086_0215d9cc(void);
    void func_ov086_0215da14(void);
    void func_ov086_0215da64(void);
};

class ActorTypeUnkRNTN : public ActorType {
public:
    static ActorTypeUnkRNTN gInstance;

    /* 00 (base) */

    ActorTypeUnkRNTN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRNTN *GetInstance();
};
