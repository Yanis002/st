//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCTS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkOCTS();

    /* 4C */ virtual ~ActorUnkOCTS() override;

    void func_ov042_021234f0(void);
    void func_ov042_02123538(void);
    void func_ov042_02123600(void);
    void func_ov042_02123614(void);
    void func_ov042_02123698(void);
    void func_ov042_021238dc(void);
    void func_ov042_0212398c(void);
    void func_ov042_021239f0(void);
    void func_ov042_02123a38(void);
    void func_ov042_02123a70(void);
    void func_ov042_02123b3c(void);
    void func_ov042_02123b78(void);
    void func_ov042_02123bc4(void);
    void func_ov042_02123be0(void);
    void func_ov042_02123c08(void);
    void func_ov042_02123c38(void);
};

class ActorTypeUnkOCTS : public ActorType {
public:
    static ActorTypeUnkOCTS gInstance;

    /* 00 (base) */

    ActorTypeUnkOCTS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkOCTS *GetInstance();
};
