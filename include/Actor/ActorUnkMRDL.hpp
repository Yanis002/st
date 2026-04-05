//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMRDL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMRDL();

    /* 4C */ virtual ~ActorUnkMRDL() override;

    void func_ov075_0215df54(void);
    void func_ov075_0215df94(void);
    void func_ov075_0215dff4(void);
    void func_ov075_0215e008(void);
    void func_ov075_0215e044(void);
    void func_ov075_0215e050(void);
    void func_ov075_0215e240(void);
    void func_ov075_0215e254(void);
    void func_ov075_0215e270(void);
};

class ActorTypeUnkMRDL : public ActorType {
public:
    static ActorTypeUnkMRDL gInstance;

    /* 00 (base) */

    ActorTypeUnkMRDL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMRDL *GetInstance();
};
