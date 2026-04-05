//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOBPC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkOBPC();

    /* 4C */ virtual ~ActorUnkOBPC() override;

    void func_ov024_020d6ecc(void);
    void func_ov024_020d6ef4(void);
    void func_ov024_020d6f28(void);
    void func_ov024_020d6f74(void);
    void func_ov024_020d6f94(void);
    void func_ov024_020d7050(void);
    void func_ov024_020d7064(void);
    void func_ov024_020d7154(void);
    void func_ov024_020d72bc(void);
    void func_ov024_020d72dc(void);
};

class ActorTypeUnkOBPC : public ActorType {
public:
    static ActorTypeUnkOBPC gInstance;

    /* 00 (base) */

    ActorTypeUnkOBPC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkOBPC *GetInstance();
};
