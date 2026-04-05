//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBROW : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBROW();

    /* 4C */ virtual ~ActorUnkBROW() override;

    void func_ov070_02140088(void);
    void func_ov070_021400e8(void);
    void func_ov070_02140108(void);
    void func_ov070_0214011c(void);
    void func_ov070_02140138(void);
    void func_ov070_02140180(void);
    void func_ov070_02140238(void);
    void func_ov070_0214030c(void);
    void func_ov070_02140400(void);
    void func_ov070_02140470(void);
    void func_ov070_021406bc(void);
    void func_ov070_021407a4(void);
    void func_ov070_02140844(void);
    void func_ov070_02140858(void);
    void func_ov070_02140894(void);
    void func_ov070_021408b4(void);
    void func_ov070_021408d0(void);
    void func_ov070_02140944(void);
    void func_ov070_02140994(void);
    void func_ov070_021409bc(void);
    void func_ov070_021409ec(void);
    void func_ov070_02140a00(void);
    void func_ov070_02140a1c(void);
    void func_ov070_02140a28(void);
    void func_ov070_02140a3c(void);
    void func_ov070_02140a44(void);
    void func_ov070_02140a5c(void);
    void func_ov070_02140a7c(void);
    void func_ov070_02140ad8(void);
    void func_ov070_02140b38(void);
    void func_ov070_02140bf8(void);
    void func_ov070_02140c54(void);
    void func_ov070_02140d10(void);
    void func_ov070_02140d4c(void);
    void func_ov070_02140e58(void);
    void func_ov070_02140e70(void);
    void func_ov070_02140e88(void);
    void func_ov070_02140eb4(void);
    void func_ov070_02140ee0(void);
    void func_ov070_02140f0c(void);
    void func_ov070_02140f34(void);
    void func_ov070_02140f40(void);
    void func_ov070_02140f4c(void);
    void func_ov070_02140f5c(void);
    void func_ov070_02141054(void);
    void func_ov070_02141264(void);
};

class ActorTypeUnkBROW : public ActorType {
public:
    static ActorTypeUnkBROW gInstance;

    /* 00 (base) */

    ActorTypeUnkBROW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBROW *GetInstance();
};
