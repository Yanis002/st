//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOLC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSOLC();

    /* 4C */ virtual ~ActorUnkSOLC() override;

    void func_ov060_02157fe4(void);
    void func_ov060_0215803c(void);
    void func_ov060_021581b4(void);
    void func_ov060_021581c8(void);
    void func_ov060_021581f8(void);
    void func_ov060_02158230(void);
    void func_ov060_021582c0(void);
    void func_ov060_021582d8(void);
    void func_ov060_02158400(void);
    void func_ov060_0215840c(void);
    void func_ov060_02158478(void);
    void func_ov060_021586f0(void);
    void func_ov060_0215871c(void);
    void func_ov060_02158760(void);
    void func_ov060_021587b8(void);
    void func_ov060_021587fc(void);
    void func_ov060_021588c0(void);
    void func_ov060_021589e8(void);
    void func_ov060_02158ad0(void);
    void func_ov060_02158b88(void);
    void func_ov060_02158c78(void);
    void func_ov060_02158cf4(void);
    void func_ov060_02158d0c(void);
    void func_ov060_02158d84(void);
    void func_ov060_02158da4(void);
    void func_ov060_02158e18(void);
    void func_ov060_02158e5c(void);
    void func_ov060_02158efc(void);
    void func_ov060_02158f14(void);
    void func_ov060_02158f44(void);
    void func_ov060_02159040(void);
    void func_ov060_021590d8(void);
    void func_ov060_021591b4(void);
    void func_ov060_021591d8(void);
    void func_ov060_02159204(void);
    void func_ov060_02159220(void);
    void func_ov060_02159248(void);
    void func_ov060_02159268(void);
    void func_ov060_0215927c(void);
    void func_ov060_02159290(void);
};

class ActorTypeUnkSOLC : public ActorType {
public:
    static ActorTypeUnkSOLC gInstance;

    /* 00 (base) */

    ActorTypeUnkSOLC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSOLC *GetInstance();
};
