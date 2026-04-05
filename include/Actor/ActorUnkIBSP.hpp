//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkIBSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkIBSP();

    /* 4C */ virtual ~ActorUnkIBSP() override;

    void func_ov044_0212b740(void);
    void func_ov044_0212b788(void);
    void func_ov044_0212b7e4(void);
    void func_ov044_0212b814(void);
    void func_ov044_0212b84c(void);
    void func_ov044_0212b8a0(void);
    void func_ov044_0212b918(void);
    void func_ov044_0212bb74(void);
    void func_ov044_0212bbbc(void);
    void func_ov044_0212bbd0(void);
    void func_ov044_0212bc18(void);
    void func_ov044_0212bcbc(void);
    void func_ov044_0212bd3c(void);
};

class ActorTypeUnkIBSP : public ActorType {
public:
    static ActorTypeUnkIBSP gInstance;

    /* 00 (base) */

    ActorTypeUnkIBSP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkIBSP *GetInstance();
};
