//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMST();

    /* 4C */ virtual ~ActorUnkDMST() override;

    void func_ov088_021711d8(void);
    void func_ov088_02171200(void);
    void func_ov088_02171274(void);
    void func_ov088_021712c8(void);
    void func_ov088_021712d8(void);
    void func_ov088_021712ec(void);
    void func_ov088_02171300(void);
    void func_ov088_02171350(void);
    void func_ov088_0217135c(void);
    void func_ov088_02171384(void);
    void func_ov088_021713b4(void);
};

class ActorTypeUnkDMST : public ActorType {
public:
    static ActorTypeUnkDMST gInstance;

    /* 00 (base) */

    ActorTypeUnkDMST();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMST *GetInstance();
};
