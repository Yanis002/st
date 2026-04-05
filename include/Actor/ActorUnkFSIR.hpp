//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSIR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFSIR();

    /* 4C */ virtual ~ActorUnkFSIR() override;

    void func_ov056_0213ac20(void);
    void func_ov056_0213ae54(void);
    void func_ov056_0213aeac(void);
    void func_ov056_0213af0c(void);
    void func_ov056_0213af70(void);
    void func_ov056_0213af9c(void);
    void func_ov056_0213b028(void);
    void func_ov056_0213b088(void);
    void func_ov056_0213b0e4(void);
    void func_ov056_0213b134(void);
    void func_ov056_0213b138(void);
    void func_ov056_0213b13c(void);
    void func_ov056_0213b140(void);
    void func_ov056_0213b144(void);
    void func_ov056_0213b148(void);
    void func_ov056_0213b234(void);
    void func_ov056_0213b238(void);
};

class ActorTypeUnkFSIR : public ActorType {
public:
    static ActorTypeUnkFSIR gInstance;

    /* 00 (base) */

    ActorTypeUnkFSIR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFSIR *GetInstance();
};
