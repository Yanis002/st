//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFR2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFR2();

    /* 4C */ virtual ~ActorUnkEFR2() override;

    void func_ov094_02170728(void);
    void func_ov094_02170758(void);
    void func_ov094_02170778(void);
    void func_ov094_02170814(void);
    void func_ov094_02170830(void);
    void func_ov094_02170860(void);
    void func_ov094_02170898(void);
};

class ActorTypeUnkEFR2 : public ActorType {
public:
    static ActorTypeUnkEFR2 gInstance;

    /* 00 (base) */

    ActorTypeUnkEFR2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFR2 *GetInstance();
};
