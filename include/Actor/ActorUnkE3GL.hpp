//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3GL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkE3GL();

    /* 4C */ virtual ~ActorUnkE3GL() override;

    void func_ov090_02170fac(void);
    void func_ov090_02170fd4(void);
    void func_ov090_02171024(void);
    void func_ov090_02171038(void);
    void func_ov090_02171054(void);
    void func_ov090_02171064(void);
    void func_ov090_02171074(void);
    void func_ov090_02171108(void);
};

class ActorTypeUnkE3GL : public ActorType {
public:
    static ActorTypeUnkE3GL gInstance;

    /* 00 (base) */

    ActorTypeUnkE3GL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkE3GL *GetInstance();
};
