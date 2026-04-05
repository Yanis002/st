//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLBL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBLBL();

    /* 4C */ virtual ~ActorUnkBLBL() override;

    void func_ov038_0211ea78(void);
    void func_ov038_0211eabc(void);
    void func_ov038_0211eadc(void);
    void func_ov038_0211eb0c(void);
    void func_ov038_0211eb14(void);
    void func_ov038_0211eb64(void);
    void func_ov038_0211eb90(void);
    void func_ov038_0211ebbc(void);
    void func_ov038_0211ebe8(void);
    void func_ov038_0211ec18(void);
    void func_ov038_0211ec50(void);
};

class ActorTypeUnkBLBL : public ActorType {
public:
    static ActorTypeUnkBLBL gInstance;

    /* 00 (base) */

    ActorTypeUnkBLBL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBLBL *GetInstance();
};
