//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMS2();

    /* 4C */ virtual ~ActorUnkRMS2() override;

    void func_ov065_02159008(void);
    void func_ov065_02159030(void);
    void func_ov065_02159050(void);
    void func_ov065_021590a0(void);
    void func_ov065_021590c0(void);
    void func_ov065_021590e8(void);
};

class ActorTypeUnkRMS2 : public ActorType {
public:
    static ActorTypeUnkRMS2 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMS2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMS2 *GetInstance();
};
