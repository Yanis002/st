#pragma once

#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "global.h"
#include "types.h"

// probably related to the map data?
#define NUM_UNK_BLOCKS 120
#define SIZE_UNK_BLOCK 0x1000

#define LENGTH_PLAYER_NAME 8
#define COUNT_DATA 2 // main data + backup (?)

enum {
    SaveDataIndex_SaveInfo,
    SaveDataIndex_Treasures,
    SaveDataIndex_02,
    SaveDataIndex_03,
    SaveDataIndex_04,
};

class SaveAdventureFlags {
public:
    /* 00 */ unk8 mUnk_00[0x80];
    /* 80 */

    SaveAdventureFlags() {
        Fill32(0, this, sizeof(SaveAdventureFlags));
    };
};

class SaveInventory {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ u32 mUnk_08[2]; // inventory items bitfield & collection/equipment bitfield
    /* 0C */ u16 mNumRupees;
    /* 0E */ u16 mUnk_12; // "toggle bitfield"
    /* 10 */ ItemFlag mEquippedItem;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    SaveInventory() {
        Fill32(0, this->mUnk_08, sizeof(mUnk_08));
        this->mUnk_12 = 0;
    };
};

class SaveTreasures {
public:
    // mirrors `TreasureManager`
    class TreasureData {
    public:
        /* 00 */ unk8 mUnk_00[0x3C];
        /* 3C */ s16 mUnk_3C[TreasureType_Max]; // treasures
        /* 5C */ unk16 mUnk_5C;
        /* 5E */ unk16 mUnk_5E;
        /* 60 */ STRUCT_PAD(0x60, 0x7E);
        /* 7E */ u16 mUnk_7E;
        /* 80 */
    };

    /* 000 */ TreasureData mTreasureData[COUNT_DATA];
    /* 100 */

    SaveTreasures() {
        this->mTreasureData[0].mUnk_5C = 0;
    }

    void func_ov019_020d1600();
};

// mirrors another undefined class
class SaveUnknownC94 {
public:
    /* 00 */ unk8 mUnk_00[0x84];
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8C */ unk16 mSongs; // bitfield for obtained songs
    /* 8E */ unk16 mUnk_8E; // bitfield for obtained songs
    /* 90 */

    SaveUnknownC94() :
        mUnk_84(0),
        mUnk_88(0),
        mSongs(0) {}
};

// mirrors another undefined class
class SaveUnknownD24 {
public:
    /* 00 */ unk8 mUnk_00[0x48];
    /* 48 */ unk8 mUnk_48[8];
    /* 50 */ unk16 mUnk_50;
    /* 52 */ unk16 mUnk_52;
    /* 54 */ STRUCT_PAD(0x54, 0x68);
    /* 68 */

    SaveUnknownD24() {
        Fill32(0, this->mUnk_48, sizeof(this->mUnk_48));
        this->mUnk_50 = 0;
    }
};

class SaveInfo {
public:
    class Sub5 {
    public:
        /* 00 */ unk32 mUnk_00;

        Sub5();
    };

    class Sub8 {
    public:
        /* 00 */ unk8 mUnk_00[0x0C];
        /* 0C */

        Sub8() {
            Fill32(0, this, sizeof(Sub8));
        };
    };

    class Sub9 {
    public:
        /* 00 */ unk8 mUnk_00[0x20];
        /* 20 */

        Sub9() {
            Fill32(0, this, sizeof(Sub9));
        };
    };

    class Sub10 {
    public:
        /* 00 */ unk32 mUnk_00[4];
        // /* 00 */ unk32 mUnk_04;
        // /* 00 */ unk32 mUnk_08;
        // /* 00 */ unk32 mUnk_0C;
        /* 10 */

        Sub10() {
            Fill32(0, (u32 *) &this->mUnk_00, 0x10);
        };
    };

    class Sub11 {
    public:
        class Test {
        public:
            /* 000 */ unk32 mUnk_000;
            /* 004 */ unk16 mUnk_004;
            /* 006 */ STRUCT_PAD(0x06, 0x180);
            /* 180 */

            Test() {
                mUnk_004 = 0;
                mUnk_000 = 0;
            };
        };

        Test test[2];

        Sub11() {};
    };

