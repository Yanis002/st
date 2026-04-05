//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOLDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkOLDS();

    /* 4C */ virtual ~ActorUnkOLDS() override;

    void func_ov040_0212cce0(void);
    void func_ov040_0212cd60(void);
    void func_ov040_0212cd8c(void);
    void func_ov040_0212cee4(void);
    void func_ov040_0212cefc(void);
    void func_ov040_0212cf34(void);
    void func_ov040_0212cf5c(void);
    void func_ov040_0212cf74(void);
    void func_ov040_0212cfac(void);
    void func_ov040_0212cfb8(void);
    void func_ov040_0212cfd4(void);
    void func_ov040_0212d040(void);
    void func_ov040_0212d0b0(void);
    void func_ov040_0212d0d8(void);
    void func_ov040_0212d108(void);
};

class ActorTypeUnkOLDS : public ActorType {
public:
    static ActorTypeUnkOLDS gInstance;

    /* 00 (base) */

    ActorTypeUnkOLDS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkOLDS *GetInstance();
};
