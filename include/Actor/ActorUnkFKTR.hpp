//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFKTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFKTR();

    /* 4C */ virtual ~ActorUnkFKTR() override;

    void func_ov027_021450d8(void);
    void func_ov027_02145144(void);
    void func_ov027_02145154(void);
    void func_ov027_02145358(void);
    void func_ov027_02145398(void);
    void func_ov027_021453ac(void);
    void func_ov027_02145400(void);
    void func_ov027_02145414(void);
    void func_ov027_02145500(void);
    void func_ov027_021455f4(void);
    void func_ov027_02145644(void);
    void func_ov027_02145768(void);
    void func_ov027_02145788(void);
    void func_ov027_021457a8(void);
    void func_ov027_021458ec(void);
    void func_ov027_02145a34(void);
    void func_ov027_02145a38(void);
    void func_ov027_02145d4c(void);
};

class ActorTypeUnkFKTR : public ActorType {
public:
    static ActorTypeUnkFKTR gInstance;

    /* 00 (base) */

    ActorTypeUnkFKTR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFKTR *GetInstance();
};
