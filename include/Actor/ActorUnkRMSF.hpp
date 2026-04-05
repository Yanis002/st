//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMSF();

    /* 4C */ virtual ~ActorUnkRMSF() override;

    void func_ov063_0215c208(void);
    void func_ov063_0215c230(void);
    void func_ov063_0215c250(void);
    void func_ov063_0215c290(void);
    void func_ov063_0215c2d0(void);
    void func_ov063_0215c2f8(void);
    void func_ov063_0215c328(void);
};

class ActorTypeUnkRMSF : public ActorType {
public:
    static ActorTypeUnkRMSF gInstance;

    /* 00 (base) */

    ActorTypeUnkRMSF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMSF *GetInstance();
};
