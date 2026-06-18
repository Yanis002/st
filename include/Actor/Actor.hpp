#pragma once

#include "Actor/ActorId.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "Animation/CellAnimObject.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "flags.h"
#include "global.h"
#include "math.hpp"
#include "types.h"
#include "versions.h"

// some functions use thumb mode on the japanese version (only in overlay 40?)
#if IS_JP
    #define OV040_ARM THUMB
#else
    #define OV040_ARM ARM
#endif

class ActorParams {
public:
    /* 00 */ VecFx32 mInitialPos;
    /* 0C */ s16 mInitialAngle;
    /* 0E */ s8 mUnk_0E;
    /* 0F */ bool mUnk_0F;
    /* 10 */ u16 mParams[4];
    /* 18 */ Vec2b mUnk_18;
    /* 1A */ u16 mUnk_1A;
    /* 1C */ union {
        unk32 mUnk_1C;
        u16 mUnk_1C_0;
        u16 mUnk_1C_2;
    };
    /* 20 */ union {
        unk32 mUnk_20;
        unk16 mUnk_20_0;
        unk16 mUnk_20_2;
    };
    /* 24 */ unk16 mUnk_24;
    /* 26 */ union {
        unk16 mUnk_26;
        unk8 mUnk_26_0;
        unk8 mUnk_26_1;
    };
    /* 28 */ ActorRef mUnk_28;
    /* 2C */ u32 mUnk_2C;
    /* 30 */

    void func_ov000_020975f8();
};

class UnkStruct_ov000_020b539c {
public:
    /* 00 */ ActorParams mUnk_00;
    /* 30 */ ActorProfile *mUnk_30;
    /* 34 */

    ActorProfile **func_ov000_02073dc();
    ActorProfile **func_ov000_02073e8();
    ActorProfile *GetProfileFromId(ActorId actorId);
};

class Actor_C4;

typedef u32 ActorFlags;
enum ActorFlag_ {
    ActorFlag_Alive       = FLAG(0, 0),
    ActorFlag_Visible     = FLAG(0, 1),
    ActorFlag_2           = FLAG(0, 2),
    ActorFlag_Active      = FLAG(0, 3), // stops updating if false
    ActorFlag_4           = FLAG(0, 4),
    ActorFlag_5           = FLAG(0, 5),
    ActorFlag_6           = FLAG(0, 6),
    ActorFlag_7           = FLAG(0, 7),
    ActorFlag_Grabbed     = FLAG(0, 8),
    ActorFlag_9           = FLAG(0, 9),
    ActorFlag_Interacting = FLAG(0, 10), // set when player interacts with actor
    ActorFlag_11          = FLAG(0, 11),
    ActorFlag_12          = FLAG(0, 12),
    ActorFlag_13          = FLAG(0, 13),
    ActorFlag_14          = FLAG(0, 14),
    ActorFlag_15          = FLAG(0, 15),
    ActorFlag_16          = FLAG(0, 16),
    ActorFlag_17          = FLAG(0, 17),
    ActorFlag_18          = FLAG(0, 18),
    ActorFlag_19          = FLAG(0, 19),
    ActorFlag_20          = FLAG(0, 20),
    ActorFlag_21          = FLAG(0, 21),
    ActorFlag_22          = FLAG(0, 22),
    ActorFlag_23          = FLAG(0, 23),
    ActorFlag_24          = FLAG(0, 24),
    ActorFlag_25          = FLAG(0, 25),
    ActorFlag_26          = FLAG(0, 26),
    ActorFlag_27          = FLAG(0, 27),
    ActorFlag_28          = FLAG(0, 28),
    ActorFlag_29          = FLAG(0, 29),
    ActorFlag_30          = FLAG(0, 30),
    ActorFlag_31          = FLAG(0, 31),
};

class Actor_C4;

struct ActorGrabParams {
    /* 00 */ u16 unk_00;
    /* 02 */ u16 unk_02;
    /* 04 */
};

class Actor_9C {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ ActorRef mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ u16 mUnk_1C;
    /* 1E */ u16 mUnk_1E;
    /* 20 */

