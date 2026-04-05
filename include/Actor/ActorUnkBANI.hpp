//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBANI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBANI();

    /* 4C */ virtual ~ActorUnkBANI() override;

    void func_ov069_02157ed0(void);
    void func_ov069_02157f2c(void);
    void func_ov069_02158144(void);
    void func_ov069_02158158(void);
    void func_ov069_0215819c(void);
    void func_ov069_021581c4(void);
    void func_ov069_021581f4(void);
    void func_ov069_02158218(void);
    void func_ov069_021582d4(void);
    void func_ov069_021582fc(void);
    void func_ov069_02158324(void);
    void func_ov069_02158358(void);
    void func_ov069_021583e4(void);
    void func_ov069_02158638(void);
    void func_ov069_0215871c(void);
    void func_ov069_02158748(void);
    void func_ov069_021587a0(void);
    void func_ov069_02158d00(void);
    void func_ov069_02158d24(void);
    void func_ov069_02158d50(void);
    void func_ov069_02158d6c(void);
    void func_ov069_02158d94(void);
    void func_ov069_02158db4(void);
};

class ActorTypeUnkBANI : public ActorType {
public:
    static ActorTypeUnkBANI gInstance;

    /* 00 (base) */

    ActorTypeUnkBANI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBANI *GetInstance();
};
