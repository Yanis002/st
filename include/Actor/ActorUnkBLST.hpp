//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBLST();

    /* 4C */ virtual ~ActorUnkBLST() override;

    void func_ov031_020e34e4(void);
    void func_ov031_020e351c(void);
    void func_ov031_020e36c0(void);
    void func_ov031_020e373c(void);
    void func_ov031_020e3750(void);
    void func_ov031_020e39c4(void);
    void func_ov031_020e3b44(void);
    void func_ov031_020e3b94(void);
    void func_ov031_020e3b9c(void);
    void func_ov031_020e3c1c(void);
    void func_ov031_020e3c38(void);
    void func_ov031_020e3c60(void);
    void func_ov031_020e3c90(void);
    void func_ov031_020e3ca4(void);
    void func_ov031_020e3cc8(void);
    void func_ov031_020e3d10(void);
    void func_ov031_020e3da0(void);
    void func_ov031_020e3dd0(void);
    void func_ov031_020e3df8(void);
    void func_ov031_020e3e18(void);
    void func_ov031_020e3e44(void);
    void func_ov031_020e3e6c(void);
    void func_ov031_020e3e84(void);
    void func_ov031_020e3ed8(void);
    void func_ov031_020e3f00(void);
    void func_ov031_020e3f50(void);
    void func_ov031_020e4074(void);
    void func_ov031_020e4078(void);
    void func_ov031_020e407c(void);
    void func_ov031_020e4084(void);
    void func_ov031_020e40a8(void);
    void func_ov031_020e40bc(void);
};

class ActorTypeUnkBLST : public ActorType {
public:
    static ActorTypeUnkBLST gInstance;

    /* 00 (base) */

    ActorTypeUnkBLST();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBLST *GetInstance();
};
