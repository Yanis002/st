//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMS0();

    /* 4C */ virtual ~ActorUnkRMS0() override;

    void func_ov065_02158dc0(void);
    void func_ov065_02158de8(void);
    void func_ov065_02158e08(void);
    void func_ov065_02158e58(void);
    void func_ov065_02158e78(void);
    void func_ov065_02158ea0(void);
};

class ActorTypeUnkRMS0 : public ActorType {
public:
    static ActorTypeUnkRMS0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMS0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMS0 *GetInstance();
};
