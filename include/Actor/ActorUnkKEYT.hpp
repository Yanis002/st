//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKEYT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkKEYT();

    /* 4C */ virtual ~ActorUnkKEYT() override;

    void func_ov041_02123ba0(void);
    void func_ov041_02123c04(void);
    void func_ov041_02123c7c(void);
    void func_ov041_02123c90(void);
    void func_ov041_02123cc0(void);
    void func_ov041_02123cf8(void);
    void func_ov041_02123d40(void);
    void func_ov041_02123d88(void);
    void func_ov041_02123eb8(void);
    void func_ov041_02123ff8(void);
    void func_ov041_02124094(void);
    void func_ov041_021240c0(void);
    void func_ov041_02124164(void);
    void func_ov041_02124178(void);
};

class ActorTypeUnkKEYT : public ActorType {
public:
    static ActorTypeUnkKEYT gInstance;

    /* 00 (base) */

    ActorTypeUnkKEYT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkKEYT *GetInstance();
};
