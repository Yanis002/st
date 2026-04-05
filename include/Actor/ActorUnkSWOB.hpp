//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWOB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSWOB();

    /* 4C */ virtual ~ActorUnkSWOB() override;

    void func_ov000_0209a8e8(void);
    void func_ov000_0209a910(void);
    void func_ov000_0209a948(void);
    void func_ov000_0209a9b4(void);
    void func_ov000_0209aa30(void);
    void func_ov000_0209ac64(void);
    void func_ov000_0209ac78(void);
    void func_ov000_0209ac94(void);
};

class ActorTypeUnkSWOB : public ActorType {
public:
    static ActorTypeUnkSWOB gInstance;

    /* 00 (base) */

    ActorTypeUnkSWOB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSWOB *GetInstance();
};
