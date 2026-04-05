//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKOCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkKOCH();

    /* 4C */ virtual ~ActorUnkKOCH() override;

    void func_ov058_021423b0(void);
    void func_ov058_021423d8(void);
    void func_ov058_02142440(void);
    void func_ov058_02142448(void);
    void func_ov058_021424a0(void);
    void func_ov058_021425ac(void);
    void func_ov058_021425dc(void);
    void func_ov058_02142614(void);
    void func_ov058_021426b8(void);
    void func_ov058_02142710(void);
    void func_ov058_0214274c(void);
    void func_ov058_0214278c(void);
    void func_ov058_021427b4(void);
    void func_ov058_021427c4(void);
    void func_ov058_021427ec(void);
    void func_ov058_0214283c(void);
    void func_ov058_0214286c(void);
    void func_ov058_021428c8(void);
    void func_ov058_02142928(void);
    void func_ov058_0214292c(void);
    void func_ov058_02142934(void);
    void func_ov058_02142944(void);
    void func_ov058_02142958(void);
    void func_ov058_02142974(void);
    void func_ov058_02142998(void);
    void func_ov058_021429ac(void);
    void func_ov058_021429bc(void);
};

class ActorTypeUnkKOCH : public ActorType {
public:
    static ActorTypeUnkKOCH gInstance;

    /* 00 (base) */

    ActorTypeUnkKOCH();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkKOCH *GetInstance();
};
