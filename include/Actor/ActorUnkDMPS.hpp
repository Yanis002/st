//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMPS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMPS();

    /* 4C */ virtual ~ActorUnkDMPS() override;

    void func_ov088_0216d34c(void);
    void func_ov088_0216d374(void);
    void func_ov088_0216d3a8(void);
    void func_ov088_0216d440(void);
    void func_ov088_0216d458(void);
    void func_ov088_0216d5e4(void);
    void func_ov088_0216d638(void);
    void func_ov088_0216d6ac(void);
    void func_ov088_0216d728(void);
    void func_ov088_0216d754(void);
    void func_ov088_0216d864(void);
    void func_ov088_0216d89c(void);
    void func_ov088_0216d940(void);
    void func_ov088_0216d9ac(void);
    void func_ov088_0216dbc4(void);
    void func_ov088_0216dcc8(void);
    void func_ov088_0216dd64(void);
    void func_ov088_0216de44(void);
    void func_ov088_0216defc(void);
    void func_ov088_0216df90(void);
    void func_ov088_0216e164(void);
    void func_ov088_0216e208(void);
    void func_ov088_0216e218(void);
    void func_ov088_0216e22c(void);
    void func_ov088_0216e248(void);
};

class ActorTypeUnkDMPS : public ActorType {
public:
    static ActorTypeUnkDMPS gInstance;

    /* 00 (base) */

    ActorTypeUnkDMPS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMPS *GetInstance();
};
