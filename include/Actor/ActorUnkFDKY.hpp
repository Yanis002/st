//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFDKY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFDKY();

    /* 4C */ virtual ~ActorUnkFDKY() override;

    void func_ov030_0214c374(void);
    void func_ov030_0214c3b4(void);
    void func_ov030_0214c3e4(void);
    void func_ov030_0214c424(void);
    void func_ov030_0214c494(void);
    void func_ov030_0214c4b4(void);
    void func_ov030_0214c4dc(void);
    void func_ov030_0214c884(void);
    void func_ov030_0214ca24(void);
    void func_ov030_0214ca34(void);
    void func_ov030_0214cab0(void);
    void func_ov030_0214caf0(void);
    void func_ov030_0214cb28(void);
    void func_ov030_0214cb44(void);
    void func_ov030_0214cb50(void);
    void func_ov030_0214cc68(void);
    void func_ov030_0214cdc0(void);
    void func_ov030_0214ce28(void);
};

class ActorTypeUnkFDKY : public ActorType {
public:
    static ActorTypeUnkFDKY gInstance;

    /* 00 (base) */

    ActorTypeUnkFDKY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFDKY *GetInstance();
};
