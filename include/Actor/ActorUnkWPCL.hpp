//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWPCL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWPCL();

    /* 4C */ virtual ~ActorUnkWPCL() override;

    void func_ov045_02128eec(void);
    void func_ov045_02128f14(void);
    void func_ov045_02128f58(void);
    void func_ov045_02128fec(void);
    void func_ov045_0212900c(void);
};

class ActorTypeUnkWPCL : public ActorType {
public:
    static ActorTypeUnkWPCL gInstance;

    /* 00 (base) */

    ActorTypeUnkWPCL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWPCL *GetInstance();
};
