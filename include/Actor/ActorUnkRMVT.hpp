//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMVT();

    /* 4C */ virtual ~ActorUnkRMVT() override;

    void func_ov059_0216156c(void);
    void func_ov059_021615ac(void);
    void func_ov059_0216169c(void);
    void func_ov059_021616b8(void);
    void func_ov059_021616cc(void);
    void func_ov059_02161850(void);
    void func_ov059_02161854(void);
    void func_ov059_02161868(void);
    void func_ov059_021618ec(void);
    void func_ov059_021619e0(void);
    void func_ov059_021619f8(void);
    void func_ov059_02161a70(void);
    void func_ov059_02161aa8(void);
    void func_ov059_02161ae8(void);
    void func_ov059_02161afc(void);
    void func_ov059_02161b1c(void);
    void func_ov059_02161b5c(void);
    void func_ov059_02161b60(void);
    void func_ov059_02161b64(void);
    void func_ov059_02161b78(void);
    void func_ov059_02161b84(void);
    void func_ov059_02161ba4(void);
};

class ActorTypeUnkRMVT : public ActorType {
public:
    static ActorTypeUnkRMVT gInstance;

    /* 00 (base) */

    ActorTypeUnkRMVT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMVT *GetInstance();
};
