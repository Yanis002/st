//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMMS();

    /* 4C */ virtual ~ActorUnkDMMS() override;

    void func_ov088_02171b8c(void);
    void func_ov088_02171bb4(void);
    void func_ov088_02171c28(void);
    void func_ov088_02171c7c(void);
    void func_ov088_02171c8c(void);
    void func_ov088_02171ca0(void);
    void func_ov088_02171cb4(void);
    void func_ov088_02171d04(void);
    void func_ov088_02171d2c(void);
    void func_ov088_02171d5c(void);
};

class ActorTypeUnkDMMS : public ActorType {
public:
    static ActorTypeUnkDMMS gInstance;

    /* 00 (base) */

    ActorTypeUnkDMMS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMMS *GetInstance();
};
