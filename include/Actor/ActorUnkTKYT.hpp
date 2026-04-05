//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTKYT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTKYT();

    /* 4C */ virtual ~ActorUnkTKYT() override;

    void func_ov096_0217abbc(void);
    void func_ov096_0217abe4(void);
    void func_ov096_0217ac0c(void);
    void func_ov096_0217ac20(void);
    void func_ov096_0217ac3c(void);
    void func_ov096_0217acdc(void);
    void func_ov096_0217acf8(void);
    void func_ov096_0217acfc(void);
    void func_ov096_0217ad00(void);
    void func_ov096_0217ad04(void);
    void func_ov096_0217ad08(void);
    void func_ov096_0217ad1c(void);
};

class ActorTypeUnkTKYT : public ActorType {
public:
    static ActorTypeUnkTKYT gInstance;

    /* 00 (base) */

    ActorTypeUnkTKYT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTKYT *GetInstance();
};
