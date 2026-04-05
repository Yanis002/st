//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMTWP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMTWP();

    /* 4C */ virtual ~ActorUnkMTWP() override;

    void func_ov092_0216f6b8(void);
    void func_ov092_0216f704(void);
    void func_ov092_0216f7dc(void);
    void func_ov092_0216f820(void);
    void func_ov092_0216f874(void);
    void func_ov092_0216f8cc(void);
    void func_ov092_0216f8ec(void);
    void func_ov092_0216f90c(void);
    void func_ov092_0216f944(void);
    void func_ov092_0216f984(void);
    void func_ov092_0216fce0(void);
    void func_ov092_0216fd24(void);
    void func_ov092_0217006c(void);
    void func_ov092_021700bc(void);
    void func_ov092_021700e4(void);
    void func_ov092_02170118(void);
    void func_ov092_02170230(void);
    void func_ov092_02170248(void);
    void func_ov092_02170288(void);
    void func_ov092_021702d0(void);
};

class ActorTypeUnkMTWP : public ActorType {
public:
    static ActorTypeUnkMTWP gInstance;

    /* 00 (base) */

    ActorTypeUnkMTWP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMTWP *GetInstance();
};
