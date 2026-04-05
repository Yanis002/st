//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFBSC();

    /* 4C */ virtual ~ActorUnkFBSC() override;

    void func_ov058_0214a9b8(void);
    void func_ov058_0214a9e0(void);
    void func_ov058_0214aa38(void);
    void func_ov058_0214aa74(void);
    void func_ov058_0214aab8(void);
    void func_ov058_0214aacc(void);
    void func_ov058_0214ab04(void);
    void func_ov058_0214ab34(void);
    void func_ov058_0214ab68(void);
    void func_ov058_0214ab78(void);
    void func_ov058_0214ab8c(void);
    void func_ov058_0214aba0(void);
    void func_ov058_0214abb0(void);
};

class ActorTypeUnkFBSC : public ActorType {
public:
    static ActorTypeUnkFBSC gInstance;

    /* 00 (base) */

    ActorTypeUnkFBSC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFBSC *GetInstance();
};
