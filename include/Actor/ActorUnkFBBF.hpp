//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBBF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFBBF();

    /* 4C */ virtual ~ActorUnkFBBF() override;

    void func_ov054_0213d630(void);
    void func_ov054_0213d674(void);
    void func_ov054_0213d6b0(void);
    void func_ov054_0213d6e4(void);
    void func_ov054_0213d720(void);
    void func_ov054_0213d798(void);
    void func_ov054_0213d8e0(void);
};

class ActorTypeUnkFBBF : public ActorType {
public:
    static ActorTypeUnkFBBF gInstance;

    /* 00 (base) */

    ActorTypeUnkFBBF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFBBF *GetInstance();
};
