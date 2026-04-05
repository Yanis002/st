//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRUP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTRUP();

    /* 4C */ virtual ~ActorUnkTRUP() override;

    void func_ov026_02111364(void);
    void func_ov026_0211139c(void);
    void func_ov026_02111418(void);
    void func_ov026_02111440(void);
    void func_ov026_02111498(void);
    void func_ov026_02111578(void);
    void func_ov026_021115fc(void);
    void func_ov026_02111618(void);
    void func_ov026_0211162c(void);
};

class ActorTypeUnkTRUP : public ActorType {
public:
    static ActorTypeUnkTRUP gInstance;

    /* 00 (base) */

    ActorTypeUnkTRUP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTRUP *GetInstance();
};
