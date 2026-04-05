//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTHER : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTHER();

    /* 4C */ virtual ~ActorUnkTHER() override;

    void func_ov026_021110d0(void);
    void func_ov026_02111108(void);
    void func_ov026_0211117c(void);
    void func_ov026_021111a4(void);
    void func_ov026_021111fc(void);
    void func_ov026_02111280(void);
    void func_ov026_021112f0(void);
    void func_ov026_0211130c(void);
    void func_ov026_02111320(void);
};

class ActorTypeUnkTHER : public ActorType {
public:
    static ActorTypeUnkTHER gInstance;

    /* 00 (base) */

    ActorTypeUnkTHER();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTHER *GetInstance();
};
