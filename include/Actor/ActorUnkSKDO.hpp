//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSKDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSKDO();

    /* 4C */ virtual ~ActorUnkSKDO() override;

    void func_ov031_02106d90(void);
    void func_ov031_02106db8(void);
    void func_ov031_02106de0(void);
    void func_ov031_02106de8(void);
    void func_ov031_02106e58(void);
    void func_ov031_02106e90(void);
    void func_ov031_02106e98(void);
    void func_ov031_02106ed4(void);
    void func_ov031_02106ee8(void);
};

class ActorTypeUnkSKDO : public ActorType {
public:
    static ActorTypeUnkSKDO gInstance;

    /* 00 (base) */

    ActorTypeUnkSKDO();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSKDO *GetInstance();
};
