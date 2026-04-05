//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSSN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDSSN();

    /* 4C */ virtual ~ActorUnkDSSN() override;

    void func_ov079_0215599c(void);
    void func_ov079_021559c4(void);
    void func_ov079_021559e4(void);
    void func_ov079_02155a34(void);
    void func_ov079_02155a54(void);
};

class ActorTypeUnkDSSN : public ActorType {
public:
    static ActorTypeUnkDSSN gInstance;

    /* 00 (base) */

    ActorTypeUnkDSSN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDSSN *GetInstance();
};