    /* 00 */ virtual void vfunc_00(); // corresponds to func_ov000_02097c14
    /* 04 */ virtual void vfunc_04(); // corresponds to func_ov000_02097c20
    /* 08 */

    Actor_9C();
    void func_ov000_02097bec();
};

typedef s16 ActorState;
#define ActorState_None -1

class Actor : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ VecFx32 mPos;
    /* 10 */ VecFx32 mPrevPos;
    /* 1C */ VecFx32 mVel;
    /* 28 */ fx16 mAngle;
    /* 2A */ unk16 mUnk_2A;
    /* 2C */ unk32 mUnk_2C; // gravity?
    /* 30 */ Cylinder *mUnk_30;
    /* 34 */ Cylinder *mUnk_34;
    /* 38 */ unk32 *mUnk_38;
    /* 3C */ Actor_9C *mUnk_3C;
    /* 40 */ Actor_C4 *mUnk_40;
    /* 44 */ u16 mUnk_44;
    /* 46 */ unk16 mUnk_46;
    /* 48 */ unk16 mUnk_48;
    /* 4A */ u8 mUnk_4A[2];
    /* 4C */ ActorState mState;
    /* 4E */ fx16 mYOffset;
    /* 50 */ volatile u16 mUnk_50; // timer some actors are using
    /* 52 */ u16 mUnk_52;          // maximum value for above timer
    /* 54 */ unk32 mUnk_54;
    /* 58 */ ActorFlags mFlags[1];
    /* 5C */ ActorParams mUnk_5C;
    /* 8C */ ActorRef mRef;
    /* 90 */ ActorProfile *mpProfile;
    /* 94 */

    /* 00 */ virtual void GetOffsetPos(VecFx32 *pPos) const;
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0C */ virtual unk8 vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual bool vfunc_18(unk32 param1);
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C(unk32 param1);
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual unk32 vfunc_34();
    /* 38 */ virtual bool Grab(ActorGrabParams grabParams);
    /* 3C */ virtual bool Drop(ActorGrabParams grabParams, const VecFx32 *pVel);
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4C */ virtual ~Actor();
    /* 54 */

    unk32 func_01fff5d0(unk32 param1, unk32 param2);

    void ResetFlags() {
        *(u32 *) this->mFlags = 0;
    }

    void Kill() {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    bool IsAlive() {
        return GET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    Actor();

    ActorId GetActorId();

    bool IsTimerOut() {
        if (this->mUnk_50 < this->mUnk_52) {
            this->mUnk_50++;
            return false;
        }

        return true;
    }

    // overlay 0
    void func_ov000_0209848c(ActorProfile *param1);
    void func_ov000_020984b0();
    void func_ov000_020984b4();
    void func_ov000_020984b8();
    void func_ov000_020984bc();
    void func_ov000_020984c0();
    void func_ov000_020984c4();
    unk32 func_ov000_020984c8();
    void func_ov000_020984d0();
    void func_ov000_020984f0();
    bool func_ov000_02098838();
    unk32 func_ov000_02098910(unk32 param1, unk32 param2);
    void func_ov000_02098b8c(unk32 param1, unk32 param2);
    s32 func_ov000_02098518(unk32 *param1);
    VecFx32 *func_ov000_0209853c(unk32 param1);
    s32 func_ov000_02098554();
    s16 func_ov000_0209856c();
    s8 func_ov000_02098578();
    s32 func_ov000_02098584();
    s32 func_ov000_020985f0(void *param1);
    void func_ov000_0209862c(unk32 param1);
    void func_ov000_020989e0();
    bool func_ov000_02098a60(unk32 param1);
    void func_ov000_02098a88(unk32 param1, unk32 param2);

    static void func_ov000_020973f4(ActorRef *pOutRef, UnkStruct_ov000_020b539c *param2, ActorId actorId, ActorParams *pParams,
                                    int param5);

    // overlay 17
    void func_ov017_020bf5c4(VecFx32 *param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
    void func_ov017_020bf9c8(Actor *param1);
};

class Actor_C4_Base {
public:
    Actor_C4_Base(void *param1, unk32 param2);
};

class Actor_C4 : public Actor_C4_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 08 */ unk16 mUnk_0A;
    /* 0C */ unk16 mUnk_0C;
    /* 0C */ unk16 mUnk_0E;
    /* 10 */ unk16 mUnk_10;
    /* 10 */ unk16 mUnk_12;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ Actor *mUnk_20;
    /* 24 */

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2);
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C(unk32 param1);
    /* 10 */

    template <typename T> T *GetActorPtr() {
        return (T *) this->mUnk_20;
    }

    Actor_C4(Actor *param1) :
        Actor_C4_Base(&param1->mRef, 0) {}
};

