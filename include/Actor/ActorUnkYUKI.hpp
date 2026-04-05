//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYUKI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkYUKI();

    /* 4C */ virtual ~ActorUnkYUKI() override;

    void func_ov065_02157ed0(void);
    void func_ov065_02157f4c(void);
    void func_ov065_021580b0(void);
    void func_ov065_021580c4(void);
    void func_ov065_021580d8(void);
    void func_ov065_021580ec(void);
    void func_ov065_02158288(void);
    void func_ov065_02158304(void);
    void func_ov065_02158380(void);
    void func_ov065_02158520(void);
    void func_ov065_02158524(void);
    void func_ov065_021585f4(void);
    void func_ov065_02158608(void);
    void func_ov065_021586a8(void);
    void func_ov065_021586f4(void);
    void func_ov065_0215875c(void);
    void func_ov065_02158778(void);
    void func_ov065_02158798(void);
    void func_ov065_021587b0(void);
    void func_ov065_021587d4(void);
    void func_ov065_021587e4(void);
    void func_ov065_021587ec(void);
    void func_ov065_02158808(void);
    void func_ov065_02158824(void);
    void func_ov065_02158854(void);
    void func_ov065_0215888c(void);
    void func_ov065_021588b0(void);
    void func_ov065_021588dc(void);
    void func_ov065_021588f8(void);
    void func_ov065_02158920(void);
    void func_ov065_02158940(void);
    void func_ov065_02158960(void);
    void func_ov065_02158974(void);
    void func_ov065_02158988(void);
    void func_ov065_021589a0(void);
    void func_ov065_021589b4(void);
    void func_ov065_021589d8(void);
    void func_ov065_021589ec(void);
    void func_ov065_02158a4c(void);
    void func_ov065_02158a68(void);
    void func_ov065_02158b44(void);
    void func_ov065_02158b70(void);
    void func_ov065_02158b8c(void);
    void func_ov065_02158c08(void);
    void func_ov065_02158c3c(void);
    void func_ov065_02158c50(void);
    void func_ov065_02158cb4(void);
    void func_ov065_02158cf8(void);
    void func_ov065_02158d0c(void);
    void func_ov065_02158d4c(void);
    void func_ov065_02158d68(void);
};

class ActorTypeUnkYUKI : public ActorType {
public:
    static ActorTypeUnkYUKI gInstance;

    /* 00 (base) */

    ActorTypeUnkYUKI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkYUKI *GetInstance();
};