    class Sub12 {
    public:
        class Test {
        public:
            /* 000 */ unk32 mUnk_000;
            /* 004 */ unk32 mUnk_004;
            /* 004 */ unk32 mUnk_008;
            /* 006 */ STRUCT_PAD(0x08, 0x400);
            /* 400 */

            Test() {
                mUnk_004 = 0;
                mUnk_000 = 0;
            };
        };

        Test test[2];

        Sub12() {};
    };

    class SaveInfoData {
    public:
        /* 000 */ unk32 mUnk_000;
        /* 004 */ unk32 mUnk_004;
        /* 008 */ unk32 mUnk_008;
        /* 00C */ unk32 mUnk_00C;
        /* 010 */ unk32 mUnk_010;
        /* 014 */ unk16 mUnk_014;
        /* 016 */ unk16 mSceneIndex;
        /* 018 */ u8 mInteriorIndex; // "house" index but could be more?
        /* 019 */ u8 mSpawnIndex;
        /* 01A */ unk16 mUnk_01A;
        /* 01C */ unk32 mUnk_01C;
        /* 020 */ unk32 mUnk_020;
        /* 024 */ unk32 mUnk_024;
        /* 028 */ STRUCT_PAD(0x28, 0x40);
        /* 040 */ SaveAdventureFlags mAdventureFlags;
        /* 0C0 */ SaveInventory mInventory;
        /* 0D8 */ Sub5 mUnk_0D8;
        /* 0DC */ STRUCT_PAD(0xDC, 0x144);
        /* 144 */ u32 mTrackFlags[3];
        /* 150 */ unk32 mUnk_150;
        /* 150 */ unk32 mUnk_154;
        /* 158 */ Sub8 mUnk_158;
        /* 164 */ Sub9 mUnk_164;
        /* 184 */ Sub11 mUnk_184[1];
        /* 484 */ Sub12 mUnk_484[1];
        /* C84 */ Sub10 mUnk_C84;
        /* C94 */ SaveUnknownC94 mUnk_C94;
        /* D24 */ SaveUnknownD24 mUnk_D24;
        /* D8C */ STRUCT_PAD(0xD8C, 0xDA2);
        /* DA2 */ wchar_t mUnk_DA2[LENGTH_PLAYER_NAME + 1];
        /* DB4 */ STRUCT_PAD(0xDB4, 0xDFE);
        /* DFE */ u16 mUnk_DFE;
        /* E00 */

        SaveInfoData() :
            mUnk_014(0)/* , */
                    // mUnk_0CE(0),
                    // mUnk_D18(0),
                    // mUnk_D1C(0),
                    // mUnk_D20(0),
        /* mUnk_D74(0) */ {}
    };

    /* 0000 */ SaveInfoData mSaveInfoData[COUNT_DATA];
    /* 1C00 */

    SaveInfo() {}

    void func_ov000_020a1028(void);
    void func_ov019_020d14fc(void);
};

class Save {
public:
    class Sub5 {
    public:
        class Sub15 {
        public:
            /* 000 */ unk8 mUnk_000[(0x3C4) - (0x000)];
            /* 3C4 */ wchar_t mUnk_3C4[LENGTH_PLAYER_NAME + 1];
            /* 3D6 */ STRUCT_PAD(0x3D6, 0x3FE);
            /* 3FE */ u16 mUnk_3FE;
            /* 400 */
        };

        /* 000 */ Sub15 mUnk_000[COUNT_DATA];
        /* 800 */

        void func_ov000_020a12a0();
        void func_ov019_020d14c0();
    };

    class Sub6 {
    public:
        class Sub16 {
        public:
            /* 00 */ unk8 mUnk_00[0x7E];
            /* 7E */ u16 mUnk_7E;
        };

        /* 000 */ Sub16 mUnk_00[COUNT_DATA];
        /* 100 */

        void func_ov019_020d15cc();
    };

    class Sub7 {
    public:
        class Sub17 {
        public:
            /* 00 */ unk8 mUnk_00[0x7E];
            /* 7E */ u16 mUnk_7E;
        };

        /* 000 */ Sub17 mUnk_00[COUNT_DATA];
        /* 100 */

        void func_ov000_020a10f4();
        void func_ov019_020d1400();
    };

    /* 0000 */ SaveInfo mSaveInfo;
    /* 1C00 */ SaveTreasures mTreasures;
    /* 1D00 */ Sub5 mUnk_1D00;
    /* 2500 */ Sub6 mUnk_2500;
    /* 2600 */ Sub7 mUnk_2600;
    /* 2700 */

