//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSV : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMSV();

    /* 4C */ virtual ~ActorUnkRMSV() override;

    void func_ov063_0215bc5c(void);
    void func_ov063_0215bc84(void);
    void func_ov063_0215bd44(void);
    void func_ov063_0215bd58(void);
    void func_ov063_0215bdec(void);
    void func_ov063_0215be10(void);
    void func_ov063_0215be3c(void);
    void func_ov063_0215be50(void);
    void func_ov063_0215be90(void);
    void func_ov063_0215bed0(void);
    void func_ov063_0215bee0(void);
    void func_ov063_0215bee8(void);
    void func_ov063_0215bf04(void);
    void func_ov063_0215bf3c(void);
    void func_ov063_0215bf7c(void);
    void func_ov063_0215bf90(void);
    void func_ov063_0215bf9c(void);
    void func_ov063_0215bfc0(void);
    void func_ov063_0215bfe8(void);
    void func_ov063_0215c05c(void);
    void func_ov063_0215c0b0(void);
    void func_ov063_0215c0c8(void);
    void func_ov063_0215c0dc(void);
    void func_ov063_0215c11c(void);
    void func_ov063_0215c15c(void);
    void func_ov063_0215c18c(void);
    void func_ov063_0215c1c4(void);
};

class ActorTypeUnkRMSV : public ActorType {
public:
    static ActorTypeUnkRMSV gInstance;

    /* 00 (base) */

    ActorTypeUnkRMSV();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMSV *GetInstance();
};
