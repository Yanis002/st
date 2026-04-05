//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkQKTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkQKTG();

    /* 4C */ virtual ~ActorUnkQKTG() override;

    void func_ov086_0215dcd4(void);
    void func_ov086_0215dcfc(void);
    void func_ov086_0215dd28(void);
    void func_ov086_0215dd68(void);
    void func_ov086_0215de08(void);
    void func_ov086_0215de1c(void);
    void func_ov086_0215def4(void);
    void func_ov086_0215df08(void);
};

class ActorTypeUnkQKTG : public ActorType {
public:
    static ActorTypeUnkQKTG gInstance;

    /* 00 (base) */

    ActorTypeUnkQKTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkQKTG *GetInstance();
};
