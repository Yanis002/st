//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkENGE : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkENGE();

    /* 4C */ virtual ~ActorUnkENGE() override;

    void func_ov070_0213f374(void);
    void func_ov070_0213f3b0(void);
    void func_ov070_0213f3e4(void);
    void func_ov070_0213f430(void);
    void func_ov070_0213f508(void);
    void func_ov070_0213f548(void);
    void func_ov070_0213f65c(void);
    void func_ov070_0213f750(void);
    void func_ov070_0213f764(void);
    void func_ov070_0213f780(void);
};

class ActorTypeUnkENGE : public ActorType {
public:
    static ActorTypeUnkENGE gInstance;

    /* 00 (base) */

    ActorTypeUnkENGE();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkENGE *GetInstance();
};
