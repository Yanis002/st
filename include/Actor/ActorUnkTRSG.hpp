//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRSG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTRSG();

    /* 4C */ virtual ~ActorUnkTRSG() override;

    void func_ov026_0212364c(void);
    void func_ov026_02123674(void);
    void func_ov026_0212369c(void);
    void func_ov026_02123700(void);
    void func_ov026_02123730(void);
    void func_ov026_0212386c(void);
    void func_ov026_02123a60(void);
    void func_ov026_02123a74(void);
    void func_ov026_02123a90(void);
};

class ActorTypeUnkTRSG : public ActorType {
public:
    static ActorTypeUnkTRSG gInstance;

    /* 00 (base) */

    ActorTypeUnkTRSG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTRSG *GetInstance();
};
