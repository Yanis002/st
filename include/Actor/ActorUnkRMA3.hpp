//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMA3();

    /* 4C */ virtual ~ActorUnkRMA3() override;

    void func_ov068_021607f8(void);
    void func_ov068_02160820(void);
    void func_ov068_02160840(void);
    void func_ov068_02160868(void);
    void func_ov068_0216086c(void);
    void func_ov068_021608bc(void);
    void func_ov068_021608dc(void);
    void func_ov068_02160904(void);
};

class ActorTypeUnkRMA3 : public ActorType {
public:
    static ActorTypeUnkRMA3 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMA3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMA3 *GetInstance();
};
