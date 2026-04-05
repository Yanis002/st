//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSSF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFSSF();

    /* 4C */ virtual ~ActorUnkFSSF() override;

    void func_ov057_02139e90(void);
    void func_ov057_02139eb8(void);
    void func_ov057_02139ef4(void);
    void func_ov057_02139f08(void);
    void func_ov057_02139f24(void);
    void func_ov057_02139fc4(void);
    void func_ov057_0213a0c0(void);
    void func_ov057_0213a0cc(void);
    void func_ov057_0213a124(void);
    void func_ov057_0213a168(void);
};

class ActorTypeUnkFSSF : public ActorType {
public:
    static ActorTypeUnkFSSF gInstance;

    /* 00 (base) */

    ActorTypeUnkFSSF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFSSF *GetInstance();
};