class Actor_Derived2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ VecFx32 mUnk_98;
    /* A4 */ unk32 mUnk_A4;
    /* A8 */ void *mUnk_A8;
    /* AC */ unk8 mUnk_AC;
    /* AD */ unk8 mUnk_AD;
    /* AE */

    Actor_Derived2();

    /* 30 */ virtual void vfunc_30();
    /* 4C */ WEAK virtual ~Actor_Derived2() {}
    /* 54 */ virtual void vfunc_54();
};

class Actor_Derived3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */

    Actor_Derived3();

    // data_ov026_02137570
    /* 54 */ virtual void vfunc_54();
    /* 58 */ virtual void vfunc_58();
    /* 5C */

    void func_ov026_02110ca4();
    void func_ov026_02110d14();
    void func_ov026_02110d38();
    void func_ov026_02110d68();
    void func_ov026_02110d7c();
    void func_ov026_02110dac();
    void func_ov026_02110ddc();
    void func_ov026_02110e38();
    void func_ov026_02110e70();
    void func_ov026_02110eb8();
    void func_ov026_02110ee4();
    void func_ov026_02110f28();
    void func_ov026_02110f68();
    void func_ov026_02110fcc();
};

class Actor_UnkSystem1_Base {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ unk32 mUnk_004;
    /* 008 */ unk32 mUnk_008;
    /* 00C */ unk32 mUnk_00C;
    /* 010 */ unk32 mUnk_010;
    /* 014 */ unk32 mUnk_014;
    /* 018 */ unk32 mUnk_018;
    /* 01C */ unk32 mUnk_01C[4];
    /* 02C */ unk32 mUnk_02C[4];
    /* 03C */ unk32 mUnk_03C;
    /* 040 */ unk32 mUnk_040;
    /* 044 */ VecFx32 mUnk_044[4];
    /* 074 */ VecFx32 mUnk_074[4];
    /* 0A4 */ VecFx32 mUnk_0A4[4];
    /* 0D4 */ VecFx32 mUnk_0D4[4];
    /* 104 */ unk32 mUnk_104;
    /* 108 */ unk32 mUnk_108;
    /* 10C */ unk32 mUnk_10C;
    /* 110 */ unk8 mUnk_110[0x70];
    /* 180 */ unk8 mUnk_180;
    /* 181 */ unk8 mUnk_181;
    /* 182 */ bool mUnk_182;
    /* 183 */ unk8 mUnk_183;
    /* 184 */ STRUCT_PAD(0x184, 0x1C4); // unsure if this is here

    Actor_UnkSystem1_Base(); // func_ov026_020ee130
};

class Actor_UnkSystem1 : public Actor_UnkSystem1_Base {
public:
    /* 000 (base) */
    /* 1C4 */ unk32 mUnk_1C4;
    /* 1C8 */ unk32 mUnk_1C8;
    /* 1CC */ unk32 mUnk_1CC;
    /* 1D0 */ unk32 mUnk_1D0;
    /* 1D4 */ union {
        struct {
            u8 mUnk_1D4_0 : 1;
            u8 mUnk_1D4_1 : 1;
            u8 mUnk_1D4_2 : 1;
            u8 mUnk_1D4_3 : 1;
            u8 mUnk_1D4_4 : 1;
            u8 mUnk_1D4_5 : 1;
            u8 mUnk_1D4_6 : 1;
            u8 mUnk_1D4_7 : 1;
        };
        u8 mUnk_1D4;
    };
    /* 1D8 */ unk32 mUnk_1D8;
    /* 1DC */ unk32 mUnk_1DC;
    /* 1E0 */ unk32 mUnk_1E0;
    /* 1E4 */ unk16 mUnk_1E4;
    /* 1E6 */ unk16 mUnk_1E6;
    /* 1E8 */ unk32 mUnk_1E8;
    /* 1EC */

