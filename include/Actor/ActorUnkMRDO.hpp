//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMRDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMRDO();

    /* 4C */ virtual ~ActorUnkMRDO() override;

    void func_ov075_02150c74(void);
    void func_ov075_02150cc4(void);
    void func_ov075_02150cec(void);
    void func_ov075_02151134(void);
    void func_ov075_02151148(void);
    void func_ov075_0215115c(void);
    void func_ov075_02151390(void);
    void func_ov075_021513fc(void);
    void func_ov075_02151470(void);
    void func_ov075_0215152c(void);
    void func_ov075_021515c8(void);
    void func_ov075_02151634(void);
    void func_ov075_021516b4(void);
    void func_ov075_0215179c(void);
    void func_ov075_0215186c(void);
    void func_ov075_02151990(void);
    void func_ov075_02151bb0(void);
    void func_ov075_02151c34(void);
    void func_ov075_02151d70(void);
    void func_ov075_02151f20(void);
    void func_ov075_02152360(void);
    void func_ov075_021523cc(void);
    void func_ov075_021527d4(void);
    void func_ov075_02152858(void);
    void func_ov075_021528ac(void);
    void func_ov075_02152a8c(void);
    void func_ov075_02152b1c(void);
    void func_ov075_02152b58(void);
    void func_ov075_02152c50(void);
    void func_ov075_02152df4(void);
    void func_ov075_02152ef4(void);
    void func_ov075_02153098(void);
    void func_ov075_02153198(void);
    void func_ov075_0215333c(void);
    void func_ov075_021533cc(void);
    void func_ov075_02153490(void);
    void func_ov075_021534b4(void);
    void func_ov075_021534d8(void);
    void func_ov075_021534fc(void);
    void func_ov075_02153538(void);
    void func_ov075_021536c8(void);
    void func_ov075_02153798(void);
    void func_ov075_021537a4(void);
    void func_ov075_02153824(void);
    void func_ov075_02153880(void);
    void func_ov075_021538a0(void);
    void func_ov075_02153904(void);
    void func_ov075_02153984(void);
    void func_ov075_02153aec(void);
    void func_ov075_02153bb0(void);
    void func_ov075_02153bf0(void);
    void func_ov075_02153e20(void);
    void func_ov075_02153ed8(void);
    void func_ov075_02153f14(void);
    void func_ov075_02153fe0(void);
    void func_ov075_02154004(void);
    void func_ov075_02154064(void);
    void func_ov075_02154088(void);
    void func_ov075_021540b4(void);
    void func_ov075_021540d0(void);
    void func_ov075_021540ec(void);
    void func_ov075_02154100(void);
    void func_ov075_02154114(void);
    void func_ov075_02154160(void);
};

class ActorTypeUnkMRDO : public ActorType {
public:
    static ActorTypeUnkMRDO gInstance;

    /* 00 (base) */

    ActorTypeUnkMRDO();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMRDO *GetInstance();
};
