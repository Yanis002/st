//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKOTA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkKOTA();

    /* 4C */ virtual ~ActorUnkKOTA() override;

    void func_ov094_0216e3d4(void);
    void func_ov094_0216e408(void);
    void func_ov094_0216e43c(void);
    void func_ov094_0216e444(void);
    void func_ov094_0216e490(void);
    void func_ov094_0216e4a4(void);
    void func_ov094_0216e4f0(void);
    void func_ov094_0216e5a4(void);
    void func_ov094_0216e9fc(void);
    void func_ov094_0216ed94(void);
    void func_ov094_0216edd0(void);
    void func_ov094_0216ede4(void);
    void func_ov094_0216ee00(void);
};

class ActorTypeUnkKOTA : public ActorType {
public:
    static ActorTypeUnkKOTA gInstance;

    /* 00 (base) */

    ActorTypeUnkKOTA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkKOTA *GetInstance();
};
