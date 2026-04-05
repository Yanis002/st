//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRML0();

    /* 4C */ virtual ~ActorUnkRML0() override;

    void func_ov062_02157ed0(void);
    void func_ov062_02157ef8(void);
    void func_ov062_02157f18(void);
    void func_ov062_02157f48(void);
    void func_ov062_02157f98(void);
    void func_ov062_02157fb8(void);
    void func_ov062_02157fe0(void);
};

class ActorTypeUnkRML0 : public ActorType {
public:
    static ActorTypeUnkRML0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRML0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRML0 *GetInstance();
};
