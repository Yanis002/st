//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFRP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFRP();

    /* 4C */ virtual ~ActorUnkEFRP() override;

    void func_ov098_0218189c(void);
    void func_ov098_02181910(void);
    void func_ov098_021819a0(void);
    void func_ov098_02181a30(void);
    void func_ov098_02181acc(void);
    void func_ov098_02181b1c(void);
    void func_ov098_02181b30(void);
    void func_ov098_02181b88(void);
    void func_ov098_02181ba4(void);
    void func_ov098_02181d10(void);
    void func_ov098_02181d48(void);
    void func_ov098_02181d78(void);
};

class ActorTypeUnkEFRP : public ActorType {
public:
    static ActorTypeUnkEFRP gInstance;

    /* 00 (base) */

    ActorTypeUnkEFRP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFRP *GetInstance();
};
