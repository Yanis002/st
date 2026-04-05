//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMAJ : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMAJ();

    /* 4C */ virtual ~ActorUnkRMAJ() override;

    void func_ov068_02157ed0(void);
    void func_ov068_02157ef8(void);
    void func_ov068_02157f18(void);
    void func_ov068_02157f38(void);
    void func_ov068_02157f54(void);
    void func_ov068_02157f58(void);
    void func_ov068_02157f5c(void);
    void func_ov068_02157f70(void);
    void func_ov068_02157f8c(void);
};

class ActorTypeUnkRMAJ : public ActorType {
public:
    static ActorTypeUnkRMAJ gInstance;

    /* 00 (base) */

    ActorTypeUnkRMAJ();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMAJ *GetInstance();
};
