//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkJOLN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkJOLN();

    /* 4C */ virtual ~ActorUnkJOLN() override;

    void func_ov061_02158edc(void);
    void func_ov061_02158f30(void);
    void func_ov061_02159048(void);
    void func_ov061_0215906c(void);
    void func_ov061_02159078(void);
    void func_ov061_02159080(void);
    void func_ov061_02159134(void);
    void func_ov061_0215915c(void);
    void func_ov061_0215918c(void);
};

class ActorTypeUnkJOLN : public ActorType {
public:
    static ActorTypeUnkJOLN gInstance;

    /* 00 (base) */

    ActorTypeUnkJOLN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkJOLN *GetInstance();
};
