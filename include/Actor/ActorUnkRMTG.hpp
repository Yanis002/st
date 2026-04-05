//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMTG();

    /* 4C */ virtual ~ActorUnkRMTG() override;

    void func_ov031_020ef84c(void);
    void func_ov031_020ef874(void);
    void func_ov031_020ef8a0(void);
    void func_ov031_020ef958(void);
    void func_ov031_020ef990(void);
    void func_ov031_020ef9b0(void);
    void func_ov031_020ef9d0(void);
    void func_ov031_020ef9f8(void);
};

class ActorTypeUnkRMTG : public ActorType {
public:
    static ActorTypeUnkRMTG gInstance;

    /* 00 (base) */

    ActorTypeUnkRMTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMTG *GetInstance();
};
