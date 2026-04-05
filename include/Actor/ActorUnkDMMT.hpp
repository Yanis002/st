//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMMT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMMT();

    /* 4C */ virtual ~ActorUnkDMMT() override;

    void func_ov088_0217090c(void);
    void func_ov088_02170934(void);
    void func_ov088_021709c4(void);
    void func_ov088_021709d8(void);
    void func_ov088_02170b2c(void);
    void func_ov088_02170b68(void);
    void func_ov088_02170b70(void);
    void func_ov088_02170b80(void);
    void func_ov088_02170b94(void);
    void func_ov088_02170ba8(void);
    void func_ov088_02170bf8(void);
    void func_ov088_02170c18(void);
    void func_ov088_02170c34(void);
    void func_ov088_02170c5c(void);
    void func_ov088_02170c8c(void);
    void func_ov088_02170cb4(void);
    void func_ov088_02170cd4(void);
    void func_ov088_02170ce8(void);
    void func_ov088_02170d14(void);
    void func_ov088_02170d34(void);
};

class ActorTypeUnkDMMT : public ActorType {
public:
    static ActorTypeUnkDMMT gInstance;

    /* 00 (base) */

    ActorTypeUnkDMMT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMMT *GetInstance();
};
