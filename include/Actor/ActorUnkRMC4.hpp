//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMC4();

    /* 4C */ virtual ~ActorUnkRMC4() override;

    void func_ov060_0215e638(void);
    void func_ov060_0215e660(void);
    void func_ov060_0215e680(void);
    void func_ov060_0215e684(void);
    void func_ov060_0215e6d4(void);
    void func_ov060_0215e6f4(void);
    void func_ov060_0215e71c(void);
};

class ActorTypeUnkRMC4 : public ActorType {
public:
    static ActorTypeUnkRMC4 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMC4();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMC4 *GetInstance();
};
