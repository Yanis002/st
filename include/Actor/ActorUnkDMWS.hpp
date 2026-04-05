//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMWS();

    /* 4C */ virtual ~ActorUnkDMWS() override;

    void func_ov088_0217163c(void);
    void func_ov088_02171664(void);
    void func_ov088_021716d8(void);
    void func_ov088_0217172c(void);
    void func_ov088_0217173c(void);
    void func_ov088_02171750(void);
    void func_ov088_02171764(void);
    void func_ov088_021717b4(void);
    void func_ov088_021717dc(void);
    void func_ov088_0217180c(void);
};

class ActorTypeUnkDMWS : public ActorType {
public:
    static ActorTypeUnkDMWS gInstance;

    /* 00 (base) */

    ActorTypeUnkDMWS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMWS *GetInstance();
};
