//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVRGN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkVRGN();

    /* 4C */ virtual ~ActorUnkVRGN() override;

    void func_ov094_02168408(void);
    void func_ov094_0216843c(void);
    void func_ov094_02168468(void);
    void func_ov094_0216849c(void);
    void func_ov094_02168588(void);
    void func_ov094_021685bc(void);
    void func_ov094_02168624(void);
    void func_ov094_0216897c(void);
    void func_ov094_02168990(void);
    void func_ov094_021689ac(void);
};

class ActorTypeUnkVRGN : public ActorType {
public:
    static ActorTypeUnkVRGN gInstance;

    /* 00 (base) */

    ActorTypeUnkVRGN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkVRGN *GetInstance();
};
