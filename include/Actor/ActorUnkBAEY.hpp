//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBAEY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBAEY();

    /* 4C */ virtual ~ActorUnkBAEY() override;

    void func_ov021_020f031c(void);
    void func_ov021_020f0368(void);
    void func_ov021_020f04c0(void);
    void func_ov021_020f04d4(void);
    void func_ov021_020f04e8(void);
    void func_ov021_020f055c(void);
    void func_ov021_020f05d8(void);
    void func_ov021_020f05f8(void);
    void func_ov021_020f06a4(void);
    void func_ov021_020f073c(void);
    void func_ov021_020f0778(void);
    void func_ov021_020f0860(void);
    void func_ov021_020f0a1c(void);
    void func_ov021_020f0aac(void);
    void func_ov021_020f0ae4(void);
    void func_ov021_020f0af8(void);
    void func_ov021_020f0b04(void);
    void func_ov021_020f0b60(void);
    void func_ov021_020f0bec(void);
    void func_ov021_020f0c54(void);
    void func_ov021_020f0c78(void);
    void func_ov021_020f0c88(void);
    void func_ov021_020f0c90(void);
    void func_ov021_020f0cac(void);
    void func_ov021_020f0cc8(void);
};

class ActorTypeUnkBAEY : public ActorType {
public:
    static ActorTypeUnkBAEY gInstance;

    /* 00 (base) */

    ActorTypeUnkBAEY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBAEY *GetInstance();
};
