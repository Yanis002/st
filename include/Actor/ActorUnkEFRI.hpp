//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFRI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFRI();

    /* 4C */ virtual ~ActorUnkEFRI() override;

    void func_ov098_02181dbc(void);
    void func_ov098_02181e1c(void);
    void func_ov098_02181e3c(void);
    void func_ov098_02181ed8(void);
    void func_ov098_02181ef4(void);
    void func_ov098_02181f24(void);
    void func_ov098_02181f5c(void);
};

class ActorTypeUnkEFRI : public ActorType {
public:
    static ActorTypeUnkEFRI gInstance;

    /* 00 (base) */

    ActorTypeUnkEFRI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFRI *GetInstance();
};
