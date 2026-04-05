//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGRCF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGRCF();

    /* 4C */ virtual ~ActorUnkGRCF() override;

    void func_ov038_0211ec94(void);
    void func_ov038_0211ecbc(void);
    void func_ov038_0211ecdc(void);
    void func_ov038_0211ed38(void);
    void func_ov038_0211ee34(void);
    void func_ov038_0211ee48(void);
    void func_ov038_0211ee64(void);
    void func_ov038_0211ee78(void);
    void func_ov038_0211ee84(void);
    void func_ov038_0211eea8(void);
    void func_ov038_0211eedc(void);
    void func_ov038_0211ef08(void);
    void func_ov038_0211ef88(void);
    void func_ov038_0211efec(void);
    void func_ov038_0211f03c(void);
    void func_ov038_0211f044(void);
    void func_ov038_0211f064(void);
    void func_ov038_0211f08c(void);
};

class ActorTypeUnkGRCF : public ActorType {
public:
    static ActorTypeUnkGRCF gInstance;

    /* 00 (base) */

    ActorTypeUnkGRCF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGRCF *GetInstance();
};
