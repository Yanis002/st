//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkOCWS();

    /* 4C */ virtual ~ActorUnkOCWS() override;

    void func_ov079_02155108(void);
    void func_ov079_02155150(void);
    void func_ov079_02155228(void);
    void func_ov079_0215523c(void);
    void func_ov079_021552e8(void);
    void func_ov079_02155530(void);
    void func_ov079_0215564c(void);
    void func_ov079_0215566c(void);
    void func_ov079_02155710(void);
    void func_ov079_02155758(void);
    void func_ov079_02155790(void);
    void func_ov079_0215585c(void);
    void func_ov079_02155898(void);
    void func_ov079_021558e4(void);
    void func_ov079_02155900(void);
    void func_ov079_02155928(void);
    void func_ov079_02155958(void);
};

class ActorTypeUnkOCWS : public ActorType {
public:
    static ActorTypeUnkOCWS gInstance;

    /* 00 (base) */

    ActorTypeUnkOCWS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkOCWS *GetInstance();
};
