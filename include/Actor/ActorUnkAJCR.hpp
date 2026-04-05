//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJCR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkAJCR();

    /* 4C */ virtual ~ActorUnkAJCR() override;

    void func_ov068_0215d79c(void);
    void func_ov068_0215d7c4(void);
    void func_ov068_0215d7f4(void);
    void func_ov068_0215d8d8(void);
    void func_ov068_0215d8e8(void);
    void func_ov068_0215d8fc(void);
    void func_ov068_0215d918(void);
    void func_ov068_0215d92c(void);
    void func_ov068_0215d9c0(void);
    void func_ov068_0215da08(void);
    void func_ov068_0215da58(void);
    void func_ov068_0215da60(void);
    void func_ov068_0215daa8(void);
    void func_ov068_0215dc40(void);
    void func_ov068_0215dcb0(void);
    void func_ov068_0215dcb4(void);
    void func_ov068_0215dccc(void);
    void func_ov068_0215dd1c(void);
    void func_ov068_0215dd64(void);
    void func_ov068_0215dea8(void);
    void func_ov068_0215deb8(void);
    void func_ov068_0215dee8(void);
    void func_ov068_0215df08(void);
    void func_ov068_0215e000(void);
    void func_ov068_0215e004(void);
    void func_ov068_0215e010(void);
    void func_ov068_0215e014(void);
    void func_ov068_0215e020(void);
    void func_ov068_0215e040(void);
    void func_ov068_0215e064(void);
    void func_ov068_0215e068(void);
    void func_ov068_0215e140(void);
    void func_ov068_0215e174(void);
    void func_ov068_0215e218(void);
    void func_ov068_0215e238(void);
    void func_ov068_0215e23c(void);
    void func_ov068_0215e240(void);
    void func_ov068_0215e290(void);
    void func_ov068_0215e2c0(void);
    void func_ov068_0215e2f0(void);
    void func_ov068_0215e370(void);
    void func_ov068_0215e390(void);
    void func_ov068_0215e3b8(void);
    void func_ov068_0215e3d8(void);
};

class ActorTypeUnkAJCR : public ActorType {
public:
    static ActorTypeUnkAJCR gInstance;

    /* 00 (base) */

    ActorTypeUnkAJCR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkAJCR *GetInstance();
};
