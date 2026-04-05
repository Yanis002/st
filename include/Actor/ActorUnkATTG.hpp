//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkATTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkATTG();

    /* 4C */ virtual ~ActorUnkATTG() override;

    void func_ov031_020f3dac(void);
    void func_ov031_020f3dd4(void);
    void func_ov031_020f3dfc(void);
    void func_ov031_020f3e50(void);
    void func_ov031_020f3eac(void);
    void func_ov031_020f3eec(void);
    void func_ov031_020f4014(void);
    void func_ov031_020f4058(void);
    void func_ov031_020f406c(void);
    void func_ov031_020f4088(void);
    void func_ov031_020f409c(void);
    void func_ov031_020f4144(void);
    void func_ov031_020f4188(void);
    void func_ov031_020f419c(void);
    void func_ov031_020f41e0(void);
    void func_ov031_020f4224(void);
    void func_ov031_020f424c(void);
    void func_ov031_020f4268(void);
    void func_ov031_020f4284(void);
    void func_ov031_020f4320(void);
    void func_ov031_020f439c(void);
    void func_ov031_020f442c(void);
    void func_ov031_020f4538(void);
    void func_ov031_020f4638(void);
    void func_ov031_020f4654(void);
    void func_ov031_020f467c(void);
    void func_ov031_020f46ac(void);
    void func_ov031_020f46c0(void);
    void func_ov031_020f4790(void);
    void func_ov031_020f47c0(void);
    void func_ov031_020f47d4(void);
    void func_ov031_020f4820(void);
    void func_ov031_020f488c(void);
    void func_ov031_020f48c8(void);
    void func_ov031_020f48e4(void);
    void func_ov031_020f4908(void);
    void func_ov031_020f4944(void);
    void func_ov031_020f4f80(void);
    void func_ov031_020f5204(void);
    void func_ov031_020f5448(void);
    void func_ov031_020f5608(void);
    void func_ov031_020f57e4(void);
    void func_ov031_020f582c(void);
    void func_ov031_020f587c(void);
    void func_ov031_020f58d0(void);
    void func_ov031_020f58d8(void);
    void func_ov031_020f58e0(void);
    void func_ov031_020f58f0(void);
    void func_ov031_020f595c(void);
    void func_ov031_020f596c(void);
    void func_ov031_020f59f0(void);
    void func_ov031_020f5a3c(void);
    void func_ov031_020f5a7c(void);
    void func_ov031_020f5b7c(void);
    void func_ov031_020f5b94(void);
    void func_ov031_020f60d8(void);
    void func_ov031_020f60ec(void);
};

class ActorTypeUnkATTG : public ActorType {
public:
    static ActorTypeUnkATTG gInstance;

    /* 00 (base) */

    ActorTypeUnkATTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkATTG *GetInstance();
};
