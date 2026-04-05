//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSNMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSNMB();

    /* 4C */ virtual ~ActorUnkSNMB() override;

    void func_ov028_0214317c(void);
    void func_ov028_021431dc(void);
    void func_ov028_02143290(void);
    void func_ov028_021432b4(void);
    void func_ov028_021432e4(void);
    void func_ov028_02143440(void);
    void func_ov028_021434f0(void);
    void func_ov028_02143630(void);
    void func_ov028_021437a8(void);
    void func_ov028_0214383c(void);
    void func_ov028_0214385c(void);
};

class ActorTypeUnkSNMB : public ActorType {
public:
    static ActorTypeUnkSNMB gInstance;

    /* 00 (base) */

    ActorTypeUnkSNMB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSNMB *GetInstance();
};
