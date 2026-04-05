//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRB1F : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRB1F();

    /* 4C */ virtual ~ActorUnkRB1F() override;

    void func_ov069_02158df8(void);
    void func_ov069_02158e64(void);
    void func_ov069_02159000(void);
    void func_ov069_02159014(void);
    void func_ov069_021591c8(void);
    void func_ov069_02159260(void);
    void func_ov069_02159278(void);
    void func_ov069_021592c8(void);
    void func_ov069_02159400(void);
    void func_ov069_02159404(void);
    void func_ov069_0215944c(void);
    void func_ov069_02159508(void);
    void func_ov069_02159678(void);
    void func_ov069_02159690(void);
    void func_ov069_021596f8(void);
    void func_ov069_0215990c(void);
    void func_ov069_02159938(void);
    void func_ov069_02159974(void);
    void func_ov069_021599a8(void);
    void func_ov069_021599cc(void);
    void func_ov069_02159a20(void);
    void func_ov069_02159ca4(void);
    void func_ov069_02159ccc(void);
    void func_ov069_02159dcc(void);
    void func_ov069_02159df4(void);
    void func_ov069_02159e0c(void);
    void func_ov069_02159e38(void);
    void func_ov069_02159e5c(void);
    void func_ov069_02159e6c(void);
    void func_ov069_02159e74(void);
    void func_ov069_02159e90(void);
    void func_ov069_02159ec0(void);
    void func_ov069_02159ef8(void);
    void func_ov069_02159f0c(void);
    void func_ov069_02159f48(void);
    void func_ov069_02159f4c(void);
    void func_ov069_02159f60(void);
    void func_ov069_02159f88(void);
    void func_ov069_02159f9c(void);
    void func_ov069_0215a110(void);
    void func_ov069_0215a114(void);
    void func_ov069_0215a118(void);
    void func_ov069_0215a11c(void);
    void func_ov069_0215a1c0(void);
};

class ActorTypeUnkRB1F : public ActorType {
public:
    static ActorTypeUnkRB1F gInstance;

    /* 00 (base) */

    ActorTypeUnkRB1F();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRB1F *GetInstance();
};
