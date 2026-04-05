//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSWDS();

    /* 4C */ virtual ~ActorUnkSWDS() override;

    void func_ov070_021439f8(void);
    void func_ov070_02143a20(void);
    void func_ov070_02143a50(void);
    void func_ov070_02143adc(void);
    void func_ov070_02143bd4(void);
    void func_ov070_02143be8(void);
    void func_ov070_02143c48(void);
    void func_ov070_02143c5c(void);
    void func_ov070_02143c78(void);
};

class ActorTypeUnkSWDS : public ActorType {
public:
    static ActorTypeUnkSWDS gInstance;

    /* 00 (base) */

    ActorTypeUnkSWDS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSWDS *GetInstance();
};
