//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMT4();

    /* 4C */ virtual ~ActorUnkRMT4() override;

    void func_ov061_021584ac(void);
    void func_ov061_021584d4(void);
    void func_ov061_021584f4(void);
    void func_ov061_02158544(void);
    void func_ov061_02158564(void);
    void func_ov061_0215858c(void);
};

class ActorTypeUnkRMT4 : public ActorType {
public:
    static ActorTypeUnkRMT4 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMT4();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMT4 *GetInstance();
};
