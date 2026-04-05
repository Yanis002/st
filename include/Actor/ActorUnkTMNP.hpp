//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTMNP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTMNP();

    /* 4C */ virtual ~ActorUnkTMNP() override;

    void func_ov040_0212d14c(void);
    void func_ov040_0212d1b8(void);
    void func_ov040_0212d1e0(void);
    void func_ov040_0212d23c(void);
    void func_ov040_0212d248(void);
    void func_ov040_0212d268(void);
    void func_ov040_0212d280(void);
    void func_ov040_0212d298(void);
    void func_ov040_0212d2c8(void);
    void func_ov040_0212d2e8(void);
    void func_ov040_0212d310(void);
};

class ActorTypeUnkTMNP : public ActorType {
public:
    static ActorTypeUnkTMNP gInstance;

    /* 00 (base) */

    ActorTypeUnkTMNP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTMNP *GetInstance();
};
