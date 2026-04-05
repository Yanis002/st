//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMZCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMZCT();

    /* 4C */ virtual ~ActorUnkMZCT() override;

    void func_ov091_02168c38(void);
    void func_ov091_02168c60(void);
    void func_ov091_02168ccc(void);
    void func_ov091_02168d14(void);
    void func_ov091_02168d60(void);
    void func_ov091_02168dd4(void);
    void func_ov091_02168e10(void);
    void func_ov091_02168e70(void);
    void func_ov091_0216907c(void);
    void func_ov091_02169514(void);
    void func_ov091_02169618(void);
    void func_ov091_02169738(void);
    void func_ov091_02169788(void);
    void func_ov091_021697d8(void);
    void func_ov091_0216983c(void);
    void func_ov091_02169868(void);
    void func_ov091_02169884(void);
    void func_ov091_021698b0(void);
    void func_ov091_021698cc(void);
    void func_ov091_02169a5c(void);
    void func_ov091_02169a90(void);
    void func_ov091_02169a94(void);
    void func_ov091_02169ac8(void);
    void func_ov091_02169acc(void);
    void func_ov091_02169b90(void);
    void func_ov091_02169b94(void);
    void func_ov091_02169bbc(void);
    void func_ov091_02169bec(void);
};

class ActorTypeUnkMZCT : public ActorType {
public:
    static ActorTypeUnkMZCT gInstance;

    /* 00 (base) */

    ActorTypeUnkMZCT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMZCT *GetInstance();
};
