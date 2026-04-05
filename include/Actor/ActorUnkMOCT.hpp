//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMOCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMOCT();

    /* 4C */ virtual ~ActorUnkMOCT() override;

    void func_ov062_0215a540(void);
    void func_ov062_0215a568(void);
    void func_ov062_0215a588(void);
    void func_ov062_0215a590(void);
    void func_ov062_0215a5cc(void);
    void func_ov062_0215a634(void);
    void func_ov062_0215a670(void);
    void func_ov062_0215a6ec(void);
    void func_ov062_0215a700(void);
    void func_ov062_0215a71c(void);
};

class ActorTypeUnkMOCT : public ActorType {
public:
    static ActorTypeUnkMOCT gInstance;

    /* 00 (base) */

    ActorTypeUnkMOCT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMOCT *GetInstance();
};
