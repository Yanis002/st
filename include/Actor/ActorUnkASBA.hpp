//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkASBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkASBA();

    /* 4C */ virtual ~ActorUnkASBA() override;

    void func_ov077_02156fac(void);
    void func_ov077_02157000(void);
    void func_ov077_02157154(void);
    void func_ov077_02157168(void);
    void func_ov077_02157228(void);
    void func_ov077_02157520(void);
    void func_ov077_021575e8(void);
    void func_ov077_021576b4(void);
    void func_ov077_0215772c(void);
    void func_ov077_0215784c(void);
    void func_ov077_021578a4(void);
    void func_ov077_021578dc(void);
    void func_ov077_021579bc(void);
    void func_ov077_021579f8(void);
    void func_ov077_02157a2c(void);
    void func_ov077_02157a48(void);
    void func_ov077_02157a80(void);
    void func_ov077_02157ac0(void);
};

class ActorTypeUnkASBA : public ActorType {
public:
    static ActorTypeUnkASBA gInstance;

    /* 00 (base) */

    ActorTypeUnkASBA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkASBA *GetInstance();
};
