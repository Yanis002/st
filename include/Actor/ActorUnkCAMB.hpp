//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAMB();

    /* 4C */ virtual ~ActorUnkCAMB() override;

    void func_ov061_021586a8(void);
    void func_ov061_02158710(void);
    void func_ov061_02158730(void);
    void func_ov061_0215877c(void);
    void func_ov061_021588e4(void);
    void func_ov061_021588f8(void);
    void func_ov061_021589a4(void);
    void func_ov061_021589b0(void);
    void func_ov061_021589d8(void);
    void func_ov061_02158a08(void);
    void func_ov061_02158a2c(void);
    void func_ov061_02158a58(void);
    void func_ov061_02158a74(void);
    void func_ov061_02158a9c(void);
    void func_ov061_02158abc(void);
    void func_ov061_02158ad0(void);
    void func_ov061_02158ae4(void);
};

class ActorTypeUnkCAMB : public ActorType {
public:
    static ActorTypeUnkCAMB gInstance;

    /* 00 (base) */

    ActorTypeUnkCAMB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAMB *GetInstance();
};
