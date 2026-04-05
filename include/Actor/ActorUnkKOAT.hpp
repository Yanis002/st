//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKOAT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkKOAT();

    /* 4C */ virtual ~ActorUnkKOAT() override;

    void func_ov058_02141e08(void);
    void func_ov058_02141e54(void);
    void func_ov058_02141fc0(void);
    void func_ov058_021420b4(void);
    void func_ov058_021420dc(void);
    void func_ov058_0214210c(void);
    void func_ov058_02142228(void);
    void func_ov058_021422f0(void);
    void func_ov058_02142368(void);
};

class ActorTypeUnkKOAT : public ActorType {
public:
    static ActorTypeUnkKOAT gInstance;

    /* 00 (base) */

    ActorTypeUnkKOAT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkKOAT *GetInstance();
};
