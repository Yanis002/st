//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSSFC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSSFC();

    /* 4C */ virtual ~ActorUnkSSFC() override;

    void func_ov079_02152b84(void);
    void func_ov079_02152bac(void);
    void func_ov079_02152be8(void);
    void func_ov079_02152ccc(void);
    void func_ov079_02152e00(void);
    void func_ov079_02152e4c(void);
    void func_ov079_02152ed4(void);
    void func_ov079_02152f24(void);
    void func_ov079_02152f38(void);
    void func_ov079_02152f54(void);
};

class ActorTypeUnkSSFC : public ActorType {
public:
    static ActorTypeUnkSSFC gInstance;

    /* 00 (base) */

    ActorTypeUnkSSFC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSSFC *GetInstance();
};
