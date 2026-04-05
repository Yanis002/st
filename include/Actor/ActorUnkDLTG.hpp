//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDLTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDLTG();

    /* 4C */ virtual ~ActorUnkDLTG() override;

    void func_ov047_02135710(void);
    void func_ov047_02135738(void);
    void func_ov047_02135764(void);
    void func_ov047_021357ac(void);
    void func_ov047_021357fc(void);
    void func_ov047_02135878(void);
    void func_ov047_021358a4(void);
};

class ActorTypeUnkDLTG : public ActorType {
public:
    static ActorTypeUnkDLTG gInstance;

    /* 00 (base) */

    ActorTypeUnkDLTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDLTG *GetInstance();
};
