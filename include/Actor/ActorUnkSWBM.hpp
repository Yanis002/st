//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWBM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSWBM();

    /* 4C */ virtual ~ActorUnkSWBM() override;

    void func_ov031_020e6b64(void);
    void func_ov031_020e6ba8(void);
    void func_ov031_020e6c60(void);
    void func_ov031_020e6c74(void);
    void func_ov031_020e6c88(void);
    void func_ov031_020e6d48(void);
    void func_ov031_020e6d80(void);
    void func_ov031_020e6e84(void);
    void func_ov031_020e6ef8(void);
    void func_ov031_020e7160(void);
    void func_ov031_020e718c(void);
    void func_ov031_020e7294(void);
    void func_ov031_020e72d4(void);
    void func_ov031_020e72f0(void);
    void func_ov031_020e730c(void);
    void func_ov031_020e7334(void);
    void func_ov031_020e7364(void);
    void func_ov031_020e7378(void);
    void func_ov031_020e73ec(void);
    void func_ov031_020e740c(void);
    void func_ov031_020e7434(void);
    void func_ov031_020e7454(void);
    void func_ov031_020e748c(void);
    void func_ov031_020e74a8(void);
    void func_ov031_020e74cc(void);
    void func_ov031_020e755c(void);
    void func_ov031_020e75fc(void);
    void func_ov031_020e7680(void);
    void func_ov031_020e7788(void);
    void func_ov031_020e77b4(void);
    void func_ov031_020e77b8(void);
    void func_ov031_020e784c(void);
    void func_ov031_020e79bc(void);
    void func_ov031_020e7b04(void);
    void func_ov031_020e7b9c(void);
    void func_ov031_020e7e64(void);
    void func_ov031_020e7f50(void);
    void func_ov031_020e812c(void);
    void func_ov031_020e81d4(void);
    void func_ov031_020e8254(void);
    void func_ov031_020e82a8(void);
    void func_ov031_020e82d8(void);
    void func_ov031_020e82dc(void);
    void func_ov031_020e836c(void);
    void func_ov031_020e8388(void);
    void func_ov031_020e8414(void);
    void func_ov031_020e8458(void);
    void func_ov031_020e848c(void);
    void func_ov031_020e84b4(void);
    void func_ov031_020e84d8(void);
    void func_ov031_020e8530(void);
    void func_ov031_020e8630(void);
    void func_ov031_020e873c(void);
    void func_ov031_020e8748(void);
};

class ActorTypeUnkSWBM : public ActorType {
public:
    static ActorTypeUnkSWBM gInstance;

    /* 00 (base) */

    ActorTypeUnkSWBM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSWBM *GetInstance();
};
