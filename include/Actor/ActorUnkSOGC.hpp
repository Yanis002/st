//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOGC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSOGC();

    /* 4C */ virtual ~ActorUnkSOGC() override;

    void func_ov060_021593f0(void);
    void func_ov060_0215944c(void);
    void func_ov060_0215965c(void);
    void func_ov060_021596e0(void);
    void func_ov060_0215976c(void);
    void func_ov060_02159838(void);
    void func_ov060_02159e54(void);
    void func_ov060_02159e8c(void);
    void func_ov060_0215a044(void);
    void func_ov060_0215a258(void);
    void func_ov060_0215a288(void);
    void func_ov060_0215a2d4(void);
    void func_ov060_0215a2e0(void);
    void func_ov060_0215a2ec(void);
    void func_ov060_0215a304(void);
    void func_ov060_0215a330(void);
    void func_ov060_0215a3c4(void);
    void func_ov060_0215a450(void);
    void func_ov060_0215a4f8(void);
    void func_ov060_0215a7bc(void);
    void func_ov060_0215a830(void);
    void func_ov060_0215aa60(void);
    void func_ov060_0215aaec(void);
    void func_ov060_0215ade0(void);
    void func_ov060_0215adf8(void);
    void func_ov060_0215af74(void);
    void func_ov060_0215afe8(void);
    void func_ov060_0215b09c(void);
    void func_ov060_0215b0a0(void);
    void func_ov060_0215b12c(void);
    void func_ov060_0215b1a0(void);
    void func_ov060_0215b26c(void);
    void func_ov060_0215b450(void);
    void func_ov060_0215b684(void);
    void func_ov060_0215b6b4(void);
    void func_ov060_0215b878(void);
    void func_ov060_0215b8e4(void);
    void func_ov060_0215b920(void);
    void func_ov060_0215b954(void);
    void func_ov060_0215bd64(void);
    void func_ov060_0215bf90(void);
    void func_ov060_0215bf9c(void);
    void func_ov060_0215bfd8(void);
    void func_ov060_0215c034(void);
    void func_ov060_0215c118(void);
    void func_ov060_0215c224(void);
    void func_ov060_0215c35c(void);
    void func_ov060_0215c390(void);
    void func_ov060_0215c478(void);
    void func_ov060_0215c4ec(void);
    void func_ov060_0215c530(void);
    void func_ov060_0215c614(void);
    void func_ov060_0215c6a0(void);
    void func_ov060_0215c6b4(void);
    void func_ov060_0215c6c8(void);
};

class ActorTypeUnkSOGC : public ActorType {
public:
    static ActorTypeUnkSOGC gInstance;

    /* 00 (base) */

    ActorTypeUnkSOGC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSOGC *GetInstance();
};
