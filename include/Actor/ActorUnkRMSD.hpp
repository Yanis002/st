//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMSD();

    /* 4C */ virtual ~ActorUnkRMSD() override;

    void func_ov063_0215c36c(void);
    void func_ov063_0215c394(void);
    void func_ov063_0215c408(void);
    void func_ov063_0215c45c(void);
    void func_ov063_0215c474(void);
    void func_ov063_0215c488(void);
    void func_ov063_0215c4c8(void);
    void func_ov063_0215c508(void);
    void func_ov063_0215c538(void);
    void func_ov063_0215c570(void);
};

class ActorTypeUnkRMSD : public ActorType {
public:
    static ActorTypeUnkRMSD gInstance;

    /* 00 (base) */

    ActorTypeUnkRMSD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMSD *GetInstance();
};
