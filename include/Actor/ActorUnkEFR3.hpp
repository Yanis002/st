//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFR3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFR3();

    /* 4C */ virtual ~ActorUnkEFR3() override;

    void func_ov083_0215c4e4(void);
    void func_ov083_0215c514(void);
    void func_ov083_0215c534(void);
    void func_ov083_0215c5d0(void);
    void func_ov083_0215c5ec(void);
    void func_ov083_0215c61c(void);
    void func_ov083_0215c654(void);
};

class ActorTypeUnkEFR3 : public ActorType {
public:
    static ActorTypeUnkEFR3 gInstance;

    /* 00 (base) */

    ActorTypeUnkEFR3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFR3 *GetInstance();
};
