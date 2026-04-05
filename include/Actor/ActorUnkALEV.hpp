//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkALEV : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkALEV();

    /* 4C */ virtual ~ActorUnkALEV() override;

    void func_ov070_0213f7c4(void);
    void func_ov070_0213f800(void);
    void func_ov070_0213f828(void);
    void func_ov070_0213f848(void);
    void func_ov070_0213f858(void);
    void func_ov070_0213f86c(void);
    void func_ov070_0213f8dc(void);
    void func_ov070_0213f92c(void);
    void func_ov070_0213f94c(void);
    void func_ov070_0213f974(void);
    void func_ov070_0213f988(void);
    void func_ov070_0213f9dc(void);
    void func_ov070_0213f9f0(void);
    void func_ov070_0213fa30(void);
    void func_ov070_0213fa38(void);
    void func_ov070_0213fb14(void);
    void func_ov070_0213fbc4(void);
    void func_ov070_0213fdb4(void);
    void func_ov070_0213fdd0(void);
    void func_ov070_0213fdec(void);
    void func_ov070_0213fe30(void);
    void func_ov070_0213fe74(void);
    void func_ov070_0213fee8(void);
    void func_ov070_0213ffa4(void);
    void func_ov070_0213ffb0(void);
    void func_ov070_0213ffc0(void);
    void func_ov070_0213ffe0(void);
    void func_ov070_0214000c(void);
    void func_ov070_02140010(void);
    void func_ov070_02140030(void);
};

class ActorTypeUnkALEV : public ActorType {
public:
    static ActorTypeUnkALEV gInstance;

    /* 00 (base) */

    ActorTypeUnkALEV();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkALEV *GetInstance();
};
