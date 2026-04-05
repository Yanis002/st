//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSTN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNSTN();

    /* 4C */ virtual ~ActorUnkNSTN() override;

    void func_ov058_021429fc(void);
    void func_ov058_02142a2c(void);
    void func_ov058_02142abc(void);
    void func_ov058_02142ad0(void);
    void func_ov058_02142ae8(void);
    void func_ov058_02142af0(void);
    void func_ov058_02142b44(void);
    void func_ov058_02142b7c(void);
    void func_ov058_02142bac(void);
    void func_ov058_02142bb8(void);
    void func_ov058_02142bc4(void);
    void func_ov058_02142bd0(void);
    void func_ov058_02142bdc(void);
    void func_ov058_02142be8(void);
    void func_ov058_02142bf4(void);
    void func_ov058_02142c00(void);
    void func_ov058_02142c0c(void);
    void func_ov058_02142c20(void);
    void func_ov058_02142c34(void);
    void func_ov058_02142d08(void);
    void func_ov058_02142d14(void);
    void func_ov058_02142d44(void);
    void func_ov058_02142d7c(void);
};

class ActorTypeUnkNSTN : public ActorType {
public:
    static ActorTypeUnkNSTN gInstance;

    /* 00 (base) */

    ActorTypeUnkNSTN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNSTN *GetInstance();
};
