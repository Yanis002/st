//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITTD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkITTD();

    /* 4C */ virtual ~ActorUnkITTD() override;

    void func_ov031_020e58f8(void);
    void func_ov031_020e593c(void);
    void func_ov031_020e5b20(void);
    void func_ov031_020e5b34(void);
    void func_ov031_020e5c00(void);
    void func_ov031_020e5d18(void);
    void func_ov031_020e6148(void);
    void func_ov031_020e6158(void);
    void func_ov031_020e619c(void);
    void func_ov031_020e62c0(void);
    void func_ov031_020e6314(void);
    void func_ov031_020e6340(void);
    void func_ov031_020e6398(void);
    void func_ov031_020e6410(void);
    void func_ov031_020e642c(void);
    void func_ov031_020e6474(void);
    void func_ov031_020e64c4(void);
    void func_ov031_020e64d8(void);
    void func_ov031_020e6548(void);
    void func_ov031_020e6620(void);
    void func_ov031_020e66ec(void);
    void func_ov031_020e6700(void);
    void func_ov031_020e6714(void);
    void func_ov031_020e6774(void);
    void func_ov031_020e67dc(void);
    void func_ov031_020e6858(void);
    void func_ov031_020e68bc(void);
    void func_ov031_020e68d8(void);
    void func_ov031_020e6900(void);
    void func_ov031_020e691c(void);
    void func_ov031_020e6974(void);
    void func_ov031_020e69cc(void);
};

class ActorTypeUnkITTD : public ActorType {
public:
    static ActorTypeUnkITTD gInstance;

    /* 00 (base) */

    ActorTypeUnkITTD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkITTD *GetInstance();
};
