//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPTT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSPTT();

    /* 4C */ virtual ~ActorUnkSPTT() override;

    void func_ov093_02176ad8(void);
    void func_ov093_02176b00(void);
    void func_ov093_02176c70(void);
    void func_ov093_02176e18(void);
    void func_ov093_02176ea4(void);
    void func_ov093_02176ef8(void);
    void func_ov093_02176fa8(void);
    void func_ov093_021771e4(void);
    void func_ov093_021771f8(void);
    void func_ov093_02177214(void);
};

class ActorTypeUnkSPTT : public ActorType {
public:
    static ActorTypeUnkSPTT gInstance;

    /* 00 (base) */

    ActorTypeUnkSPTT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSPTT *GetInstance();
};