    Actor_UnkSystem1(unk32 param1, unk32 param2); // func_ov026_020f90b0
    ~Actor_UnkSystem1();

    void func_ov026_020ee538(unk32 param1);
    void func_ov026_020f93d4(unk32, u16);
    VecFx32 *func_ov026_020f9ecc(void);
    VecFx32 *func_ov026_020f9ec4(void);
    bool func_ov026_020fa358(void);
    bool func_ov026_020fa46c(unk32, u16);
    bool func_ov026_020fa55c(void);
    unk32 func_ov026_020fa73c();
    void func_ov026_020fa77c(bool);
    unk32 func_ov026_020fa7c0(void);
    unk32 func_ov026_020fa7f4(void);
    bool func_ov026_020fac30(u32, unk32, unk32, unk32);
    void func_ov026_020fa838(unk32, u8);
    bool func_ov026_020fb0a4(void);
};

class Actor_UnkSystem2_Base {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 28 */ unk32 mUnk_24;
    /* 28 */

    Actor_UnkSystem2_Base() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
        this->mUnk_08 = 0;
        this->mUnk_0C = 0;
        this->mUnk_10 = 0;
        this->mUnk_14 = 0;
        this->mUnk_18 = 0;
        this->mUnk_1C = 0;
        this->mUnk_20 = 0;
        this->mUnk_24 = 0;
    }
};

class Actor_UnkSystem2 : public Actor_UnkSystem2_Base {
public:
    /* 00 (vtable) */
    /* 30 */

    Actor_UnkSystem2() {}

    // data_ov000_020b27c8
    /* 00 */ virtual ~Actor_UnkSystem2(); // func_ov000_0207b934 & func_ov000_0207b948
    /* 08 */ virtual void vfunc_08();     // func_ov000_0207b71c
    /* 0C */ virtual void vfunc_0C();     // func_ov000_0207b754
    /* 10 */ virtual void vfunc_10();     // func_ov000_0207b70c
    /* 14 */
};

class Actor_UnkSystem2_Derived1 : public Actor_UnkSystem2 {
public:
    Actor_UnkSystem2_Derived1() {}
};

class Actor_UnkSystem3 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    Actor_UnkSystem3(); // func_ov000_0207ec88

    // data_ov000_020b287c
    /* 00 */ virtual ~Actor_UnkSystem3(); // func_ov000_0207eca8 & func_ov000_0207ecd8
    /* 08 */ virtual void vfunc_08();     // func_ov000_0207ed84
    /* 0C */
};

class Actor_UnkSystem4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    Actor_UnkSystem4(); // func_ov026_020ff498

    void func_ov026_0210136c(unk32 param1);
    unk32 func_ov026_021016d8(unk32);
    void func_ov026_02101890(unk32, unk32);
    void func_ov026_02101c54(unk32 param1);
};

class Actor_UnkSystem5 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x6C);
    /* 6C */

    Actor_UnkSystem5();  // func_ov026_020f419c
    ~Actor_UnkSystem5(); // func_ov026_020f3c18
};

class Actor_UnkSystem6 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0xCC);
    /* CC */

    Actor_UnkSystem6();  // func_ov026_020f41dc
    ~Actor_UnkSystem6(); // func_ov026_020f26b0
};

class Actor_UnkSystem7_Base_F0_00 : public UnkStruct_ov019_020d24c8_28_258_00 {
public:
    /* 00 (base) */
    /* 08 */ unk32 mUnk_08;
    /* 0C */
};

