//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMSS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMSS();

    /* 4C */ virtual ~ActorUnkDMSS() override;

    void func_ov088_021713f8(void);
    void func_ov088_02171420(void);
    void func_ov088_02171494(void);
    void func_ov088_021714a8(void);
    void func_ov088_021714fc(void);
    void func_ov088_0217150c(void);
    void func_ov088_02171520(void);
    void func_ov088_02171534(void);
    void func_ov088_02171584(void);
    void func_ov088_021715a0(void);
    void func_ov088_021715c8(void);
    void func_ov088_021715f8(void);
};

class ActorTypeUnkDMSS : public ActorType {
public:
    static ActorTypeUnkDMSS gInstance;

    /* 00 (base) */

    ActorTypeUnkDMSS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMSS *GetInstance();
};
