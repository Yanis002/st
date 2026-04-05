//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMPK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMPK();

    /* 4C */ virtual ~ActorUnkDMPK() override;

    void func_ov088_02170db0(void);
    void func_ov088_02170dd8(void);
    void func_ov088_02170e68(void);
    void func_ov088_02170e7c(void);
    void func_ov088_02170fdc(void);
    void func_ov088_02171018(void);
    void func_ov088_02171020(void);
    void func_ov088_02171030(void);
    void func_ov088_02171044(void);
    void func_ov088_02171058(void);
    void func_ov088_02171098(void);
    void func_ov088_021710b8(void);
    void func_ov088_021710d8(void);
    void func_ov088_021710f4(void);
    void func_ov088_0217111c(void);
    void func_ov088_0217114c(void);
    void func_ov088_02171174(void);
    void func_ov088_02171194(void);
};

class ActorTypeUnkDMPK : public ActorType {
public:
    static ActorTypeUnkDMPK gInstance;

    /* 00 (base) */

    ActorTypeUnkDMPK();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMPK *GetInstance();
};
