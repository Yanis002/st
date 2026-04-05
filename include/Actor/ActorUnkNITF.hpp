//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNITF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNITF();

    /* 4C */ virtual ~ActorUnkNITF() override;

    void func_ov031_020f0ffc(void);
    void func_ov031_020f102c(void);
    void func_ov031_020f10c0(void);
    void func_ov031_020f10d4(void);
    void func_ov031_020f10fc(void);
    void func_ov031_020f1140(void);
    void func_ov031_020f1178(void);
    void func_ov031_020f11a8(void);
    void func_ov031_020f11b4(void);
    void func_ov031_020f11c0(void);
    void func_ov031_020f11cc(void);
    void func_ov031_020f11d8(void);
    void func_ov031_020f11e4(void);
    void func_ov031_020f11f0(void);
    void func_ov031_020f11fc(void);
    void func_ov031_020f1208(void);
    void func_ov031_020f121c(void);
    void func_ov031_020f1230(void);
    void func_ov031_020f1308(void);
    void func_ov031_020f1314(void);
    void func_ov031_020f1344(void);
    void func_ov031_020f137c(void);
};

class ActorTypeUnkNITF : public ActorType {
public:
    static ActorTypeUnkNITF gInstance;

    /* 00 (base) */

    ActorTypeUnkNITF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNITF *GetInstance();
};
