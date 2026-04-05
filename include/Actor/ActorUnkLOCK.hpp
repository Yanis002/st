//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLOCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkLOCK();

    /* 4C */ virtual ~ActorUnkLOCK() override;

    void func_ov094_02166068(void);
    void func_ov094_021660a8(void);
    void func_ov094_02166128(void);
    void func_ov094_0216613c(void);
    void func_ov094_02166144(void);
    void func_ov094_02166150(void);
    void func_ov094_02166154(void);
    void func_ov094_02166284(void);
    void func_ov094_02166298(void);
    void func_ov094_021662b4(void);
};

class ActorTypeUnkLOCK : public ActorType {
public:
    static ActorTypeUnkLOCK gInstance;

    /* 00 (base) */

    ActorTypeUnkLOCK();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkLOCK *GetInstance();
};
