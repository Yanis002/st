//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLIKE : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkLIKE();

    /* 4C */ virtual ~ActorUnkLIKE() override;

    void func_ov053_021385cc(void);
    void func_ov053_02138628(void);
    void func_ov053_02138650(void);
    void func_ov053_0213866c(void);
    void func_ov053_02138690(void);
    void func_ov053_02138788(void);
    void func_ov053_02138ab4(void);
    void func_ov053_02138ac8(void);
    void func_ov053_02138adc(void);
    void func_ov053_02138af0(void);
    void func_ov053_02138bb0(void);
    void func_ov053_02138c78(void);
    void func_ov053_02138cf8(void);
    void func_ov053_021392c4(void);
    void func_ov053_0213942c(void);
};

class ActorTypeUnkLIKE : public ActorType {
public:
    static ActorTypeUnkLIKE gInstance;

    /* 00 (base) */

    ActorTypeUnkLIKE();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkLIKE *GetInstance();
};
