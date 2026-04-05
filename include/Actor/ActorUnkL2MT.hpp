//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkL2MT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkL2MT();

    /* 4C */ virtual ~ActorUnkL2MT() override;

    void func_ov044_0212c8b8(void);
    void func_ov044_0212c8e0(void);
    void func_ov044_0212c954(void);
    void func_ov044_0212c974(void);
    void func_ov044_0212c978(void);
    void func_ov044_0212c998(void);
    void func_ov044_0212c9b8(void);
};

class ActorTypeUnkL2MT : public ActorType {
public:
    static ActorTypeUnkL2MT gInstance;

    /* 00 (base) */

    ActorTypeUnkL2MT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkL2MT *GetInstance();
};
