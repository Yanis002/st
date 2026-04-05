//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTLKT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTLKT();

    /* 4C */ virtual ~ActorUnkTLKT() override;

    void func_ov031_020e4108(void);
    void func_ov031_020e4130(void);
    void func_ov031_020e4164(void);
    void func_ov031_020e41a4(void);
    void func_ov031_020e41ec(void);
    void func_ov031_020e4238(void);
    void func_ov031_020e4274(void);
    void func_ov031_020e42ac(void);
    void func_ov031_020e42f0(void);
    void func_ov031_020e4320(void);
    void func_ov031_020e4514(void);
    void func_ov031_020e4570(void);
    void func_ov031_020e4584(void);
    void func_ov031_020e4594(void);
};

class ActorTypeUnkTLKT : public ActorType {
public:
    static ActorTypeUnkTLKT gInstance;

    /* 00 (base) */

    ActorTypeUnkTLKT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTLKT *GetInstance();
};
