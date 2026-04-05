//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTEHT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTEHT();

    /* 4C */ virtual ~ActorUnkTEHT() override;

    void func_ov036_0211d880(void);
    void func_ov036_0211d8a8(void);
    void func_ov036_0211dac0(void);
    void func_ov036_0211daf0(void);
    void func_ov036_0211db28(void);
    void func_ov036_0211db70(void);
    void func_ov036_0211db94(void);
    void func_ov036_0211dba8(void);
    void func_ov036_0211dce0(void);
    void func_ov036_0211dce4(void);
    void func_ov036_0211dce8(void);
    void func_ov036_0211dcec(void);
    void func_ov036_0211dcf0(void);
    void func_ov036_0211dcf4(void);
    void func_ov036_0211dcf8(void);
    void func_ov036_0211dd08(void);
    void func_ov036_0211dd0c(void);
    void func_ov036_0211dd74(void);
    void func_ov036_0211dd88(void);
    void func_ov036_0211dd98(void);
    void func_ov036_0211dda8(void);
    void func_ov036_0211ddb8(void);
    void func_ov036_0211ddc8(void);
    void func_ov036_0211ddd8(void);
    void func_ov036_0211dde8(void);
    void func_ov036_0211ddf8(void);
    void func_ov036_0211de08(void);
    void func_ov036_0211de18(void);
};

class ActorTypeUnkTEHT : public ActorType {
public:
    static ActorTypeUnkTEHT gInstance;

    /* 00 (base) */

    ActorTypeUnkTEHT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTEHT *GetInstance();
};
