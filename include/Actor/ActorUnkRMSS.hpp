//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMSS();

    /* 4C */ virtual ~ActorUnkRMSS() override;

    void func_ov063_0215c5b4(void);
    void func_ov063_0215c5dc(void);
    void func_ov063_0215c5fc(void);
    void func_ov063_0215c63c(void);
    void func_ov063_0215c67c(void);
    void func_ov063_0215c6a4(void);
    void func_ov063_0215c6d4(void);
    void func_ov063_0215c6e8(void);
    void func_ov063_0215c7b0(void);
    void func_ov063_0215c7c4(void);
    void func_ov063_0215c7ec(void);
    void func_ov063_0215c81c(void);
    void func_ov063_0215c868(void);
    void func_ov063_0215c884(void);
    void func_ov063_0215c8d0(void);
    void func_ov063_0215ca28(void);
    void func_ov063_0215ca4c(void);
    void func_ov063_0215ca60(void);
    void func_ov063_0215cb78(void);
    void func_ov063_0215cbb0(void);
    void func_ov063_0215cc30(void);
    void func_ov063_0215cd44(void);
    void func_ov063_0215cd64(void);
    void func_ov063_0215cd8c(void);
    void func_ov063_0215cda8(void);
    void func_ov063_0215d46c(void);
    void func_ov063_0215d4bc(void);
    void func_ov063_0215d574(void);
    void func_ov063_0215d5cc(void);
    void func_ov063_0215d5dc(void);
    void func_ov063_0215d610(void);
    void func_ov063_0215d6d8(void);
    void func_ov063_0215d7dc(void);
    void func_ov063_0215d8c8(void);
    void func_ov063_0215d8cc(void);
    void func_ov063_0215d8d0(void);
    void func_ov063_0215d8ec(void);
    void func_ov063_0215d958(void);
    void func_ov063_0215d9c0(void);
    void func_ov063_0215db28(void);
    void func_ov063_0215dba8(void);
    void func_ov063_0215dd88(void);
    void func_ov063_0215ded0(void);
    void func_ov063_0215e090(void);
    void func_ov063_0215e0c0(void);
    void func_ov063_0215e0f4(void);
    void func_ov063_0215e188(void);
    void func_ov063_0215e1e0(void);
    void func_ov063_0215e40c(void);
    void func_ov063_0215e64c(void);
    void func_ov063_0215e81c(void);
    void func_ov063_0215e880(void);
    void func_ov063_0215e988(void);
    void func_ov063_0215ea74(void);
    void func_ov063_0215ec44(void);
    void func_ov063_0215eca4(void);
    void func_ov063_0215ecc4(void);
    void func_ov063_0215ece0(void);
    void func_ov063_0215ecfc(void);
    void func_ov063_0215ed30(void);
    void func_ov063_0215ed64(void);
    void func_ov063_0215ed80(void);
    void func_ov063_0215ed90(void);
    void func_ov063_0215edb4(void);
    void func_ov063_0215ee34(void);
    void func_ov063_0215ee40(void);
    void func_ov063_0215eeec(void);
    void func_ov063_0215ef20(void);
    void func_ov063_0215ef4c(void);
    void func_ov063_0215ef5c(void);
    void func_ov063_0215ef78(void);
    void func_ov063_0215efb0(void);
    void func_ov063_0215f188(void);
    void func_ov063_0215f1c0(void);
    void func_ov063_0215f1d4(void);
    void func_ov063_0215f1ec(void);
    void func_ov063_0215f20c(void);
    void func_ov063_0215f23c(void);
    void func_ov063_0215f248(void);
    void func_ov063_0215f268(void);
    void func_ov063_0215f288(void);
    void func_ov063_0215f29c(void);
};

class ActorTypeUnkRMSS : public ActorType {
public:
    static ActorTypeUnkRMSS gInstance;

    /* 00 (base) */

    ActorTypeUnkRMSS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMSS *GetInstance();
};