    Save() {}
    void func_ov000_020a1124(void);
};

// save data
class UnkStruct_ov000_020b62a8_Sub1 : public SysObject {
public:
    class Sub1 {
    public:
        u16 mUnk_00[2];

        Sub1() {
            this->mUnk_00[0] = 0;
        }
    };

    /* 00000 */ Save mSaveFiles[MAX_SAVE_FILES];
    /* 04E00 */ Sub1 mUnk_04E00[MAX_SAVE_FILES];
    /* 04E08 */ unk16 mUnk_04E08;
    /* 04E0A */ u16 mUnk_04E0A;
    /* 04E0C */ u8 mUnk_04E0C[NUM_UNK_BLOCKS * SIZE_UNK_BLOCK];
    /* 7CE0C */

    UnkStruct_ov000_020b62a8_Sub1();

    unk16 func_ov019_020d0c4c(unk32 param1, unk32 param2);
    unk16 func_ov019_020d0c90(unk32 param1, unk32 param2, unk32 param3);
    void func_ov019_020d0d50();
    void func_ov019_020d0e18(unk32 param1);
    void func_ov019_020d0ea8();
    void func_ov019_020d1108();
    void func_ov019_020d127c();
    void func_ov019_020d13b8();
    void func_ov019_020d1434();
    void func_ov019_020d1538();
    void func_ov019_020d1634();
    void func_ov019_020d16d0();
    void func_ov019_020d17e0();
    void func_ov019_020d1808(unk32 param1);
    void func_ov019_020d1aac(unk32 param1, const wchar_t *param2);
    void func_ov019_020d1b14(unk32 param1);
};

// what's written in the file for one game file
class SaveFileData {
public:
    /* 00000 */ Save mUnk_00000;
    /* 02700 */ u8 mUnk_02700[NUM_UNK_BLOCKS * SIZE_UNK_BLOCK];
    /* 7A700 */
};

struct UnkStruct_TwoPtrs {
    void *unk_00;
    void *unk_04;

    void operator=(UnkStruct_TwoPtrs &from) {
        this->unk_00 = from.unk_00;
        this->unk_04 = from.unk_04;
    }
};

// save manager?
class UnkStruct_ov000_020b62a8 {
public:
    class Sub1 {
    public:
        /* 00 */ unk16 mUnk_00;
    };

    /* 000 */ unk8 mUnk_000[0x204 - 0x000];
    /* 204 */ Sub1 mUnk_204;
    /* 206 */ unk16 mUnk_206;
    /* 208 */ unk8 mUnk_208;
    /* 208 */ unk8 mUnk_209;
    /* 20A */ u8 mUnk_20A; // bool?
    /* 20B */ unk8 mUnk_20B;
    /* 20C */ unk32 mUnk_20C;
    /* 210 */ unk32 mUnk_210;
    /* 214 */ unk32 mUnk_214;
    /* 218 */ UnkStruct_ov000_020b62a8_Sub1 *mUnk_218;
    /* 21C */ unk8 mUnk_21C[0x23C - 0x21C];
    /* 23C */ UnkStruct_TwoPtrs mUnk_23C;
    // /* 240 */ void* mUnk_240;

    bool IsUnk20A() {
        return mUnk_20A == 0;
    }
    unk32 IsUnk210() {
        return mUnk_210 == 0;
    }

    void test(unk32 *param1, unk32 param2, void *param3, unk32 param4) {
        // UnkStruct_ov000_020b62a8_Sub1* unk218 = &mUnk_218;

        // *param1 = unk218;
        // data_ov000_020b504c.func_ov000_0206807c(param2, param3, unk218, param4);
    }

    void func_ov000_020a0b2c(void *param1, unk32 param2);
    void func_ov000_020ba7c8(u16 param1);
    void func_ov019_020d08fc(unk32 param1, UnkStruct_TwoPtrs param2);
    bool func_ov019_020d0964(void);
    void func_ov019_020d09dc(unk32 param1);
    void func_ov019_020d0a04(unk32 param1);
    void func_ov019_020d0ae0(unk32 param1);

    static void func_ov019_020d086c(u16 param1);
    static void func_ov019_020d0a2c(u16 param1);
};

extern UnkStruct_ov000_020b62a8 data_ov000_020b62a8;
