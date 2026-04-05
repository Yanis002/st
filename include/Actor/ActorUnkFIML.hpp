//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFIML : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFIML();

    /* 4C */ virtual ~ActorUnkFIML() override;

    void func_ov035_0211bbec(void);
    void func_ov035_0211bc44(void);
    void func_ov035_0211bdf8(void);
    void func_ov035_0211be0c(void);
    void func_ov035_0211bf40(void);
    void func_ov035_0211bf74(void);
    void func_ov035_0211bfe8(void);
    void func_ov035_0211c55c(void);
    void func_ov035_0211c594(void);
    void func_ov035_0211c5c4(void);
    void func_ov035_0211c5e8(void);
    void func_ov035_0211c68c(void);
    void func_ov035_0211c754(void);
    void func_ov035_0211c768(void);
    void func_ov035_0211c780(void);
    void func_ov035_0211c8f0(void);
    void func_ov035_0211cc70(void);
    void func_ov035_0211ccd8(void);
    void func_ov035_0211cd0c(void);
    void func_ov035_0211cdd0(void);
    void func_ov035_0211d128(void);
    void func_ov035_0211d1a8(void);
    void func_ov035_0211d270(void);
    void func_ov035_0211d2d8(void);
    void func_ov035_0211d37c(void);
    void func_ov035_0211d430(void);
    void func_ov035_0211d5a0(void);
    void func_ov035_0211d620(void);
    void func_ov035_0211d7b8(void);
    void func_ov035_0211d7f4(void);
    void func_ov035_0211d814(void);
    void func_ov035_0211d870(void);
    void func_ov035_0211d8fc(void);
    void func_ov035_0211db34(void);
    void func_ov035_0211db48(void);
    void func_ov035_0211db74(void);
    void func_ov035_0211dc10(void);
    void func_ov035_0211dc68(void);
    void func_ov035_0211dcc4(void);
    void func_ov035_0211dd10(void);
    void func_ov035_0211dd2c(void);
    void func_ov035_0211e050(void);
    void func_ov035_0211e05c(void);
    void func_ov035_0211e370(void);
    void func_ov035_0211e41c(void);
    void func_ov035_0211e438(void);
    void func_ov035_0211e460(void);
    void func_ov035_0211e490(void);
};

class ActorTypeUnkFIML : public ActorType {
public:
    static ActorTypeUnkFIML gInstance;

    /* 00 (base) */

    ActorTypeUnkFIML();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFIML *GetInstance();
};
