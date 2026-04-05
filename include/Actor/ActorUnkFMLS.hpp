//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFMLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFMLS();

    /* 4C */ virtual ~ActorUnkFMLS() override;

    void func_ov035_0211ab0c(void);
    void func_ov035_0211ab50(void);
    void func_ov035_0211ab84(void);
    void func_ov035_0211ac0c(void);
    void func_ov035_0211ac28(void);
    void func_ov035_0211ac4c(void);
    void func_ov035_0211ac88(void);
    void func_ov035_0211acac(void);
    void func_ov035_0211ad3c(void);
    void func_ov035_0211ae58(void);
    void func_ov035_0211ae6c(void);
    void func_ov035_0211aeb0(void);
    void func_ov035_0211af08(void);
    void func_ov035_0211af0c(void);
    void func_ov035_0211af10(void);
    void func_ov035_0211af14(void);
    void func_ov035_0211af88(void);
    void func_ov035_0211af9c(void);
    void func_ov035_0211b038(void);
    void func_ov035_0211b074(void);
    void func_ov035_0211b1a8(void);
    void func_ov035_0211b1b8(void);
    void func_ov035_0211b224(void);
    void func_ov035_0211b238(void);
    void func_ov035_0211b23c(void);
    void func_ov035_0211b27c(void);
    void func_ov035_0211b358(void);
    void func_ov035_0211b37c(void);
    void func_ov035_0211b5cc(void);
    void func_ov035_0211b6ac(void);
    void func_ov035_0211b6f8(void);
    void func_ov035_0211b754(void);
    void func_ov035_0211b87c(void);
    void func_ov035_0211b8c4(void);
    void func_ov035_0211b998(void);
    void func_ov035_0211ba84(void);
    void func_ov035_0211baa0(void);
    void func_ov035_0211bad0(void);
    void func_ov035_0211bb08(void);
    void func_ov035_0211bb1c(void);
    void func_ov035_0211bb30(void);
};

class ActorTypeUnkFMLS : public ActorType {
public:
    static ActorTypeUnkFMLS gInstance;

    /* 00 (base) */

    ActorTypeUnkFMLS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFMLS *GetInstance();
};
