//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMM0();

    /* 4C */ virtual ~ActorUnkRMM0() override;

    void func_ov072_02150cb4(void);
    void func_ov072_02150cdc(void);
    void func_ov072_02150ed0(void);
    void func_ov072_02150ee4(void);
    void func_ov072_02150f08(void);
    void func_ov072_02150f1c(void);
    void func_ov072_02151230(void);
    void func_ov072_02151668(void);
    void func_ov072_02151764(void);
    void func_ov072_02151884(void);
    void func_ov072_021519dc(void);
    void func_ov072_02151af0(void);
    void func_ov072_02151b3c(void);
    void func_ov072_02151c98(void);
    void func_ov072_02151dc8(void);
    void func_ov072_02151e10(void);
    void func_ov072_02151e2c(void);
    void func_ov072_02151e58(void);
    void func_ov072_02151f5c(void);
    void func_ov072_02151f78(void);
    void func_ov072_02151fd8(void);
    void func_ov072_02152040(void);
};

class ActorTypeUnkRMM0 : public ActorType {
public:
    static ActorTypeUnkRMM0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMM0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMM0 *GetInstance();
};
