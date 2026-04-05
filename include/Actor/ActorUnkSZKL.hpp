//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSZKL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSZKL();

    /* 4C */ virtual ~ActorUnkSZKL() override;

    void func_ov092_02178530(void);
    void func_ov092_0217858c(void);
    void func_ov092_021786a0(void);
    void func_ov092_021786b4(void);
    void func_ov092_021786f4(void);
    void func_ov092_0217873c(void);
    void func_ov092_02178774(void);
    void func_ov092_02178800(void);
    void func_ov092_0217883c(void);
    void func_ov092_021788c4(void);
    void func_ov092_0217890c(void);
    void func_ov092_02178944(void);
    void func_ov092_02178990(void);
    void func_ov092_021789f4(void);
    void func_ov092_02178a8c(void);
    void func_ov092_02178ab0(void);
    void func_ov092_02178ac4(void);
    void func_ov092_02178ae4(void);
    void func_ov092_02178b8c(void);
    void func_ov092_02178c08(void);
    void func_ov092_02178c58(void);
    void func_ov092_02178c6c(void);
};

class ActorTypeUnkSZKL : public ActorType {
public:
    static ActorTypeUnkSZKL gInstance;

    /* 00 (base) */

    ActorTypeUnkSZKL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSZKL *GetInstance();
};
