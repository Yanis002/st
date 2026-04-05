//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFTRN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFTRN();

    /* 4C */ virtual ~ActorUnkFTRN() override;

    void func_ov040_02123544(void);
    void func_ov040_02123584(void);
    void func_ov040_02123688(void);
    void func_ov040_0212369c(void);
    void func_ov040_021236b0(void);
    void func_ov040_021236c4(void);
    void func_ov040_021236d8(void);
    void func_ov040_021236ec(void);
    void func_ov040_021237d0(void);
    void func_ov040_021238bc(void);
    void func_ov040_02123924(void);
    void func_ov040_02123cd8(void);
    void func_ov040_02123d50(void);
    void func_ov040_02123e0c(void);
    void func_ov040_02123e4c(void);
    void func_ov040_02123e50(void);
    void func_ov040_02124004(void);
    void func_ov040_02124048(void);
    void func_ov040_021243e0(void);
    void func_ov040_021245b4(void);
    void func_ov040_02124e00(void);
    void func_ov040_02124e94(void);
    void func_ov040_021250cc(void);
    void func_ov040_021255b4(void);
    void func_ov040_0212564c(void);
    void func_ov040_021258d8(void);
    void func_ov040_02125920(void);
    void func_ov040_02125998(void);
    void func_ov040_021259cc(void);
    void func_ov040_02125a28(void);
    void func_ov040_02125b94(void);
    void func_ov040_02125c68(void);
    void func_ov040_02125d10(void);
    void func_ov040_02125dc0(void);
    void func_ov040_02125f70(void);
    void func_ov040_0212602c(void);
    void func_ov040_02126090(void);
    void func_ov040_021260dc(void);
    void func_ov040_021260fc(void);
    void func_ov040_02126144(void);
    void func_ov040_02126214(void);
    void func_ov040_02126344(void);
    void func_ov040_021263c4(void);
    void func_ov040_02126450(void);
    void func_ov040_02126554(void);
    void func_ov040_021266b0(void);
    void func_ov040_02126710(void);
    void func_ov040_021267e4(void);
    void func_ov040_021268a0(void);
    void func_ov040_02126938(void);
    void func_ov040_02126a70(void);
    void func_ov040_02126b00(void);
    void func_ov040_02126bb0(void);
    void func_ov040_02126d64(void);
    void func_ov040_02126e5c(void);
    void func_ov040_02127014(void);
    void func_ov040_021271ec(void);
    void func_ov040_0212723c(void);
    void func_ov040_02127274(void);
    void func_ov040_021272a4(void);
    void func_ov040_0212740c(void);
    void func_ov040_0212741c(void);
    void func_ov040_02127438(void);
    void func_ov040_0212744c(void);
    void func_ov040_02127464(void);
    void func_ov040_02127860(void);
    void func_ov040_02127880(void);
    void func_ov040_021279b8(void);
    void func_ov040_02127ad4(void);
    void func_ov040_02127b78(void);
    void func_ov040_02127cc4(void);
    void func_ov040_02127d48(void);
    void func_ov040_02127e14(void);
    void func_ov040_02127e3c(void);
    void func_ov040_021282c0(void);
    void func_ov040_02128918(void);
    void func_ov040_021290f4(void);
    void func_ov040_02129118(void);
    void func_ov040_0212913c(void);
    void func_ov040_02129168(void);
    void func_ov040_0212975c(void);
    void func_ov040_021297d8(void);
    void func_ov040_02129854(void);
    void func_ov040_02129940(void);
    void func_ov040_02129b6c(void);
    void func_ov040_02129ccc(void);
    void func_ov040_0212a000(void);
    void func_ov040_0212a0c0(void);
    void func_ov040_0212a0d8(void);
    void func_ov040_0212a108(void);
    void func_ov040_0212a290(void);
    void func_ov040_0212a2a0(void);
    void func_ov040_0212a2b4(void);
    void func_ov040_0212a4a4(void);
    void func_ov040_0212a62c(void);
    void func_ov040_0212a654(void);
    void func_ov040_0212a66c(void);
    void func_ov040_0212a69c(void);
    void func_ov040_0212a74c(void);
    void func_ov040_0212a754(void);
    void func_ov040_0212a770(void);
    void func_ov040_0212a78c(void);
    void func_ov040_0212a7a8(void);
};

class ActorTypeUnkFTRN : public ActorType {
public:
    static ActorTypeUnkFTRN gInstance;

    /* 00 (base) */

    ActorTypeUnkFTRN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFTRN *GetInstance();
};
