//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBWT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBWT();

    /* 4C */ virtual ~ActorUnkRBWT() override;

    void func_ov083_0215b71c(void);
    void func_ov083_0215b760(void);
    void func_ov083_0215b8c0(void);
    void func_ov083_0215b8d4(void);
    void func_ov083_0215b93c(void);
    void func_ov083_0215b9ac(void);
    void func_ov083_0215bcb8(void);
    void func_ov083_0215bcf0(void);
    void func_ov083_0215bd64(void);
    void func_ov083_0215bd78(void);
    void func_ov083_0215bdac(void);
    void func_ov083_0215bdec(void);
    void func_ov083_0215bdfc(void);
    void func_ov083_0215bec4(void);
    void func_ov083_0215bed8(void);
    void func_ov083_0215bfc4(void);
    void func_ov083_0215c0f4(void);
    void func_ov083_0215c114(void);
    void func_ov083_0215c120(void);
    void func_ov083_0215c144(void);
    void func_ov083_0215c154(void);
    void func_ov083_0215c15c(void);
    void func_ov083_0215c178(void);
};

class ActorTypeUnkRBWT : public ActorType {
public:
    static ActorTypeUnkRBWT gInstance;

    /* 00 (base) */

    ActorTypeUnkRBWT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBWT *GetInstance();
};
