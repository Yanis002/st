//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFIFI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFIFI();

    /* 4C */ virtual ~ActorUnkFIFI() override;

    void func_ov035_0211e4d4(void);
    void func_ov035_0211e518(void);
    void func_ov035_0211e568(void);
    void func_ov035_0211e59c(void);
    void func_ov035_0211e5d8(void);
    void func_ov035_0211e6d0(void);
};

class ActorTypeUnkFIFI : public ActorType {
public:
    static ActorTypeUnkFIFI gInstance;

    /* 00 (base) */

    ActorTypeUnkFIFI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFIFI *GetInstance();
};
