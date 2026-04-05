//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPOST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkPOST();

    /* 4C */ virtual ~ActorUnkPOST() override;

    void func_ov049_021347ec(void);
    void func_ov049_02134854(void);
    void func_ov049_02134a20(void);
    void func_ov049_02134b8c(void);
    void func_ov049_02134bdc(void);
    void func_ov049_02134c34(void);
    void func_ov049_02134ce8(void);
    void func_ov049_02134d4c(void);
    void func_ov049_02134d98(void);
    void func_ov049_02134dcc(void);
    void func_ov049_02134de0(void);
    void func_ov049_02134e20(void);
    void func_ov049_02134e24(void);
    void func_ov049_02134e48(void);
    void func_ov049_02134e54(void);
    void func_ov049_02134ed8(void);
    void func_ov049_02134f6c(void);
    void func_ov049_02135074(void);
    void func_ov049_02135100(void);
    void func_ov049_021351cc(void);
    void func_ov049_021351f4(void);
    void func_ov049_02135214(void);
    void func_ov049_02135228(void);
    void func_ov049_02135248(void);
    void func_ov049_02135268(void);
    void func_ov049_02135288(void);
    void func_ov049_021352a8(void);
    void func_ov049_021352c8(void);
    void func_ov049_021352e8(void);
    void func_ov049_02135308(void);
    void func_ov049_02135328(void);
    void func_ov049_02135348(void);
    void func_ov049_02135384(void);
    void func_ov049_021353c0(void);
    void func_ov049_021353fc(void);
    void func_ov049_0213541c(void);
    void func_ov049_0213543c(void);
    void func_ov049_0213545c(void);
    void func_ov049_0213547c(void);
    void func_ov049_0213549c(void);
    void func_ov049_0213551c(void);
};

class ActorTypeUnkPOST : public ActorType {
public:
    static ActorTypeUnkPOST gInstance;

    /* 00 (base) */

    ActorTypeUnkPOST();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkPOST *GetInstance();
};
