//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYKEP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkYKEP();

    /* 4C */ virtual ~ActorUnkYKEP() override;

    void func_ov040_0212c908(void);
    void func_ov040_0212c974(void);
    void func_ov040_0212c9f8(void);
    void func_ov040_0212cb54(void);
    void func_ov040_0212cbe8(void);
    void func_ov040_0212cc0c(void);
    void func_ov040_0212cc3c(void);
    void func_ov040_0212cc74(void);
    void func_ov040_0212cc88(void);
    void func_ov040_0212cc9c(void);
};

class ActorTypeUnkYKEP : public ActorType {
public:
    static ActorTypeUnkYKEP gInstance;

    /* 00 (base) */

    ActorTypeUnkYKEP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkYKEP *GetInstance();
};
