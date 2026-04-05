//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSHD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNSHD();

    /* 4C */ virtual ~ActorUnkNSHD() override;

    void func_ov062_02158c0c(void);
    void func_ov062_02158c48(void);
    void func_ov062_02158cc8(void);
    void _ZN27UnkStruct_func_01fff3b4_ret19func_ov062_02158ce8Ev(void);
    void func_ov062_02158df4(void);
    void func_ov062_02158e38(void);
    void func_ov062_02158e4c(void);
    void func_ov062_02158f48(void);
    void func_ov062_02158f68(void);
    void func_ov062_02158f90(void);
};

class ActorTypeUnkNSHD : public ActorType {
public:
    static ActorTypeUnkNSHD gInstance;

    /* 00 (base) */

    ActorTypeUnkNSHD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNSHD *GetInstance();
};
