//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGORK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGORK();

    /* 4C */ virtual ~ActorUnkGORK() override;

    void func_ov067_021580d4(void);
    void func_ov067_02158148(void);
    void func_ov067_0215829c(void);
    void func_ov067_021583f0(void);
    void func_ov067_02158404(void);
    void func_ov067_02158520(void);
    void func_ov067_021585d4(void);
    void func_ov067_02158628(void);
    void func_ov067_0215871c(void);
    void func_ov067_02158794(void);
    void func_ov067_02158800(void);
    void func_ov067_02158888(void);
    void func_ov067_021588f4(void);
    void func_ov067_02158960(void);
    void func_ov067_021589b4(void);
    void func_ov067_02158b84(void);
    void func_ov067_02158b90(void);
    void func_ov067_02158ba4(void);
    void func_ov067_02158bb0(void);
    void func_ov067_02158bc4(void);
    void func_ov067_02158bd0(void);
    void func_ov067_02158be4(void);
    void func_ov067_02158c10(void);
    void func_ov067_02158c1c(void);
    void func_ov067_02158c80(void);
    void func_ov067_02158d70(void);
    void func_ov067_02158e60(void);
    void func_ov067_02158f54(void);
    void func_ov067_02158f60(void);
    void func_ov067_02158fb4(void);
    void func_ov067_02158fc0(void);
    void func_ov067_02158fd4(void);
    void func_ov067_02158fd8(void);
    void func_ov067_02158fdc(void);
    void func_ov067_02158fe0(void);
    void func_ov067_021590c0(void);
    void func_ov067_02159128(void);
    void func_ov067_02159144(void);
    void func_ov067_021591d8(void);
    void func_ov067_02159240(void);
    void func_ov067_02159298(void);
    void func_ov067_02159314(void);
    void func_ov067_021593c0(void);
    void func_ov067_0215941c(void);
    void func_ov067_02159444(void);
    void func_ov067_02159474(void);
    void func_ov067_02159498(void);
    void func_ov067_021594c4(void);
    void func_ov067_021594e0(void);
    void func_ov067_02159508(void);
    void func_ov067_02159528(void);
    void func_ov067_0215953c(void);
    void func_ov067_02159550(void);
    void func_ov067_02159564(void);
};

class ActorTypeUnkGORK : public ActorType {
public:
    static ActorTypeUnkGORK gInstance;

    /* 00 (base) */

    ActorTypeUnkGORK();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGORK *GetInstance();
};
