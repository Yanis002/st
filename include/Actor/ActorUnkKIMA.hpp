//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKIMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkKIMA();

    /* 4C */ virtual ~ActorUnkKIMA() override;

    void func_ov060_021601b8(void);
    void func_ov060_021602dc(void);
    void func_ov060_02160304(void);
    void func_ov060_02160334(void);
    void func_ov060_02160340(void);
    void func_ov060_02160348(void);
    void func_ov060_02160350(void);
};

class ActorTypeUnkKIMA : public ActorType {
public:
    static ActorTypeUnkKIMA gInstance;

    /* 00 (base) */

    ActorTypeUnkKIMA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkKIMA *GetInstance();
};
