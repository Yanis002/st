//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMT2();

    /* 4C */ virtual ~ActorUnkRMT2() override;

    void func_ov061_02158264(void);
    void func_ov061_0215828c(void);
    void func_ov061_021582ac(void);
    void func_ov061_021582fc(void);
    void func_ov061_0215831c(void);
    void func_ov061_02158344(void);
};

class ActorTypeUnkRMT2 : public ActorType {
public:
    static ActorTypeUnkRMT2 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMT2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMT2 *GetInstance();
};
