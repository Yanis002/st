//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMDO();

    /* 4C */ virtual ~ActorUnkRMDO() override;

    void func_ov088_02171a70(void);
    void func_ov088_02171a98(void);
    void func_ov088_02171ab8(void);
    void func_ov088_02171ad8(void);
    void func_ov088_02171adc(void);
    void func_ov088_02171ae0(void);
    void func_ov088_02171af4(void);
    void func_ov088_02171af8(void);
    void func_ov088_02171b00(void);
    void func_ov088_02171b20(void);
    void func_ov088_02171b48(void);
};

class ActorTypeUnkRMDO : public ActorType {
public:
    static ActorTypeUnkRMDO gInstance;

    /* 00 (base) */

    ActorTypeUnkRMDO();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMDO *GetInstance();
};
