//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMEQ : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMEQ();

    /* 4C */ virtual ~ActorUnkDMEQ() override;

    void func_ov088_0216e290(void);
    void func_ov088_0216e2b8(void);
    void func_ov088_0216e2ec(void);
    void func_ov088_0216e300(void);
    void func_ov088_0216e31c(void);
    void func_ov088_0216e718(void);
    void func_ov088_0216e738(void);
    void func_ov088_0216e824(void);
};

class ActorTypeUnkDMEQ : public ActorType {
public:
    static ActorTypeUnkDMEQ gInstance;

    /* 00 (base) */

    ActorTypeUnkDMEQ();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMEQ *GetInstance();
};
