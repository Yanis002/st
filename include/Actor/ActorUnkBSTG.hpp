//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBSTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBSTG();

    /* 4C */ virtual ~ActorUnkBSTG() override;

    void func_ov058_0214d74c(void);
    void func_ov058_0214d774(void);
    void func_ov058_0214d794(void);
    void func_ov058_0214d79c(void);
    void func_ov058_0214d7d0(void);
    void func_ov058_0214d7e4(void);
    void func_ov058_0214d800(void);
};

class ActorTypeUnkBSTG : public ActorType {
public:
    static ActorTypeUnkBSTG gInstance;

    /* 00 (base) */

    ActorTypeUnkBSTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBSTG *GetInstance();
};
