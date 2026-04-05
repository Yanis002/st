//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTSCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTSCN();

    /* 4C */ virtual ~ActorUnkTSCN() override;

    void func_ov068_0215a874(void);
    void func_ov068_0215a89c(void);
    void func_ov068_0215a8c4(void);
    void func_ov068_0215a8e0(void);
    void func_ov068_0215a9d4(void);
    void func_ov068_0215a9e8(void);
    void func_ov068_0215aa04(void);
};

class ActorTypeUnkTSCN : public ActorType {
public:
    static ActorTypeUnkTSCN gInstance;

    /* 00 (base) */

    ActorTypeUnkTSCN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTSCN *GetInstance();
};
