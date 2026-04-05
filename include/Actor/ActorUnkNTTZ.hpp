//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNTTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNTTZ();

    /* 4C */ virtual ~ActorUnkNTTZ() override;

    void func_ov031_020f6138(void);
    void func_ov031_020f6160(void);
    void func_ov031_020f6190(void);
    void func_ov031_020f6198(void);
    void func_ov031_020f619c(void);
    void func_ov031_020f61a0(void);
    void func_ov031_020f61f0(void);
    void func_ov031_020f6240(void);
    void func_ov031_020f6254(void);
    void func_ov031_020f6270(void);
    void _ZN13Actor_c4_BaseC2EPvi(void);
    void func_ov031_020f62e4(void);
    void _ZN8Actor_c419func_ov031_020f6374Ev(void);
    void _ZN8Actor_c419func_ov031_020f637cEv(void);
    void _ZN8Actor_c419func_ov031_020f6384Ei(void);
    void func_ov031_020f638c(void);
    void func_ov031_020f63d8(void);
    void func_ov031_020f63ec(void);
    void func_ov031_020f6448(void);
    void func_ov031_020f6528(void);
    void func_ov031_020f652c(void);
    void func_ov031_020f65c4(void);
    void func_ov031_020f661c(void);
    void func_ov031_020f6760(void);
};

class ActorTypeUnkNTTZ : public ActorType {
public:
    static ActorTypeUnkNTTZ gInstance;

    /* 00 (base) */

    ActorTypeUnkNTTZ();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNTTZ *GetInstance();
};
