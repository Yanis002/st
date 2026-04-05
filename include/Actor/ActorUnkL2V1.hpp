//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkL2V1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkL2V1();

    /* 4C */ virtual ~ActorUnkL2V1() override;

    void func_ov044_0212c1d8(void);
    void func_ov044_0212c200(void);
    void func_ov044_0212c34c(void);
    void func_ov044_0212c360(void);
    void func_ov044_0212c440(void);
    void func_ov044_0212c464(void);
    void func_ov044_0212c54c(void);
    void func_ov044_0212c560(void);
    void func_ov044_0212c594(void);
    void func_ov044_0212c5a4(void);
    void func_ov044_0212c5ac(void);
    void func_ov044_0212c5c8(void);
    void func_ov044_0212c5f8(void);
    void func_ov044_0212c630(void);
};

class ActorTypeUnkL2V1 : public ActorType {
public:
    static ActorTypeUnkL2V1 gInstance;

    /* 00 (base) */

    ActorTypeUnkL2V1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkL2V1 *GetInstance();
};
