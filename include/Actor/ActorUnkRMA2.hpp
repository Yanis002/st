//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMA2();

    /* 4C */ virtual ~ActorUnkRMA2() override;

    void func_ov068_02160558(void);
    void func_ov068_02160580(void);
    void func_ov068_021605a0(void);
    void func_ov068_021605c8(void);
    void func_ov068_021605cc(void);
    void func_ov068_0216061c(void);
    void func_ov068_0216063c(void);
    void func_ov068_02160664(void);
};

class ActorTypeUnkRMA2 : public ActorType {
public:
    static ActorTypeUnkRMA2 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMA2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMA2 *GetInstance();
};
