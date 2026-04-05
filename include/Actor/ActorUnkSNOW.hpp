//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSNOW : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSNOW();

    /* 4C */ virtual ~ActorUnkSNOW() override;

    void func_ov094_0216daf0(void);
    void func_ov094_0216db18(void);
    void func_ov094_0216db6c(void);
    void func_ov094_0216dc1c(void);
    void func_ov094_0216dc4c(void);
    void func_ov094_0216dd08(void);
    void func_ov094_0216dd1c(void);
    void func_ov094_0216dd30(void);
    void func_ov094_0216dd98(void);
    void func_ov094_0216dda8(void);
    void func_ov094_0216de0c(void);
    void func_ov094_0216de2c(void);
    void func_ov094_0216de54(void);
};

class ActorTypeUnkSNOW : public ActorType {
public:
    static ActorTypeUnkSNOW gInstance;

    /* 00 (base) */

    ActorTypeUnkSNOW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSNOW *GetInstance();
};
