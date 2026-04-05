//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkL2V2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkL2V2();

    /* 4C */ virtual ~ActorUnkL2V2() override;

    void func_ov044_0212c674(void);
    void func_ov044_0212c69c(void);
    void func_ov044_0212c760(void);
    void func_ov044_0212c7d4(void);
    void func_ov044_0212c7e8(void);
    void func_ov044_0212c7fc(void);
    void func_ov044_0212c81c(void);
    void func_ov044_0212c844(void);
    void func_ov044_0212c874(void);
};

class ActorTypeUnkL2V2 : public ActorType {
public:
    static ActorTypeUnkL2V2 gInstance;

    /* 00 (base) */

    ActorTypeUnkL2V2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkL2V2 *GetInstance();
};
