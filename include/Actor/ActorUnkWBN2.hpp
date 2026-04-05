//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWBN2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWBN2();

    /* 4C */ virtual ~ActorUnkWBN2() override;

    void func_ov046_021288c0(void);
    void func_ov046_02128904(void);
    void func_ov046_02128920(void);
    void func_ov046_02128a48(void);
    void func_ov046_02128a5c(void);
    void func_ov046_02128ab0(void);
    void func_ov046_02128b0c(void);
    void func_ov046_02128b8c(void);
    void func_ov046_02128bc0(void);
    void func_ov046_02128be4(void);
    void func_ov046_02128c90(void);
    void func_ov046_02128c98(void);
    void func_ov046_02128ca4(void);
    void func_ov046_02128d14(void);
    void func_ov046_02128ec8(void);
    void func_ov046_02128f0c(void);
    void func_ov046_021290f8(void);
    void func_ov046_021291e0(void);
    void func_ov046_021291e4(void);
    void func_ov046_02129228(void);
    void func_ov046_02129260(void);
    void func_ov046_021292d4(void);
    void func_ov046_02129304(void);
};

class ActorTypeUnkWBN2 : public ActorType {
public:
    static ActorTypeUnkWBN2 gInstance;

    /* 00 (base) */

    ActorTypeUnkWBN2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWBN2 *GetInstance();
};
