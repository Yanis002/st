//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTET : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTTET();

    /* 4C */ virtual ~ActorUnkTTET() override;

    void func_ov026_02122eec(void);
    void func_ov026_02122f14(void);
    void func_ov026_02122f54(void);
    void func_ov026_02122f94(void);
    void func_ov026_02122ff8(void);
    void func_ov026_021230b0(void);
    void func_ov026_02123110(void);
    void func_ov026_0212344c(void);
    void func_ov026_02123544(void);
    void func_ov026_021235bc(void);
    void func_ov026_021235c4(void);
    void func_ov026_021235d8(void);
    void func_ov026_021235ec(void);
    void func_ov026_02123608(void);
};

class ActorTypeUnkTTET : public ActorType {
public:
    static ActorTypeUnkTTET gInstance;

    /* 00 (base) */

    ActorTypeUnkTTET();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTTET *GetInstance();
};
