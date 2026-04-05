//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCROW : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCROW();

    /* 4C */ virtual ~ActorUnkCROW() override;

    void func_ov049_0213211c(void);
    void func_ov049_02132168(void);
    void func_ov049_02132330(void);
    void func_ov049_02132344(void);
    void func_ov049_0213240c(void);
    void func_ov049_021324dc(void);
    void func_ov049_0213259c(void);
    void func_ov049_02132600(void);
    void func_ov049_02132604(void);
    void func_ov049_021326d8(void);
    void func_ov049_02132714(void);
    void func_ov049_0213275c(void);
    void func_ov049_02132a40(void);
    void func_ov049_02132cf0(void);
    void func_ov049_02132d1c(void);
    void func_ov049_02132e00(void);
    void func_ov049_02132ea8(void);
    void func_ov049_02132f28(void);
    void func_ov049_02132fec(void);
    void func_ov049_02133068(void);
    void func_ov049_02133128(void);
    void func_ov049_02133488(void);
    void func_ov049_02133520(void);
    void func_ov049_02133594(void);
    void func_ov049_02133798(void);
    void func_ov049_021338ac(void);
    void func_ov049_02133a68(void);
    void func_ov049_02133acc(void);
    void func_ov049_02133af4(void);
    void func_ov049_02133b34(void);
    void func_ov049_02133bf4(void);
    void func_ov049_02133c70(void);
    void func_ov049_02133ce0(void);
    void func_ov049_02133d4c(void);
    void func_ov049_02133da4(void);
    void func_ov049_02133dec(void);
    void func_ov049_02133e70(void);
    void func_ov049_02133e98(void);
    void func_ov049_02133eb4(void);
    void func_ov049_02133ed8(void);
    void func_ov049_02133f04(void);
    void func_ov049_02133fbc(void);
    void func_ov049_021340a8(void);
    void func_ov049_021340cc(void);
    void func_ov049_021340f8(void);
    void func_ov049_02134104(void);
    void func_ov049_02134120(void);
};

class ActorTypeUnkCROW : public ActorType {
public:
    static ActorTypeUnkCROW gInstance;

    /* 00 (base) */

    ActorTypeUnkCROW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCROW *GetInstance();
};
