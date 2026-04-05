//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAGE : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAGE();

    /* 4C */ virtual ~ActorUnkCAGE() override;

    void func_ov059_02160e40(void);
    void func_ov059_02160e84(void);
    void func_ov059_02160f64(void);
    void func_ov059_02160f94(void);
    void func_ov059_02160fd0(void);
    void func_ov059_02161034(void);
    void func_ov059_02161048(void);
    void func_ov059_0216105c(void);
    void func_ov059_02161060(void);
    void func_ov059_02161080(void);
    void func_ov059_021610e4(void);
    void func_ov059_021610e8(void);
    void func_ov059_021610ec(void);
    void func_ov059_02161164(void);
    void func_ov059_02161210(void);
    void func_ov059_02161224(void);
    void func_ov059_02161390(void);
    void func_ov059_021613bc(void);
    void func_ov059_02161448(void);
    void func_ov059_02161470(void);
    void func_ov059_02161498(void);
    void func_ov059_021614c8(void);
    void func_ov059_021614dc(void);
    void func_ov059_021614fc(void);
    void func_ov059_02161518(void);
};

class ActorTypeUnkCAGE : public ActorType {
public:
    static ActorTypeUnkCAGE gInstance;

    /* 00 (base) */

    ActorTypeUnkCAGE();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAGE *GetInstance();
};
