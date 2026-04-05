//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCNBL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCNBL();

    /* 4C */ virtual ~ActorUnkCNBL() override;

    void func_ov026_0210f160(void);
    void func_ov026_0210f1a4(void);
    void func_ov026_0210f264(void);
    void func_ov026_0210f26c(void);
    void func_ov026_0210f304(void);
    void func_ov026_0210f30c(void);
    void func_ov026_0210f3e8(void);
    void func_ov026_0210f4c4(void);
    void func_ov026_0210f500(void);
    void func_ov026_0210f678(void);
    void func_ov026_0210fa04(void);
    void func_ov026_0210fc14(void);
    void func_ov026_0210fc64(void);
    void func_ov026_0210fce8(void);
    void func_ov026_0210fd74(void);
};

class ActorTypeUnkCNBL : public ActorType {
public:
    static ActorTypeUnkCNBL gInstance;

    /* 00 (base) */

    ActorTypeUnkCNBL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCNBL *GetInstance();
};
