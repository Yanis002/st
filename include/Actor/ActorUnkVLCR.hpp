//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVLCR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkVLCR();

    /* 4C */ virtual ~ActorUnkVLCR() override;

    void func_ov094_021689f0(void);
    void func_ov094_02168a30(void);
    void func_ov094_02168bb0(void);
    void func_ov094_02168d64(void);
    void func_ov094_02168d74(void);
    void func_ov094_02168db0(void);
    void func_ov094_02168e60(void);
    void func_ov094_02169064(void);
    void func_ov094_0216918c(void);
    void func_ov094_021691d8(void);
    void func_ov094_02169344(void);
    void func_ov094_02169384(void);
    void func_ov094_021693bc(void);
    void func_ov094_021693c8(void);
    void func_ov094_02169494(void);
    void func_ov094_021694a0(void);
    void func_ov094_021694e0(void);
    void func_ov094_02169528(void);
};

class ActorTypeUnkVLCR : public ActorType {
public:
    static ActorTypeUnkVLCR gInstance;

    /* 00 (base) */

    ActorTypeUnkVLCR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkVLCR *GetInstance();
};
