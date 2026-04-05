//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPCTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkPCTG();

    /* 4C */ virtual ~ActorUnkPCTG() override;

    void func_ov094_0216b2b4(void);
    void func_ov094_0216b384(void);
    void func_ov094_0216b43c(void);
    void func_ov094_0216b45c(void);
    void func_ov094_0216b484(void);
    void func_ov094_0216b69c(void);
    void func_ov094_0216b6dc(void);
    void func_ov094_0216b714(void);
    void func_ov094_0216b718(void);
    void func_ov094_0216b858(void);
    void func_ov094_0216b890(void);
    void func_ov094_0216be38(void);
    void func_ov094_0216bf58(void);
    void func_ov094_0216bfa4(void);
    void func_ov094_0216c1c8(void);
    void func_ov094_0216c34c(void);
    void func_ov094_0216c36c(void);
    void func_ov094_0216c398(void);
    void func_ov094_0216c3ac(void);
    void func_ov094_0216c3e4(void);
};

class ActorTypeUnkPCTG : public ActorType {
public:
    static ActorTypeUnkPCTG gInstance;

    /* 00 (base) */

    ActorTypeUnkPCTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkPCTG *GetInstance();
};
