//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBMHN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBMHN();

    /* 4C */ virtual ~ActorUnkBMHN() override;

    void func_ov070_02143600(void);
    void func_ov070_02143628(void);
    void func_ov070_02143674(void);
    void func_ov070_02143688(void);
    void func_ov070_021436a4(void);
    void func_ov070_021436b8(void);
    void func_ov070_021436d8(void);
    void func_ov070_021436dc(void);
    void func_ov070_0214375c(void);
    void func_ov070_021437d0(void);
    void func_ov070_021438e8(void);
    void func_ov070_02143920(void);
    void func_ov070_02143958(void);
};

class ActorTypeUnkBMHN : public ActorType {
public:
    static ActorTypeUnkBMHN gInstance;

    /* 00 (base) */

    ActorTypeUnkBMHN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBMHN *GetInstance();
};
