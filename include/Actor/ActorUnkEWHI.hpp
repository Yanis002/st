//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEWHI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEWHI();

    /* 4C */ virtual ~ActorUnkEWHI() override;

    void func_ov082_0215770c(void);
    void func_ov082_0215774c(void);
    void func_ov082_02157778(void);
    void func_ov082_021577ac(void);
    void func_ov082_021577e8(void);
    void func_ov082_02157820(void);
    void func_ov082_02157858(void);
    void func_ov082_02157898(void);
    void func_ov082_0215789c(void);
    void func_ov082_021578b8(void);
    void func_ov082_021578bc(void);
    void func_ov082_021578d8(void);
    void func_ov082_02157924(void);
    void func_ov082_02157940(void);
    void func_ov082_02157944(void);
    void func_ov082_0215795c(void);
    void func_ov082_02157960(void);
    void func_ov082_02157978(void);
    void func_ov082_02157980(void);
    void func_ov082_021579b8(void);
    void func_ov082_02157a04(void);
    void func_ov082_02157a2c(void);
    void func_ov082_02157a5c(void);
};

class ActorTypeUnkEWHI : public ActorType {
public:
    static ActorTypeUnkEWHI gInstance;

    /* 00 (base) */

    ActorTypeUnkEWHI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEWHI *GetInstance();
};
