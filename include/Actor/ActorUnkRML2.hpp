//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRML2();

    /* 4C */ virtual ~ActorUnkRML2() override;

    void func_ov062_02158148(void);
    void func_ov062_02158170(void);
    void func_ov062_02158190(void);
    void func_ov062_021581e0(void);
    void func_ov062_02158200(void);
    void func_ov062_02158228(void);
};

class ActorTypeUnkRML2 : public ActorType {
public:
    static ActorTypeUnkRML2 gInstance;

    /* 00 (base) */

    ActorTypeUnkRML2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRML2 *GetInstance();
};
