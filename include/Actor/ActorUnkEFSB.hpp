//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFSB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFSB();

    /* 4C */ virtual ~ActorUnkEFSB() override;

    void func_ov031_020fb4dc(void);
    void func_ov031_020fb504(void);
    void func_ov031_020fb614(void);
    void func_ov031_020fb6cc(void);
    void func_ov031_020fb704(void);
    void func_ov031_020fb718(void);
    void func_ov031_020fb720(void);
    void func_ov031_020fb790(void);
    void func_ov031_020fb7c0(void);
    void func_ov031_020fb7f8(void);
};

class ActorTypeUnkEFSB : public ActorType {
public:
    static ActorTypeUnkEFSB gInstance;

    /* 00 (base) */

    ActorTypeUnkEFSB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFSB *GetInstance();
};
