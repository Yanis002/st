//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFWL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFWL();

    /* 4C */ virtual ~ActorUnkEFWL() override;

    void func_ov099_021810e4(void);
    void func_ov099_02181114(void);
    void func_ov099_02181128(void);
    void func_ov099_02181230(void);
    void func_ov099_021812ec(void);
    void func_ov099_0218133c(void);
    void func_ov099_02181350(void);
    void func_ov099_02181384(void);
    void func_ov099_021813b4(void);
    void func_ov099_021813dc(void);
    void func_ov099_02181400(void);
    void func_ov099_0218142c(void);
    void func_ov099_02181448(void);
};

class ActorTypeUnkEFWL : public ActorType {
public:
    static ActorTypeUnkEFWL gInstance;

    /* 00 (base) */

    ActorTypeUnkEFWL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFWL *GetInstance();
};
