//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBFR();

    /* 4C */ virtual ~ActorUnkRBFR() override;

    void func_ov078_0215cce4(void);
    void func_ov078_0215cd0c(void);
    void func_ov078_0215ce24(void);
    void func_ov078_0215ce38(void);
    void func_ov078_0215ced0(void);
    void func_ov078_0215cee8(void);
    void func_ov078_0215cefc(void);
    void func_ov078_0215cf30(void);
    void func_ov078_0215cf4c(void);
    void func_ov078_0215cf7c(void);
    void func_ov078_0215cfb4(void);
};

class ActorTypeUnkRBFR : public ActorType {
public:
    static ActorTypeUnkRBFR gInstance;

    /* 00 (base) */

    ActorTypeUnkRBFR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBFR *GetInstance();
};
