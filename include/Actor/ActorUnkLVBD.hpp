//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLVBD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkLVBD();

    /* 4C */ virtual ~ActorUnkLVBD() override;

    void func_ov084_0215eb88(void);
    void func_ov084_0215ec28(void);
    void func_ov084_0215ec40(void);
    void func_ov084_0215edc0(void);
    void func_ov084_0215edd4(void);
    void func_ov084_0215ede8(void);
    void func_ov084_0215edfc(void);
    void func_ov084_0215ef1c(void);
    void func_ov084_0215ef20(void);
    void func_ov084_0215f0c8(void);
    void func_ov084_0215f108(void);
    void func_ov084_0215f3bc(void);
    void func_ov084_0215f3f8(void);
    void func_ov084_0215f830(void);
    void func_ov084_0215f954(void);
    void func_ov084_0215f9ac(void);
    void func_ov084_0215fad0(void);
    void func_ov084_0215fca0(void);
    void func_ov084_0215fdd4(void);
    void func_ov084_02160054(void);
    void func_ov084_0216009c(void);
    void func_ov084_021600d8(void);
    void func_ov084_02160148(void);
    void func_ov084_0216019c(void);
    void func_ov084_021601b4(void);
    void func_ov084_021601c0(void);
    void func_ov084_02160284(void);
    void func_ov084_021602d8(void);
    void func_ov084_02160314(void);
    void func_ov084_02160368(void);
    void func_ov084_02160384(void);
    void func_ov084_021603a0(void);
    void func_ov084_021603bc(void);
    void func_ov084_021603fc(void);
    void func_ov084_02160444(void);
    void func_ov084_02160458(void);
    void func_ov084_02160464(void);
    void func_ov084_02160488(void);
    void func_ov084_021604b0(void);
    void func_ov084_021604f0(void);
    void func_ov084_02160504(void);
    void func_ov084_0216054c(void);
    void func_ov084_02160560(void);
    void func_ov084_021605ac(void);
    void func_ov084_021605b0(void);
    void func_ov084_021605d0(void);
    void func_ov084_021605f8(void);
    void func_ov084_0216060c(void);
    void func_ov084_02160618(void);
    void func_ov084_0216063c(void);
    void func_ov084_02160688(void);
    void func_ov084_021606e4(void);
    void func_ov084_02160738(void);
    void func_ov084_02160798(void);
    void func_ov084_021607c0(void);
    void func_ov084_021607f0(void);
    void func_ov084_02160804(void);
    void func_ov084_02160820(void);
};

class ActorTypeUnkLVBD : public ActorType {
public:
    static ActorTypeUnkLVBD gInstance;

    /* 00 (base) */

    ActorTypeUnkLVBD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkLVBD *GetInstance();
};
