//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKGDB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkKGDB();

    /* 4C */ virtual ~ActorUnkKGDB() override;

    void func_ov041_021236d0(void);
    void func_ov041_02123720(void);
    void func_ov041_0212375c(void);
    void func_ov041_02123770(void);
    void func_ov041_021237e4(void);
    void func_ov041_0212382c(void);
    void func_ov041_02123a2c(void);
    void func_ov041_02123ac0(void);
    void func_ov041_02123b5c(void);
};

class ActorTypeUnkKGDB : public ActorType {
public:
    static ActorTypeUnkKGDB gInstance;

    /* 00 (base) */

    ActorTypeUnkKGDB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkKGDB *GetInstance();
};
