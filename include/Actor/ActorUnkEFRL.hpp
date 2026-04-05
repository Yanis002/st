//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFRL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFRL();

    /* 4C */ virtual ~ActorUnkEFRL() override;

    void func_ov099_0218148c(void);
    void func_ov099_021814bc(void);
    void func_ov099_021814d0(void);
    void func_ov099_021815fc(void);
    void func_ov099_021816e8(void);
    void func_ov099_02181748(void);
    void func_ov099_0218175c(void);
    void func_ov099_021817b4(void);
    void func_ov099_021817ec(void);
    void func_ov099_0218181c(void);
    void func_ov099_02181840(void);
    void func_ov099_02181850(void);
    void func_ov099_02181858(void);
    void func_ov099_02181874(void);
};

class ActorTypeUnkEFRL : public ActorType {
public:
    static ActorTypeUnkEFRL gInstance;

    /* 00 (base) */

    ActorTypeUnkEFRL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFRL *GetInstance();
};
