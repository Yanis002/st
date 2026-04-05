//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTCOW : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTCOW();

    /* 4C */ virtual ~ActorUnkTCOW() override;

    void func_ov026_02127ff4(void);
    void func_ov026_0212807c(void);
    void func_ov026_021282c8(void);
    void func_ov026_0212847c(void);
    void func_ov026_02128480(void);
    void func_ov026_021285dc(void);
    void func_ov026_02128624(void);
    void func_ov026_021289a4(void);
    void func_ov026_02128a74(void);
    void func_ov026_02128b6c(void);
    void func_ov026_02128c50(void);
    void func_ov026_02128e4c(void);
    void func_ov026_02128ed8(void);
    void func_ov026_02129204(void);
    void func_ov026_021292e8(void);
    void func_ov026_0212932c(void);
    void func_ov026_0212947c(void);
    void func_ov026_02129548(void);
    void func_ov026_021296c0(void);
    void func_ov026_02129b0c(void);
    void func_ov026_02129ba0(void);
    void func_ov026_02129d28(void);
    void func_ov026_02129de8(void);
    void func_ov026_0212a18c(void);
    void func_ov026_0212a21c(void);
    void func_ov026_0212a4b8(void);
    void func_ov026_0212a4e0(void);
    void func_ov026_0212a5c4(void);
    void func_ov026_0212a61c(void);
    void func_ov026_0212a6c0(void);
    void func_ov026_0212a7a0(void);
    void func_ov026_0212aaa0(void);
    void func_ov026_0212aaec(void);
    void func_ov026_0212abf0(void);
    void func_ov026_0212accc(void);
    void func_ov026_0212acfc(void);
    void func_ov026_0212aec4(void);
    void func_ov026_0212af54(void);
    void func_ov026_0212aff0(void);
    void func_ov026_0212b158(void);
    void func_ov026_0212b180(void);
    void func_ov026_0212b19c(void);
    void func_ov026_0212b1c0(void);
    void func_ov026_0212b1c8(void);
    void func_ov026_0212b49c(void);
    void func_ov026_0212b698(void);
    void func_ov026_0212b6ec(void);
    void func_ov026_0212b764(void);
    void func_ov026_0212b7f8(void);
    void func_ov026_0212b840(void);
    void func_ov026_0212b890(void);
    void func_ov026_0212b8a4(void);
};

class ActorTypeUnkTCOW : public ActorType {
public:
    static ActorTypeUnkTCOW gInstance;

    /* 00 (base) */

    ActorTypeUnkTCOW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTCOW *GetInstance();
};
