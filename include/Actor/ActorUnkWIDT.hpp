//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWIDT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWIDT();

    /* 4C */ virtual ~ActorUnkWIDT() override;

    void func_ov084_0215c68c(void);
    void func_ov084_0215c6d4(void);
    void func_ov084_0215c780(void);
    void func_ov084_0215c7b4(void);
    void func_ov084_0215c910(void);
    void func_ov084_0215c924(void);
    void func_ov084_0215c9a8(void);
    void func_ov084_0215c9e4(void);
    void func_ov084_0215cac0(void);
    void func_ov084_0215caf4(void);
    void func_ov084_0215cb58(void);
    void func_ov084_0215cb74(void);
    void func_ov084_0215cc3c(void);
    void func_ov084_0215cc4c(void);
    void func_ov084_0215ccbc(void);
    void func_ov084_0215cd28(void);
    void func_ov084_0215cdd0(void);
    void func_ov084_0215ce90(void);
    void func_ov084_0215cf74(void);
    void func_ov084_0215cfac(void);
    void func_ov084_0215cff0(void);
    void func_ov084_0215d00c(void);
    void func_ov084_0215d044(void);
    void func_ov084_0215d084(void);
};

class ActorTypeUnkWIDT : public ActorType {
public:
    static ActorTypeUnkWIDT gInstance;

    /* 00 (base) */

    ActorTypeUnkWIDT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWIDT *GetInstance();
};
