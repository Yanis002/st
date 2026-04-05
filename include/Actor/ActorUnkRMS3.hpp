//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMS3();

    /* 4C */ virtual ~ActorUnkRMS3() override;

    void func_ov065_0215912c(void);
    void func_ov065_02159154(void);
    void func_ov065_02159174(void);
    void func_ov065_021591c4(void);
    void func_ov065_021591e4(void);
    void func_ov065_0215920c(void);
};

class ActorTypeUnkRMS3 : public ActorType {
public:
    static ActorTypeUnkRMS3 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMS3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMS3 *GetInstance();
};
