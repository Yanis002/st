//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAWA();

    /* 4C */ virtual ~ActorUnkCAWA() override;

    void func_ov061_02158b28(void);
    void func_ov061_02158b88(void);
    void func_ov061_02158ba8(void);
    void func_ov061_02158bc8(void);
    void func_ov061_02158ccc(void);
    void func_ov061_02158cf8(void);
    void func_ov061_02158d4c(void);
    void func_ov061_02158e40(void);
    void func_ov061_02158e68(void);
    void func_ov061_02158e98(void);
};

class ActorTypeUnkCAWA : public ActorType {
public:
    static ActorTypeUnkCAWA gInstance;

    /* 00 (base) */

    ActorTypeUnkCAWA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAWA *GetInstance();
};
