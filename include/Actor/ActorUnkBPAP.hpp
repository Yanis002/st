//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBPAP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBPAP();

    /* 4C */ virtual ~ActorUnkBPAP() override;

    void func_ov021_020f3800(void);
    void func_ov021_020f3838(void);
    void func_ov021_020f3858(void);
    void func_ov021_020f3884(void);
    void func_ov021_020f3898(void);
    void func_ov021_020f38b4(void);
};

class ActorTypeUnkBPAP : public ActorType {
public:
    static ActorTypeUnkBPAP gInstance;

    /* 00 (base) */

    ActorTypeUnkBPAP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBPAP *GetInstance();
};
