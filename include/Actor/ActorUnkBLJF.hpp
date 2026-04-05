//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLJF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBLJF();

    /* 4C */ virtual ~ActorUnkBLJF() override;

    void func_ov029_02149cfc(void);
    void func_ov029_02149d6c(void);
    void func_ov029_02149dd0(void);
    void func_ov029_02149efc(void);
    void func_ov029_02149f5c(void);
    void func_ov029_02149f94(void);
    void func_ov029_02149fac(void);
    void func_ov029_0214a12c(void);
    void func_ov029_0214a258(void);
    void func_ov029_0214a348(void);
    void func_ov029_0214a358(void);
    void func_ov029_0214a37c(void);
    void func_ov029_0214a434(void);
    void func_ov029_0214a588(void);
    void func_ov029_0214a59c(void);
    void func_ov029_0214a644(void);
    void func_ov029_0214a7b8(void);
    void func_ov029_0214a7e0(void);
    void func_ov029_0214a9a0(void);
    void func_ov029_0214a9b4(void);
    void func_ov029_0214aa08(void);
    void func_ov029_0214aa38(void);
    void func_ov029_0214aa7c(void);
    void func_ov029_0214ac78(void);
    void func_ov029_0214ad44(void);
    void func_ov029_0214ad7c(void);
    void func_ov029_0214ada4(void);
    void func_ov029_0214aec0(void);
    void func_ov029_0214aec4(void);
    void func_ov029_0214aee0(void);
    void func_ov029_0214af20(void);
    void func_ov029_0214af68(void);
};

class ActorTypeUnkBLJF : public ActorType {
public:
    static ActorTypeUnkBLJF gInstance;

    /* 00 (base) */

    ActorTypeUnkBLJF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBLJF *GetInstance();
};
