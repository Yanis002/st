//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMF1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMF1();

    /* 4C */ virtual ~ActorUnkRMF1() override;

    void func_ov064_021593cc(void);
    void func_ov064_021593f4(void);
    void func_ov064_02159414(void);
    void func_ov064_02159464(void);
    void func_ov064_02159484(void);
    void func_ov064_021594ac(void);
};

class ActorTypeUnkRMF1 : public ActorType {
public:
    static ActorTypeUnkRMF1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMF1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMF1 *GetInstance();
};
