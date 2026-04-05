//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCOMM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCOMM();

    /* 4C */ virtual ~ActorUnkCOMM() override;

    void func_ov060_0215c70c(void);
    void func_ov060_0215c768(void);
    void func_ov060_0215c8ac(void);
    void func_ov060_0215c8f8(void);
    void func_ov060_0215ca08(void);
    void func_ov060_0215ca84(void);
    void func_ov060_0215caf8(void);
    void func_ov060_0215cb34(void);
    void func_ov060_0215cb40(void);
    void func_ov060_0215cb88(void);
    void func_ov060_0215cba4(void);
    void func_ov060_0215cbe4(void);
    void func_ov060_0215cc50(void);
    void func_ov060_0215ccac(void);
    void func_ov060_0215ccc4(void);
    void func_ov060_0215ccd8(void);
    void func_ov060_0215ccf4(void);
    void func_ov060_0215ccfc(void);
    void func_ov060_0215cda8(void);
    void func_ov060_0215cdb0(void);
    void func_ov060_0215cdcc(void);
    void func_ov060_0215ce38(void);
    void func_ov060_0215ce6c(void);
    void func_ov060_0215ce94(void);
    void func_ov060_0215cec4(void);
};

class ActorTypeUnkCOMM : public ActorType {
public:
    static ActorTypeUnkCOMM gInstance;

    /* 00 (base) */

    ActorTypeUnkCOMM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCOMM *GetInstance();
};
