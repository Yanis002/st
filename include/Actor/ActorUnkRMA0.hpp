//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMA0();

    /* 4C */ virtual ~ActorUnkRMA0() override;

    void func_ov068_021606a8(void);
    void func_ov068_021606d0(void);
    void func_ov068_021606f0(void);
    void func_ov068_02160718(void);
    void func_ov068_0216071c(void);
    void func_ov068_0216076c(void);
    void func_ov068_0216078c(void);
    void func_ov068_021607b4(void);
};

class ActorTypeUnkRMA0 : public ActorType {
public:
    static ActorTypeUnkRMA0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMA0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMA0 *GetInstance();
};
