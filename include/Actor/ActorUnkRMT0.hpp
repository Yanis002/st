//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMT0();

    /* 4C */ virtual ~ActorUnkRMT0() override;

    void func_ov061_02157ed0(void);
    void func_ov061_02157ef8(void);
    void func_ov061_02157f18(void);
    void func_ov061_02157f68(void);
    void func_ov061_02157f88(void);
    void func_ov061_02157fb0(void);
};

class ActorTypeUnkRMT0 : public ActorType {
public:
    static ActorTypeUnkRMT0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMT0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMT0 *GetInstance();
};
