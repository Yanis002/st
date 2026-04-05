//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLON : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBLON();

    /* 4C */ virtual ~ActorUnkBLON() override;

    void func_ov093_0217759c(void);
    void func_ov093_021775c4(void);
    void func_ov093_02177618(void);
    void func_ov093_02177640(void);
    void func_ov093_021776ec(void);
    void func_ov093_02177700(void);
    void func_ov093_02177724(void);
    void func_ov093_021778c4(void);
    void func_ov093_021778dc(void);
    void func_ov093_02177904(void);
    void func_ov093_02177934(void);
};

class ActorTypeUnkBLON : public ActorType {
public:
    static ActorTypeUnkBLON gInstance;

    /* 00 (base) */

    ActorTypeUnkBLON();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBLON *GetInstance();
};
