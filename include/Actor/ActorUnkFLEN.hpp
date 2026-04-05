//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLEN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFLEN();

    /* 4C */ virtual ~ActorUnkFLEN() override;

    void func_ov031_020f8054(void);
    void func_ov031_020f8090(void);
    void func_ov031_020f80b8(void);
    void func_ov031_020f8118(void);
    void func_ov031_020f81b4(void);
    void func_ov031_020f81f8(void);
    void func_ov031_020f829c(void);
    void func_ov031_020f82b0(void);
    void func_ov031_020f82cc(void);
};

class ActorTypeUnkFLEN : public ActorType {
public:
    static ActorTypeUnkFLEN gInstance;

    /* 00 (base) */

    ActorTypeUnkFLEN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFLEN *GetInstance();
};
