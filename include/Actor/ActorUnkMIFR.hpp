//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMIFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMIFR();

    /* 4C */ virtual ~ActorUnkMIFR() override;

    void func_ov042_021251d8(void);
    void func_ov042_02125224(void);
    void func_ov042_02125258(void);
    void func_ov042_0212537c(void);
    void func_ov042_02125390(void);
    void func_ov042_021253a4(void);
    void func_ov042_021253e4(void);
    void func_ov042_02125450(void);
    void func_ov042_021254c0(void);
    void func_ov042_02125620(void);
    void func_ov042_02125630(void);
    void func_ov042_0212569c(void);
    void func_ov042_021256ac(void);
    void func_ov042_0212578c(void);
    void func_ov042_02125804(void);
    void func_ov042_02125894(void);
    void func_ov042_021258b0(void);
    void func_ov042_02125924(void);
    void func_ov042_02125d6c(void);
    void func_ov042_02125e94(void);
    void func_ov042_02125eb0(void);
    void func_ov042_02125fa8(void);
    void func_ov042_02126028(void);
    void func_ov042_02126164(void);
    void func_ov042_02126190(void);
    void func_ov042_021262c8(void);
    void func_ov042_02126604(void);
    void func_ov042_021268b0(void);
    void func_ov042_021268cc(void);
    void func_ov042_021268e8(void);
    void func_ov042_02126918(void);
    void func_ov042_02126950(void);
    void func_ov042_02126964(void);
    void func_ov042_02126a9c(void);
    void func_ov042_02126b04(void);
    void func_ov042_02126b3c(void);
    void func_ov042_02126bd8(void);
    void func_ov042_02126c10(void);
    void func_ov042_02126ca0(void);
    void func_ov042_0212737c(void);
    void func_ov042_02127410(void);
    void func_ov042_02127484(void);
    void func_ov042_02127514(void);
    void func_ov042_021279a4(void);
    void func_ov042_02127a74(void);
    void func_ov042_02127a94(void);
    void func_ov042_02127b48(void);
    void func_ov042_02127c44(void);
    void func_ov042_02127dfc(void);
    void func_ov042_02127f18(void);
    void func_ov042_02127f38(void);
    void func_ov042_021282b4(void);
    void func_ov042_021282e0(void);
    void func_ov042_02128410(void);
    void func_ov042_02128460(void);
    void func_ov042_021284d4(void);
    void func_ov042_021287e4(void);
    void func_ov042_021287f0(void);
    void func_ov042_0212888c(void);
    void func_ov042_021288a0(void);
};

class ActorTypeUnkMIFR : public ActorType {
public:
    static ActorTypeUnkMIFR gInstance;

    /* 00 (base) */

    ActorTypeUnkMIFR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMIFR *GetInstance();
};
