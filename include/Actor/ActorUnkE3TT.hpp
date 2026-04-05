//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3TT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkE3TT();

    /* 4C */ virtual ~ActorUnkE3TT() override;

    void func_ov090_0217114c(void);
    void func_ov090_02171174(void);
    void func_ov090_021711a4(void);
    void func_ov090_021711d4(void);
    void func_ov090_02171404(void);
    void func_ov090_02171418(void);
    void func_ov090_02171434(void);
};

class ActorTypeUnkE3TT : public ActorType {
public:
    static ActorTypeUnkE3TT gInstance;

    /* 00 (base) */

    ActorTypeUnkE3TT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkE3TT *GetInstance();
};