class Actor_UnkSystem7_Base_F0 {
public:
    /* 00 */ Actor_UnkSystem7_Base_F0_00 mUnk_00;
    /* 0C */ Actor_UnkSystem7_Base_F0_00 mUnk_0C;
    /* 18 */ Actor_UnkSystem7_Base_F0_00 mUnk_18;
    /* 24 */ Actor_UnkSystem7_Base_F0_00 mUnk_24;
    /* 30 */ Actor_UnkSystem7_Base_F0_00 mUnk_30;
    /* 3C */ Actor_UnkSystem7_Base_F0_00 mUnk_3C;
    /* 48 */ Actor_UnkSystem7_Base_F0_00 mUnk_48;
    /* 54 */ Actor_UnkSystem7_Base_F0_00 mUnk_54;
    /* 60 */ Actor_UnkSystem7_Base_F0_00 mUnk_60;
    /* 6C */ Actor_UnkSystem7_Base_F0_00 mUnk_6C;
    /* 78 */ Actor_UnkSystem7_Base_F0_00 mUnk_78;
    /* 84 */ Actor_UnkSystem7_Base_F0_00 mUnk_84;
    /* 90 */ unk32 mUnk_90;
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk32 mUnk_9C;
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ unk8 mUnk_A4;
    /* A5 */ unk8 mUnk_A5; // pad?
    /* A6 */ unk8 mUnk_A6; // pad?
    /* A7 */ unk8 mUnk_A7; // pad?
    /* A8 */

    Actor_UnkSystem7_Base_F0(); // func_ov026_020d9618
};

class Actor_UnkSystem7_Base {
public:
    /* 000 */ CellAnimObject mUnk_000;
    /* 078 */ CellAnimObject mUnk_078;
    /* 0F0 */ Actor_UnkSystem7_Base_F0 mUnk_0F0;
    /* 198 */

    Actor_UnkSystem7_Base(); // func_ov026_02105444
};

class Actor_UnkSystem7 : public Actor_UnkSystem7_Base {
public:
    /* 000 (base) */
    /* 198 */

    Actor_UnkSystem7(); // func_ov026_0210566c
    void func_ov026_02105468(unk32);
};

class Actor_UnkSystem7_2 : public Actor_UnkSystem7_Base {
public:
    /* 000 (base) */
    /* 198 */

    Actor_UnkSystem7_2(); //! TODO: not another ctor from above?
};

//! TODO: fill members
class Actor_UnkSystem8 {
public:
    /* 00 */ unk32 mUnk_00;

    Actor_UnkSystem8(); // func_ov026_020fd690
};

//! TODO: fill members
class Actor_UnkSystem9 {
public:
    /* 00 */ unk32 mUnk_00;

    Actor_UnkSystem9();
};

class Actor_UnkStruct1 {
public:
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */

    Actor_UnkStruct1(); // func_ov026_020fb21c
};

struct Actor_UnkStruct2 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ union {
        u8 mUnk_0C[4];
        u32 mUnk_0C_32;
    };
    /* 10 */ Actor_UnkSystem4 mUnk_10;

    Actor_UnkStruct2() :
        mUnk_0C_32(0) {}
};

struct Actor_UnkStruct3 {
    /* 000 */ ModelRender_Derived3 mUnk_000;
    /* 070 */ STRUCT_PAD(0x70, 0xFC);
    /* 0FC */ Actor_UnkSystem5 mUnk_0FC[2];
    /* 1D4 */ Actor_UnkSystem6 mUnk_1D4[1];
    /* 2A0 */ unk32 mUnk_2A0;
    /* 2A4 */ STRUCT_PAD(0x2A4, 0x620);
    /* 620 */

    Actor_UnkStruct3() :
        mUnk_000(0x0C),
        mUnk_2A0(0) {}
};

extern UnkStruct_ov000_020b539c data_ov000_020b539c_eur;

struct UnkActorDataStruct1 {
    /* 00 */ unk32 unk_00[4];
    /* 10 */ unk32 unk_10;
    /* 14 */ unk32 unk_14;
    /* 18 */
};
extern "C" void func_ov000_02099ddc(void *thisx, UnkActorDataStruct1 param1, unk32 param2, unk32 param3);
