//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMF0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMF0();

    /* 4C */ virtual ~ActorUnkRMF0() override;

    void func_ov064_021592a8(void);
    void func_ov064_021592d0(void);
    void func_ov064_021592f0(void);
    void func_ov064_02159340(void);
    void func_ov064_02159360(void);
    void func_ov064_02159388(void);
};

class ActorTypeUnkRMF0 : public ActorType {
public:
    static ActorTypeUnkRMF0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMF0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMF0 *GetInstance();
};
