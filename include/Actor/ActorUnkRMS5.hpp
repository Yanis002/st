//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS5 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMS5();

    /* 4C */ virtual ~ActorUnkRMS5() override;

    void func_ov065_02159374(void);
    void func_ov065_0215939c(void);
    void func_ov065_021593bc(void);
    void func_ov065_0215940c(void);
    void func_ov065_0215942c(void);
    void func_ov065_02159454(void);
};

class ActorTypeUnkRMS5 : public ActorType {
public:
    static ActorTypeUnkRMS5 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMS5();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMS5 *GetInstance();
};
