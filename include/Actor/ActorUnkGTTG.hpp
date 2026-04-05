//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGTTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGTTG();

    /* 4C */ virtual ~ActorUnkGTTG() override;

    void func_ov057_0213a828(void);
    void func_ov057_0213a868(void);
    void func_ov057_0213a8b8(void);
    void func_ov057_0213a9a0(void);
    void func_ov057_0213a9c0(void);
    void func_ov057_0213a9e8(void);
};

class ActorTypeUnkGTTG : public ActorType {
public:
    static ActorTypeUnkGTTG gInstance;

    /* 00 (base) */

    ActorTypeUnkGTTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGTTG *GetInstance();
};
