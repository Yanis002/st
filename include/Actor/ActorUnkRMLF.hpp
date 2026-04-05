//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMLF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMLF();

    /* 4C */ virtual ~ActorUnkRMLF() override;

    void func_ov062_02159a24(void);
    void func_ov062_02159a4c(void);
    void func_ov062_02159a6c(void);
    void func_ov062_02159abc(void);
    void func_ov062_02159adc(void);
    void func_ov062_02159b04(void);
};

class ActorTypeUnkRMLF : public ActorType {
public:
    static ActorTypeUnkRMLF gInstance;

    /* 00 (base) */

    ActorTypeUnkRMLF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMLF *GetInstance();
};
