//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBSN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBSN();

    /* 4C */ virtual ~ActorUnkRBSN() override;

    void func_ov080_0215ea3c(void);
    void func_ov080_0215ea64(void);
    void func_ov080_0215ead8(void);
    void func_ov080_0215eaec(void);
    void func_ov080_0215eb54(void);
    void func_ov080_0215eb58(void);
    void func_ov080_0215eb6c(void);
    void func_ov080_0215eb80(void);
    void func_ov080_0215ebd0(void);
    void func_ov080_0215ebf4(void);
    void func_ov080_0215ec04(void);
    void func_ov080_0215ec0c(void);
    void func_ov080_0215ec28(void);
    void func_ov080_0215ec50(void);
};

class ActorTypeUnkRBSN : public ActorType {
public:
    static ActorTypeUnkRBSN gInstance;

    /* 00 (base) */

    ActorTypeUnkRBSN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBSN *GetInstance();
};
