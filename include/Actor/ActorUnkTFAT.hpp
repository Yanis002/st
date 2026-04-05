//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTFAT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTFAT();

    /* 4C */ virtual ~ActorUnkTFAT() override;

    void func_ov026_02116620(void);
    void func_ov026_02116648(void);
    void func_ov026_02116668(void);
    void func_ov026_0211667c(void);
    void func_ov026_02116680(void);
    void func_ov026_0211670c(void);
    void func_ov026_02116720(void);
    void func_ov026_02116728(void);
    void func_ov026_02116780(void);
    void func_ov026_02116794(void);
    void func_ov026_021167b0(void);
};

class ActorTypeUnkTFAT : public ActorType {
public:
    static ActorTypeUnkTFAT gInstance;

    /* 00 (base) */

    ActorTypeUnkTFAT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTFAT *GetInstance();
};
