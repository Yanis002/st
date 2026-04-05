//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkITSC();

    /* 4C */ virtual ~ActorUnkITSC() override;

    void func_ov084_02159cd0(void);
    void func_ov084_02159d14(void);
    void func_ov084_02159d80(void);
    void func_ov084_02159da8(void);
    void func_ov084_02159dd8(void);
    void func_ov084_02159dfc(void);
    void func_ov084_0215a0dc(void);
    void func_ov084_0215a118(void);
    void func_ov084_0215a280(void);
    void func_ov084_0215a394(void);
};

class ActorTypeUnkITSC : public ActorType {
public:
    static ActorTypeUnkITSC gInstance;

    /* 00 (base) */

    ActorTypeUnkITSC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkITSC *GetInstance();
};
