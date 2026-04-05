//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTEVT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTEVT();

    /* 4C */ virtual ~ActorUnkTEVT() override;

    void func_ov092_02177da8(void);
    void func_ov092_02177dd0(void);
    void func_ov092_02177df8(void);
    void func_ov092_02177fb4(void);
    void func_ov092_02178050(void);
    void func_ov092_02178054(void);
    void func_ov092_02178488(void);
    void func_ov092_02178498(void);
    void func_ov092_021784ac(void);
    void func_ov092_021784c8(void);
    void func_ov092_021784ec(void);
};

class ActorTypeUnkTEVT : public ActorType {
public:
    static ActorTypeUnkTEVT gInstance;

    /* 00 (base) */

    ActorTypeUnkTEVT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTEVT *GetInstance();
};
