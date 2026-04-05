//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBSFC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBSFC();

    /* 4C */ virtual ~ActorUnkBSFC() override;

    void func_ov034_02119354(void);
    void func_ov034_021193b0(void);
    void func_ov034_02119420(void);
    void func_ov034_021195a8(void);
    void func_ov034_021195bc(void);
    void func_ov034_02119700(void);
    void func_ov034_02119970(void);
    void func_ov034_02119984(void);
    void func_ov034_02119b24(void);
    void func_ov034_02119c00(void);
    void func_ov034_02119c94(void);
    void func_ov034_02119d54(void);
    void func_ov034_02119d78(void);
    void func_ov034_02119d88(void);
    void func_ov034_02119d90(void);
    void func_ov034_02119d9c(void);
    void func_ov034_02119db8(void);
    void func_ov034_02119e20(void);
    void func_ov034_02119e90(void);
};

class ActorTypeUnkBSFC : public ActorType {
public:
    static ActorTypeUnkBSFC gInstance;

    /* 00 (base) */

    ActorTypeUnkBSFC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBSFC *GetInstance();
};
