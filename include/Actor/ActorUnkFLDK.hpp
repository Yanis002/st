//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLDK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFLDK();

    /* 4C */ virtual ~ActorUnkFLDK() override;

    void func_ov047_02135438(void);
    void func_ov047_02135460(void);
    void func_ov047_021354a4(void);
    void func_ov047_02135570(void);
    void func_ov047_021355f4(void);
    void func_ov047_02135614(void);
    void func_ov047_0213563c(void);
    void func_ov047_02135650(void);
    void func_ov047_021356b0(void);
};

class ActorTypeUnkFLDK : public ActorType {
public:
    static ActorTypeUnkFLDK gInstance;

    /* 00 (base) */

    ActorTypeUnkFLDK();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFLDK *GetInstance();
};
