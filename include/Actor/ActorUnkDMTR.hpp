//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMTR();

    /* 4C */ virtual ~ActorUnkDMTR() override;

    void func_ov088_0216c6f8(void);
    void func_ov088_0216c720(void);
    void func_ov088_0216c74c(void);
    void func_ov088_0216c818(void);
    void func_ov088_0216cb08(void);
    void func_ov088_0216cb78(void);
    void func_ov088_0216cbf0(void);
    void func_ov088_0216ccc0(void);
};

class ActorTypeUnkDMTR : public ActorType {
public:
    static ActorTypeUnkDMTR gInstance;

    /* 00 (base) */

    ActorTypeUnkDMTR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMTR *GetInstance();
};
