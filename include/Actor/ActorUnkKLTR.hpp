#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKLTR_C4 : public Actor_C4 {
public:
    ActorUnkKLTR_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkKLTR : public Actor_Derived3, public UnkStruct_027e0ce0_38_Base2 {
public:
    /* 000 (base) */
    /* 0A4 */ Actor_UnkSystem1 *mUnk_0A4;
    /* 0A8 */ Actor_UnkSystem1 mUnk_0A8;
    /* 294 */ Actor_UnkStruct1 mUnk_294;
    /* 2B4 */ Actor_9C mUnk_2B4;
    /* 2D4 */ Actor_UnkSystem2_Derived1 mUnk_2D4;
    /* 300 */ bool mUnk_300;
    /* 301 */ unk8 mUnk_301; // pad?
    /* 302 */ unk8 mUnk_302; // pad?
    /* 303 */ unk8 mUnk_303; // pad?
    /* 304 */ Actor_UnkSystem3 mUnk_304;
    /* 314 */ Actor_UnkStruct2 mUnk_314;
    /* 318 */ Actor_UnkStruct3 mUnk_330;
    /* 950 */ unk32 mUnk_950;
    /* 954 */ unk32 mUnk_954;
    /* 958 */ Actor_UnkSystem7 mUnk_958;
    /* AF0 */ Actor_UnkSystem8 mUnk_AF0;
    /* AF4 */ UnkSystem7_Base mUnk_AF4[4];
    /* B04 */ STRUCT_PAD(0xB04, 0xB14);
    /* B14 */ unk32 mUnk_B14;
    /* B18 */

    ActorUnkKLTR();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 30 */ virtual void vfunc_30() override;
    /* 4C */ virtual ~ActorUnkKLTR() override;

    void func_ov026_021116e0(void);
    void func_ov026_02111ac4(void);
    void func_ov026_02111c08(void);
    void func_ov026_02111d50(void);
    void func_ov026_0211202c(void);
    void func_ov026_0211205c(void);
    void func_ov026_02112088(void);
    void func_ov026_0211210c(void);
    void func_ov026_02112328(void);
    bool func_ov026_021127e8(void);
    void func_ov026_02112850(void);
    void func_ov026_02112944(void);
    bool func_ov026_02112bd4(void);
    bool func_ov026_02112ca8(void);
    void func_ov026_02112cbc(void);
    void func_ov026_02112cc0(void);
    void func_ov026_02112e28(void);
    bool func_ov026_02112ecc(void);
    void func_ov026_02112f08(void);
    bool func_ov026_02112fb0(void);
    void func_ov026_02112fec(void);
    bool func_ov026_02112ff8(void);
    void func_ov026_02113040(void);
    bool func_ov026_02113118(void);
    void func_ov026_02113204(void);
    void func_ov026_021132c0(void);
    void func_ov026_02113304(void);
    bool func_ov026_021133b0(void);
    void func_ov026_0211340c(void);
    bool func_ov026_021134c8(void);
    void func_ov026_0211350c(void);
    bool func_ov026_021135b8(void);
    void func_ov026_021135e4(void);
    bool func_ov026_02113704(void);
    void func_ov026_02113718(void);
    void func_ov026_02113784(void);
    void func_ov026_0211391c(void);
    bool func_ov026_02113a40(void);
    void func_ov026_02113a5c(void);
    void func_ov026_02113b5c(void);
    void func_ov026_02113b98(void);
};

class ActorProfileUnkKLTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKLTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKLTR *GetProfile();
};
