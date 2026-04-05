//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkAJSP();

    /* 4C */ virtual ~ActorUnkAJSP() override;

    void func_ov068_02160948(void);
    void func_ov068_02160978(void);
    void func_ov068_02160a08(void);
    void func_ov068_02160ad0(void);
    void func_ov068_02160b04(void);
    void func_ov068_02160b2c(void);
};

class ActorTypeUnkAJSP : public ActorType {
public:
    static ActorTypeUnkAJSP gInstance;

    /* 00 (base) */

    ActorTypeUnkAJSP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkAJSP *GetInstance();
};
