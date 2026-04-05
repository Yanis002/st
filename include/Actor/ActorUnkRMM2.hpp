//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMM2();

    /* 4C */ virtual ~ActorUnkRMM2() override;

    void func_ov088_02172200(void);
    void func_ov088_02172228(void);
    void func_ov088_02172248(void);
    void func_ov088_02172298(void);
    void func_ov088_021722a0(void);
    void func_ov088_021722c8(void);
};

class ActorTypeUnkRMM2 : public ActorType {
public:
    static ActorTypeUnkRMM2 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMM2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMM2 *GetInstance();
};
