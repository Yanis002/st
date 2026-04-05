//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFLCT();

    /* 4C */ virtual ~ActorUnkFLCT() override;

    void func_ov061_021591d0(void);
    void func_ov061_021591f8(void);
    void func_ov061_0215926c(void);
    void func_ov061_02159280(void);
    void func_ov061_021592e8(void);
    void func_ov061_021592ec(void);
    void func_ov061_02159360(void);
    void func_ov061_02159374(void);
    void func_ov061_021593c4(void);
    void func_ov061_021593e0(void);
    void func_ov061_02159408(void);
};

class ActorTypeUnkFLCT : public ActorType {
public:
    static ActorTypeUnkFLCT gInstance;

    /* 00 (base) */

    ActorTypeUnkFLCT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFLCT *GetInstance();
};
