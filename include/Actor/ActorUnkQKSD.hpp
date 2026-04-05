//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkQKSD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkQKSD();

    /* 4C */ virtual ~ActorUnkQKSD() override;

    void func_ov086_0215bb64(void);
    void func_ov086_0215bb8c(void);
    void func_ov086_0215bc50(void);
    void func_ov086_0215bc64(void);
    void func_ov086_0215bcc8(void);
    void func_ov086_0215bcdc(void);
    void func_ov086_0215bcf0(void);
    void func_ov086_0215bd10(void);
    void func_ov086_0215bd2c(void);
    void func_ov086_0215bd54(void);
    void func_ov086_0215bd84(void);
};

class ActorTypeUnkQKSD : public ActorType {
public:
    static ActorTypeUnkQKSD gInstance;

    /* 00 (base) */

    ActorTypeUnkQKSD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkQKSD *GetInstance();
};
