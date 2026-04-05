//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYWIS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkYWIS();

    /* 4C */ virtual ~ActorUnkYWIS() override;

    void func_ov065_02159728(void);
    void func_ov065_02159750(void);
    void func_ov065_021597bc(void);
    void func_ov065_021597c4(void);
    void func_ov065_021597f4(void);
    void func_ov065_02159808(void);
    void func_ov065_02159810(void);
    void func_ov065_021598dc(void);
    void func_ov065_021598f0(void);
};

class ActorTypeUnkYWIS : public ActorType {
public:
    static ActorTypeUnkYWIS gInstance;

    /* 00 (base) */

    ActorTypeUnkYWIS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkYWIS *GetInstance();
};
