//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMBCC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMBCC();

    /* 4C */ virtual ~ActorUnkMBCC() override;

    void func_ov092_02173618(void);
    void func_ov092_0217368c(void);
    void func_ov092_02173728(void);
    void func_ov092_02173740(void);
    void func_ov092_0217384c(void);
    void func_ov092_02173900(void);
    void func_ov092_02173914(void);
    void func_ov092_02173934(void);
    void func_ov092_0217395c(void);
    void func_ov092_02173a38(void);
    void func_ov092_02173d24(void);
    void func_ov092_02173dfc(void);
    void func_ov092_02173f94(void);
    void func_ov092_02173f98(void);
    void func_ov092_02173fbc(void);
    void func_ov092_02174030(void);
    void func_ov092_02174084(void);
    void func_ov092_021740c4(void);
    void func_ov092_02174194(void);
    void func_ov092_021742a0(void);
    void func_ov092_02174364(void);
    void func_ov092_02174488(void);
    void func_ov092_02174494(void);
    void func_ov092_021744d4(void);
    void func_ov092_021744f0(void);
};

class ActorTypeUnkMBCC : public ActorType {
public:
    static ActorTypeUnkMBCC gInstance;

    /* 00 (base) */

    ActorTypeUnkMBCC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMBCC *GetInstance();
};
