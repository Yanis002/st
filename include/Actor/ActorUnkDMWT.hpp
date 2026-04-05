//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMWT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMWT();

    /* 4C */ virtual ~ActorUnkDMWT() override;

    void func_ov088_02171850(void);
    void func_ov088_02171878(void);
    void func_ov088_021718ec(void);
    void func_ov088_02171940(void);
    void func_ov088_02171950(void);
    void func_ov088_02171964(void);
    void func_ov088_02171978(void);
    void func_ov088_021719c8(void);
    void func_ov088_021719d4(void);
    void func_ov088_021719fc(void);
    void func_ov088_02171a2c(void);
};

class ActorTypeUnkDMWT : public ActorType {
public:
    static ActorTypeUnkDMWT gInstance;

    /* 00 (base) */

    ActorTypeUnkDMWT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMWT *GetInstance();
};
