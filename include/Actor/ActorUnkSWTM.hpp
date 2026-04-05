//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWTM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSWTM();

    /* 4C */ virtual ~ActorUnkSWTM() override;

    void func_ov000_0209acd8(void);
    void func_ov000_0209ad00(void);
    void func_ov000_0209ad5c(void);
    void func_ov000_0209ada4(void);
    void func_ov000_0209adf4(void);
    void func_ov000_0209ae68(void);
    void func_ov000_0209af50(void);
    void func_ov000_0209af54(void);
    void func_ov000_0209afe4(void);
    void func_ov000_0209b038(void);
    void func_ov000_0209b160(void);
    void func_ov000_0209b184(void);
    void func_ov000_0209b1d0(void);
    void func_ov000_0209b218(void);
    void func_ov000_0209b22c(void);
    void func_ov000_0209b248(void);
    void func_ov000_0209b264(void);
    void func_ov000_0209b298(void);
    void func_ov000_0209b420(void);
    void func_ov000_0209b5ec(void);
    void func_ov000_0209b620(void);
    void func_ov000_0209b804(void);
    void func_ov000_0209b9ac(void);
    void func_ov000_0209ba04(void);
    void func_ov000_0209bbb8(void);
    void func_ov000_0209bce8(void);
    void func_ov000_0209bd28(void);
    void func_ov000_0209bf28(void);
    void func_ov000_0209bf54(void);
};

class ActorTypeUnkSWTM : public ActorType {
public:
    static ActorTypeUnkSWTM gInstance;

    /* 00 (base) */

    ActorTypeUnkSWTM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSWTM *GetInstance();
};
