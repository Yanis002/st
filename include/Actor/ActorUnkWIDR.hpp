//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWIDR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWIDR();

    /* 4C */ virtual ~ActorUnkWIDR() override;

    void func_ov084_0215b038(void);
    void func_ov084_0215b0a4(void);
    void func_ov084_0215b14c(void);
    void func_ov084_0215b314(void);
    void func_ov084_0215b328(void);
    void func_ov084_0215b33c(void);
    void func_ov084_0215b350(void);
    void func_ov084_0215b3f4(void);
    void func_ov084_0215b430(void);
    void func_ov084_0215b548(void);
    void func_ov084_0215b5dc(void);
    void func_ov084_0215b648(void);
    void func_ov084_0215b690(void);
    void func_ov084_0215b748(void);
    void func_ov084_0215b764(void);
    void func_ov084_0215b7ac(void);
    void func_ov084_0215b800(void);
    void func_ov084_0215b814(void);
    void func_ov084_0215ba44(void);
    void func_ov084_0215ba5c(void);
    void func_ov084_0215babc(void);
    void func_ov084_0215bb6c(void);
    void func_ov084_0215bd2c(void);
    void func_ov084_0215bdec(void);
    void func_ov084_0215bed0(void);
    void func_ov084_0215bee8(void);
    void func_ov084_0215bf98(void);
    void func_ov084_0215bfe0(void);
    void func_ov084_0215c014(void);
    void func_ov084_0215c05c(void);
    void func_ov084_0215c09c(void);
    void func_ov084_0215c0ac(void);
    void func_ov084_0215c0d4(void);
    void func_ov084_0215c12c(void);
    void func_ov084_0215c160(void);
    void func_ov084_0215c198(void);
    void func_ov084_0215c1d4(void);
    void func_ov084_0215c520(void);
    void func_ov084_0215c544(void);
    void func_ov084_0215c554(void);
    void func_ov084_0215c55c(void);
    void func_ov084_0215c578(void);
    void func_ov084_0215c594(void);
    void func_ov084_0215c5b0(void);
    void func_ov084_0215c5f8(void);
    void func_ov084_0215c648(void);
};

class ActorTypeUnkWIDR : public ActorType {
public:
    static ActorTypeUnkWIDR gInstance;

    /* 00 (base) */

    ActorTypeUnkWIDR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWIDR *GetInstance();
};
