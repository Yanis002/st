//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTGTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTGTZ();

    /* 4C */ virtual ~ActorUnkTGTZ() override;

    void func_ov031_020f6864(void);
    void func_ov031_020f68a8(void);
    void func_ov031_020f6984(void);
    void func_ov031_020f6998(void);
    void func_ov031_020f6ae4(void);
    void func_ov031_020f6e48(void);
    void func_ov031_020f6e5c(void);
    void func_ov031_020f6ea8(void);
    void func_ov031_020f6f20(void);
    void func_ov031_020f7170(void);
    void func_ov031_020f72a8(void);
    void func_ov031_020f7358(void);
    void func_ov031_020f73e4(void);
    void func_ov031_020f73f0(void);
    void func_ov031_020f73fc(void);
    void func_ov031_020f7418(void);
    void func_ov031_020f7438(void);
    void func_ov031_020f7460(void);
    void func_ov031_020f7474(void);
    void func_ov031_020f7494(void);
    void func_ov031_020f74d4(void);
    void func_ov031_020f750c(void);
    void func_ov031_020f7538(void);
    void func_ov031_020f7574(void);
    void func_ov031_020f7594(void);
    void func_ov031_020f759c(void);
    void func_ov031_020f75ec(void);
    void func_ov031_020f75f4(void);
    void func_ov031_020f7614(void);
    void func_ov031_020f7664(void);
    void func_ov031_020f766c(void);
    void func_ov031_020f768c(void);
    void func_ov031_020f76a0(void);
    void func_ov031_020f76bc(void);
    void func_ov031_020f76dc(void);
    void func_ov031_020f7704(void);
    void func_ov031_020f7724(void);
    void func_ov031_020f774c(void);
    void func_ov031_020f776c(void);
    void func_ov031_020f7794(void);
    void func_ov031_020f77fc(void);
    void func_ov031_020f7840(void);
    void func_ov031_020f7864(void);
    void func_ov031_020f7a20(void);
    void func_ov031_020f7a44(void);
    void func_ov031_020f7a54(void);
    void func_ov031_020f7a68(void);
};

class ActorTypeUnkTGTZ : public ActorType {
public:
    static ActorTypeUnkTGTZ gInstance;

    /* 00 (base) */

    ActorTypeUnkTGTZ();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTGTZ *GetInstance();
};
