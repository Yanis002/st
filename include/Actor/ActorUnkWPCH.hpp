//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWPCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWPCH();

    /* 4C */ virtual ~ActorUnkWPCH() override;

    void func_ov058_0214d498(void);
    void func_ov058_0214d4c0(void);
    void func_ov058_0214d500(void);
    void func_ov058_0214d508(void);
    void func_ov058_0214d540(void);
    void func_ov058_0214d558(void);
    void func_ov058_0214d570(void);
    void func_ov058_0214d684(void);
    void func_ov058_0214d694(void);
    void func_ov058_0214d6a8(void);
    void func_ov058_0214d6c4(void);
    void func_ov058_0214d6e8(void);
    void func_ov058_0214d6fc(void);
    void func_ov058_0214d70c(void);
};

class ActorTypeUnkWPCH : public ActorType {
public:
    static ActorTypeUnkWPCH gInstance;

    /* 00 (base) */

    ActorTypeUnkWPCH();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWPCH *GetInstance();
};
