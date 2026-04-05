//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMS4();

    /* 4C */ virtual ~ActorUnkRMS4() override;

    void func_ov065_02159250(void);
    void func_ov065_02159278(void);
    void func_ov065_02159298(void);
    void func_ov065_021592e8(void);
    void func_ov065_02159308(void);
    void func_ov065_02159330(void);
};

class ActorTypeUnkRMS4 : public ActorType {
public:
    static ActorTypeUnkRMS4 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMS4();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMS4 *GetInstance();
};
