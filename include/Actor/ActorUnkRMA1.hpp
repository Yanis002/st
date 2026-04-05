//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMA1();

    /* 4C */ virtual ~ActorUnkRMA1() override;

    void func_ov068_02160408(void);
    void func_ov068_02160430(void);
    void func_ov068_02160450(void);
    void func_ov068_02160478(void);
    void func_ov068_0216047c(void);
    void func_ov068_021604cc(void);
    void func_ov068_021604ec(void);
    void func_ov068_02160514(void);
};

class ActorTypeUnkRMA1 : public ActorType {
public:
    static ActorTypeUnkRMA1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMA1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMA1 *GetInstance();
};
