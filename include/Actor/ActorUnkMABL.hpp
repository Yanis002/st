//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMABL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMABL();

    /* 4C */ virtual ~ActorUnkMABL() override;

    void func_ov075_0215e2b4(void);
    void func_ov075_0215e324(void);
    void func_ov075_0215e3d8(void);
    void func_ov075_0215e684(void);
    void func_ov075_0215e698(void);
    void func_ov075_0215e6e4(void);
    void func_ov075_0215e738(void);
    void func_ov075_0215e7c4(void);
    void func_ov075_0215ea28(void);
    void func_ov075_0215ecc4(void);
    void func_ov075_0215ee20(void);
    void func_ov075_0215eeac(void);
    void func_ov075_0215f0dc(void);
    void func_ov075_0215f16c(void);
    void func_ov075_0215f47c(void);
    void func_ov075_0215f508(void);
    void func_ov075_0215f6d8(void);
    void func_ov075_0215f99c(void);
    void func_ov075_0215fa9c(void);
    void func_ov075_0215fb2c(void);
    void func_ov075_0215fcb0(void);
    void func_ov075_0215fdf4(void);
    void func_ov075_02160034(void);
    void func_ov075_02160134(void);
    void func_ov075_02160208(void);
    void func_ov075_02160288(void);
    void func_ov075_021602a8(void);
};

class ActorTypeUnkMABL : public ActorType {
public:
    static ActorTypeUnkMABL gInstance;

    /* 00 (base) */

    ActorTypeUnkMABL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMABL *GetInstance();
};
