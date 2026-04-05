//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBLS();

    /* 4C */ virtual ~ActorUnkRBLS() override;

    void func_ov063_0215f2e8(void);
    void func_ov063_0215f310(void);
    void func_ov063_0215f3d4(void);
    void func_ov063_0215f3e8(void);
    void func_ov063_0215f474(void);
    void func_ov063_0215f488(void);
    void func_ov063_0215f49c(void);
    void func_ov063_0215f4bc(void);
    void func_ov063_0215f4d8(void);
    void func_ov063_0215f500(void);
};

class ActorTypeUnkRBLS : public ActorType {
public:
    static ActorTypeUnkRBLS gInstance;

    /* 00 (base) */

    ActorTypeUnkRBLS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBLS *GetInstance();
};
