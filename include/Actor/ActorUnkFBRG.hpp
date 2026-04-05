//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBRG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFBRG();

    /* 4C */ virtual ~ActorUnkFBRG() override;

    void func_ov094_0216de98(void);
    void func_ov094_0216ded4(void);
    void func_ov094_0216df94(void);
    void func_ov094_0216dfa8(void);
    void func_ov094_0216e290(void);
    void func_ov094_0216e2a4(void);
    void func_ov094_0216e2ac(void);
    void func_ov094_0216e2d4(void);
    void func_ov094_0216e2f4(void);
    void func_ov094_0216e300(void);
    void func_ov094_0216e31c(void);
    void func_ov094_0216e34c(void);
    void func_ov094_0216e384(void);
};

class ActorTypeUnkFBRG : public ActorType {
public:
    static ActorTypeUnkFBRG gInstance;

    /* 00 (base) */

    ActorTypeUnkFBRG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFBRG *GetInstance();
};
