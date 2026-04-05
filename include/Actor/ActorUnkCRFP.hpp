//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCRFP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCRFP();

    /* 4C */ virtual ~ActorUnkCRFP() override;

    void func_ov040_0212b354(void);
    void func_ov040_0212b3c8(void);
    void func_ov040_0212b3e8(void);
    void func_ov040_0212b4dc(void);
    void func_ov040_0212b5ec(void);
    void func_ov040_0212b6fc(void);
    void func_ov040_0212b710(void);
    void func_ov040_0212b7f4(void);
    void func_ov040_0212b800(void);
    void func_ov040_0212bab4(void);
    void func_ov040_0212bb34(void);
    void func_ov040_0212bb54(void);
    void func_ov040_0212bba8(void);
    void func_ov040_0212bd40(void);
    void func_ov040_0212bd90(void);
    void func_ov040_0212bdd0(void);
    void func_ov040_0212be1c(void);
    void func_ov040_0212bfd8(void);
    void func_ov040_0212bfe0(void);
    void func_ov040_0212c078(void);
    void func_ov040_0212c118(void);
    void func_ov040_0212c154(void);
    void func_ov040_0212c158(void);
    void func_ov040_0212c160(void);
    void func_ov040_0212c188(void);
    void func_ov040_0212c194(void);
    void func_ov040_0212c1d8(void);
    void func_ov040_0212c214(void);
    void func_ov040_0212c220(void);
    void func_ov040_0212c22c(void);
    void func_ov040_0212c238(void);
    void func_ov040_0212c2dc(void);
    void func_ov040_0212c2e8(void);
    void func_ov040_0212c36c(void);
    void func_ov040_0212c558(void);
    void func_ov040_0212c578(void);
    void func_ov040_0212c590(void);
    void func_ov040_0212c5ac(void);
    void func_ov040_0212c610(void);
    void func_ov040_0212c62c(void);
    void func_ov040_0212c654(void);
    void func_ov040_0212c684(void);
    void func_ov040_0212c698(void);
    void func_ov040_0212c6ac(void);
    void func_ov040_0212c6c0(void);
    void func_ov040_0212c6d4(void);
    void func_ov040_0212c6e8(void);
    void func_ov040_0212c6fc(void);
    void func_ov040_0212c710(void);
    void func_ov040_0212c724(void);
    void func_ov040_0212c738(void);
    void func_ov040_0212c74c(void);
    void func_ov040_0212c760(void);
    void func_ov040_0212c774(void);
};

class ActorTypeUnkCRFP : public ActorType {
public:
    static ActorTypeUnkCRFP gInstance;

    /* 00 (base) */

    ActorTypeUnkCRFP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCRFP *GetInstance();
};
