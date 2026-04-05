//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRBC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTRBC();

    /* 4C */ virtual ~ActorUnkTRBC() override;

    void func_ov026_0210fdb8(void);
    void func_ov026_0210fe1c(void);
    void func_ov026_0210fec0(void);
    void func_ov026_0210fed8(void);
    void func_ov026_0210ff24(void);
    void func_ov026_02110024(void);
    void func_ov026_0211006c(void);
    void func_ov026_021100ac(void);
    void func_ov026_02110140(void);
    void func_ov026_02110150(void);
    void func_ov026_021101c8(void);
    void func_ov026_021101cc(void);
    void func_ov026_021101f4(void);
    void func_ov026_02110214(void);
    void func_ov026_0211023c(void);
};

class ActorTypeUnkTRBC : public ActorType {
public:
    static ActorTypeUnkTRBC gInstance;

    /* 00 (base) */

    ActorTypeUnkTRBC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTRBC *GetInstance();
};
