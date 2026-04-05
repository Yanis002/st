//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMM3();

    /* 4C */ virtual ~ActorUnkRMM3() override;

    void func_ov072_02152084(void);
    void func_ov072_021520ac(void);
    void func_ov072_0215220c(void);
    void func_ov072_021522dc(void);
    void func_ov072_0215233c(void);
    void func_ov072_02152350(void);
    void func_ov072_02152430(void);
    void func_ov072_02152480(void);
    void func_ov072_021524d8(void);
};

class ActorTypeUnkRMM3 : public ActorType {
public:
    static ActorTypeUnkRMM3 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMM3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMM3 *GetInstance();
};
