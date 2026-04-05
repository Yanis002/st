//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEVCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEVCH();

    /* 4C */ virtual ~ActorUnkEVCH() override;

    void func_ov047_021351dc(void);
    void func_ov047_02135204(void);
    void func_ov047_02135224(void);
    void func_ov047_0213522c(void);
    void func_ov047_02135268(void);
    void func_ov047_021352e4(void);
    void func_ov047_021352f8(void);
    void func_ov047_021353c4(void);
    void func_ov047_021353d8(void);
    void func_ov047_021353f4(void);
};

class ActorTypeUnkEVCH : public ActorType {
public:
    static ActorTypeUnkEVCH gInstance;

    /* 00 (base) */

    ActorTypeUnkEVCH();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEVCH *GetInstance();
};
