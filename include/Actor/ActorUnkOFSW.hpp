//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOFSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkOFSW();

    /* 4C */ virtual ~ActorUnkOFSW() override;

    void func_ov077_0215aafc(void);
    void func_ov077_0215ab24(void);
    void func_ov077_0215ab4c(void);
    void func_ov077_0215ab6c(void);
    void func_ov077_0215abc4(void);
    void func_ov077_0215abd8(void);
    void func_ov077_0215abec(void);
};

class ActorTypeUnkOFSW : public ActorType {
public:
    static ActorTypeUnkOFSW gInstance;

    /* 00 (base) */

    ActorTypeUnkOFSW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkOFSW *GetInstance();
};
