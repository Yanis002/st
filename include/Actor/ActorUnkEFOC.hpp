//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFOC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFOC();

    /* 4C */ virtual ~ActorUnkEFOC() override;

    void func_ov094_0216ee44(void);
    void func_ov094_0216ee98(void);
    void func_ov094_0216ef0c(void);
    void func_ov094_0216ef70(void);
    void func_ov094_0216f030(void);
    void func_ov094_0216f0a8(void);
    void func_ov094_0216f128(void);
    void func_ov094_0216f13c(void);
    void func_ov094_0216f1f8(void);
    void func_ov094_0216f20c(void);
    void func_ov094_0216f250(void);
    void func_ov094_0216f28c(void);
    void func_ov094_0216f3c0(void);
    void func_ov094_0216f3e4(void);
    void func_ov094_0216f3f8(void);
    void func_ov094_0216f440(void);
    void func_ov094_0216f4ac(void);
    void func_ov094_0216f508(void);
    void func_ov094_0216f52c(void);
    void func_ov094_0216f530(void);
    void func_ov094_0216f544(void);
    void func_ov094_0216f568(void);
    void func_ov094_0216f59c(void);
    void func_ov094_0216f5b8(void);
    void func_ov094_0216f720(void);
    void func_ov094_0216f748(void);
    void func_ov094_0216f7f8(void);
    void func_ov094_0216f84c(void);
    void func_ov094_0216f94c(void);
    void func_ov094_0216f96c(void);
    void func_ov094_0216fa10(void);
    void func_ov094_0216fa44(void);
    void func_ov094_0216fa64(void);
};

class ActorTypeUnkEFOC : public ActorType {
public:
    static ActorTypeUnkEFOC gInstance;

    /* 00 (base) */

    ActorTypeUnkEFOC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFOC *GetInstance();
};
