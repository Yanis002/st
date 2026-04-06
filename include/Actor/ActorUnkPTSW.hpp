//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPTSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPTSW();

    /* 4C */ virtual ~ActorUnkPTSW() override;

    void func_ov052_021375fc(void);
    void func_ov052_0213761c(void);
    void func_ov052_02137650(void);
    void func_ov052_02137684(void);
    void func_ov052_02137698(void);
    void func_ov052_02137778(void);
    void func_ov052_0213778c(void);
    void func_ov052_021377a8(void);
};

class ActorTypeUnkPTSW : public ActorType {
public:
    static ActorTypeUnkPTSW gInstance;

    /* 00 (base) */

    ActorTypeUnkPTSW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkPTSW *GetInstance();
};
