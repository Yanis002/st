//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAST();

    /* 4C */ virtual ~ActorUnkCAST() override;

    void func_ov060_0215ebe0(void);
    void func_ov060_0215ec08(void);
    void func_ov060_0215ec7c(void);
    void func_ov060_0215eca4(void);
    void func_ov060_0215eca8(void);
    void func_ov060_0215ecbc(void);
    void func_ov060_0215ecdc(void);
    void func_ov060_0215ecfc(void);
    void func_ov060_0215ed24(void);
    void func_ov060_0215ed38(void);
    void func_ov060_0215ed58(void);
};

class ActorTypeUnkCAST : public ActorType {
public:
    static ActorTypeUnkCAST gInstance;

    /* 00 (base) */

    ActorTypeUnkCAST();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAST *GetInstance();
};
