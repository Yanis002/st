//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTVLR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTVLR();

    /* 4C */ virtual ~ActorUnkTVLR() override;

    void func_ov026_0212212c(void);
    void func_ov026_0212218c(void);
    void func_ov026_02122350(void);
    void func_ov026_02122388(void);
    void func_ov026_021223c8(void);
    void func_ov026_021223d0(void);
    void func_ov026_02122404(void);
    void func_ov026_02122750(void);
    void func_ov026_021227a4(void);
    void func_ov026_02122a10(void);
    void func_ov026_02122a6c(void);
    void func_ov026_02122b34(void);
    void func_ov026_02122b90(void);
    void func_ov026_02122cec(void);
    void func_ov026_02122d60(void);
    void func_ov026_02122dd8(void);
    void func_ov026_02122dec(void);
    void func_ov026_02122e3c(void);
    void func_ov026_02122ea8(void);
};

class ActorTypeUnkTVLR : public ActorType {
public:
    static ActorTypeUnkTVLR gInstance;

    /* 00 (base) */

    ActorTypeUnkTVLR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTVLR *GetInstance();
};
