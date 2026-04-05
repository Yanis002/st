//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMABC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMABC();

    /* 4C */ virtual ~ActorUnkMABC() override;

    void func_ov092_02174534(void);
    void func_ov092_021745a0(void);
    void func_ov092_02174670(void);
    void func_ov092_02174730(void);
    void func_ov092_02174798(void);
    void func_ov092_021748b8(void);
    void func_ov092_021748e4(void);
    void func_ov092_02174ab4(void);
    void func_ov092_02174be8(void);
    void func_ov092_02174d9c(void);
    void func_ov092_02174f18(void);
    void func_ov092_02175134(void);
    void func_ov092_021751e4(void);
    void func_ov092_02175204(void);
    void func_ov092_0217522c(void);
};

class ActorTypeUnkMABC : public ActorType {
public:
    static ActorTypeUnkMABC gInstance;

    /* 00 (base) */

    ActorTypeUnkMABC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMABC *GetInstance();
};
