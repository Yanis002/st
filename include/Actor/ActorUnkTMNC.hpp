//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTMNC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTMNC();

    /* 4C */ virtual ~ActorUnkTMNC() override;

    void func_ov058_0214dd00(void);
    void func_ov058_0214dd44(void);
    void func_ov058_0214dde0(void);
    void func_ov058_0214de70(void);
    void func_ov058_0214def0(void);
    void func_ov058_0214df18(void);
};

class ActorTypeUnkTMNC : public ActorType {
public:
    static ActorTypeUnkTMNC gInstance;

    /* 00 (base) */

    ActorTypeUnkTMNC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTMNC *GetInstance();
};
