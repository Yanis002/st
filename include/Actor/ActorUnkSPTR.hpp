//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSPTR();

    /* 4C */ virtual ~ActorUnkSPTR() override;

    void func_ov031_020f9f4c(void);
    void func_ov031_020f9f8c(void);
    void func_ov031_020fa00c(void);
    void func_ov031_020fa20c(void);
    void func_ov031_020fa23c(void);
    void func_ov031_020fa248(void);
    void func_ov031_020fa260(void);
    void func_ov031_020fa424(void);
    void func_ov031_020fa468(void);
    void func_ov031_020fa46c(void);
    void func_ov031_020fa494(void);
    void func_ov031_020fa4a0(void);
    void func_ov031_020fa524(void);
    void func_ov031_020fa568(void);
    void func_ov031_020fa5d8(void);
    void func_ov031_020fa5f0(void);
    void func_ov031_020fa650(void);
    void func_ov031_020fa664(void);
    void func_ov031_020fa668(void);
    void func_ov031_020fa678(void);
    void func_ov031_020fa6c8(void);
    void func_ov031_020fa72c(void);
    void func_ov031_020fa83c(void);
    void func_ov031_020fa900(void);
    void func_ov031_020fa9f8(void);
    void func_ov031_020faa30(void);
    void func_ov031_020faa74(void);
    void func_ov031_020faa94(void);
    void func_ov031_020faabc(void);
    void func_ov031_020faadc(void);
    void func_ov031_020faaf0(void);
    void func_ov031_020fab0c(void);
    void func_ov031_020fab20(void);
    void func_ov031_020fab34(void);
    void func_ov031_020fab48(void);
};

class ActorTypeUnkSPTR : public ActorType {
public:
    static ActorTypeUnkSPTR gInstance;

    /* 00 (base) */

    ActorTypeUnkSPTR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSPTR *GetInstance();
};
