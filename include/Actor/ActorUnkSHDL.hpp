//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSHDL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSHDL();

    /* 4C */ virtual ~ActorUnkSHDL() override;

    void func_ov043_02128afc(void);
    void func_ov043_02128b44(void);
    void func_ov043_02128d94(void);
    void func_ov043_021290c0(void);
    void func_ov043_02129230(void);
    void func_ov043_0212946c(void);
    void func_ov043_021294b0(void);
    void func_ov043_02129614(void);
    void func_ov043_02129690(void);
    void func_ov043_02129710(void);
    void func_ov043_02129724(void);
    void func_ov043_021297d4(void);
    void func_ov043_02129ac0(void);
    void func_ov043_02129ae8(void);
    void func_ov043_02129af8(void);
};

class ActorTypeUnkSHDL : public ActorType {
public:
    static ActorTypeUnkSHDL gInstance;

    /* 00 (base) */

    ActorTypeUnkSHDL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSHDL *GetInstance();
};
