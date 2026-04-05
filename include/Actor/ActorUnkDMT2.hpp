//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMT2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMT2();

    /* 4C */ virtual ~ActorUnkDMT2() override;

    void func_ov088_0216cd08(void);
    void func_ov088_0216cd30(void);
    void func_ov088_0216cd80(void);
    void func_ov088_0216cd90(void);
    void func_ov088_0216cea4(void);
    void func_ov088_0216cef4(void);
    void func_ov088_0216cf4c(void);
    void func_ov088_0216cf50(void);
    void func_ov088_0216d290(void);
    void func_ov088_0216d2a4(void);
    void func_ov088_0216d300(void);
    void func_ov088_0216d308(void);
    void func_ov088_0216d310(void);
};

class ActorTypeUnkDMT2 : public ActorType {
public:
    static ActorTypeUnkDMT2 gInstance;

    /* 00 (base) */

    ActorTypeUnkDMT2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMT2 *GetInstance();
};
