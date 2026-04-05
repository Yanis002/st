//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITBM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkITBM();

    /* 4C */ virtual ~ActorUnkITBM() override;

    void func_ov031_020e45d4(void);
    void func_ov031_020e45fc(void);
    void func_ov031_020e4620(void);
    void func_ov031_020e4760(void);
    void func_ov031_020e4774(void);
    void func_ov031_020e4788(void);
    void func_ov031_020e4828(void);
    void func_ov031_020e48d0(void);
    void func_ov031_020e4994(void);
    void func_ov031_020e49b0(void);
    void func_ov031_020e4a20(void);
    void func_ov031_020e5034(void);
    void func_ov031_020e5220(void);
    void func_ov031_020e52a0(void);
    void func_ov031_020e5354(void);
    void func_ov031_020e53c8(void);
    void func_ov031_020e53e4(void);
    void func_ov031_020e5400(void);
    void func_ov031_020e544c(void);
    void func_ov031_020e5474(void);
    void func_ov031_020e5488(void);
    void func_ov031_020e54a4(void);
    void func_ov031_020e54d4(void);
    void func_ov031_020e5704(void);
    void func_ov031_020e5710(void);
    void func_ov031_020e572c(void);
    void func_ov031_020e5748(void);
    void func_ov031_020e575c(void);
    void func_ov031_020e5784(void);
    void func_ov031_020e5898(void);
};

class ActorTypeUnkITBM : public ActorType {
public:
    static ActorTypeUnkITBM gInstance;

    /* 00 (base) */

    ActorTypeUnkITBM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkITBM *GetInstance();
};
