//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJET : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkAJET();

    /* 4C */ virtual ~ActorUnkAJET() override;

    void func_ov068_0215aa48(void);
    void func_ov068_0215aa9c(void);
    void func_ov068_0215abf0(void);
    void func_ov068_0215ac30(void);
    void func_ov068_0215ac58(void);
    void func_ov068_0215aca0(void);
    void func_ov068_0215aecc(void);
    void func_ov068_0215b044(void);
    void func_ov068_0215b064(void);
    void func_ov068_0215b068(void);
    void func_ov068_0215b0d8(void);
    void func_ov068_0215b140(void);
    void func_ov068_0215b1ac(void);
    void func_ov068_0215b36c(void);
    void func_ov068_0215b524(void);
    void func_ov068_0215b620(void);
    void func_ov068_0215b7a8(void);
    void func_ov068_0215b7fc(void);
    void func_ov068_0215b868(void);
    void func_ov068_0215b8ec(void);
    void func_ov068_0215ba28(void);
    void func_ov068_0215bae0(void);
    void func_ov068_0215bb5c(void);
    void func_ov068_0215bbf4(void);
    void func_ov068_0215bca8(void);
    void func_ov068_0215bd14(void);
    void func_ov068_0215be6c(void);
    void func_ov068_0215bffc(void);
    void func_ov068_0215c024(void);
    void func_ov068_0215c054(void);
};

class ActorTypeUnkAJET : public ActorType {
public:
    static ActorTypeUnkAJET gInstance;

    /* 00 (base) */

    ActorTypeUnkAJET();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkAJET *GetInstance();
};
