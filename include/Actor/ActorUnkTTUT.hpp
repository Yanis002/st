//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTUT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTTUT();

    /* 4C */ virtual ~ActorUnkTTUT() override;

    void func_ov091_02175810(void);
    void func_ov091_02175838(void);
    void func_ov091_02175868(void);
    void func_ov091_02175944(void);
    void func_ov091_02175bbc(void);
    void func_ov091_02175c8c(void);
    void func_ov091_02175ca0(void);
    void func_ov091_02175cbc(void);
};

class ActorTypeUnkTTUT : public ActorType {
public:
    static ActorTypeUnkTTUT gInstance;

    /* 00 (base) */

    ActorTypeUnkTTUT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTTUT *GetInstance();
};
