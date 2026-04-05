//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMST();

    /* 4C */ virtual ~ActorUnkRMST() override;

    void func_ov036_0211de58(void);
    void func_ov036_0211de80(void);
    void func_ov036_0211dea0(void);
    void func_ov036_0211def0(void);
    void func_ov036_0211df10(void);
};

class ActorTypeUnkRMST : public ActorType {
public:
    static ActorTypeUnkRMST gInstance;

    /* 00 (base) */

    ActorTypeUnkRMST();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMST *GetInstance();
};
