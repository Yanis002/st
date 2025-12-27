#include "FileSelect/FileSelect.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_02049a2c.hpp"
#include "Unknown/UnkStruct_02049b80.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204aeec.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov000_020b62a8.hpp"
#include "Unknown/UnkStruct_ov000_020b64c0.hpp"
#include "Unknown/UnkStruct_ov003_020ba740.hpp"
#include "Unknown/UnkStruct_ov019_020d24c8.hpp"
#include "global.h"
#include "regs.h"

#include <wstring.h>

#pragma dont_reuse_strings off

extern "C" {
void func_ov000_02067344();
void func_ov001_020be054();
void func_ov001_020be0d8();
void func_ov001_020be0ec();
void func_ov001_020bd6a8();
void func_0201867c();
void func_02018694();
void func_02018984();
void func_02021c2c();
void func_02021c08();
void func_020249d4(void *pReg, unk32 param1, unk32 param2, unk32 param3, unk32 param4);
void func_020275e8();
void func_0201568c(void *param1);
unk32 func_02030cfc();
void func_ov000_020a0b58();
void func_02030d48(u16 param1);
void func_02030d58(u16 param1);
unk32 func_020312b8(uintptr_t dest, void *src, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                    unk32 param8, unk32 param9);
bool func_ov000_020a0a90(size_t param1, void *param2, size_t param3);

unk32 func_020328c8(void *, void *, size_t);
};

extern u8 data_ov000_020b64b0[8]; // bool?

static unk32 data_ov019_020d1bb0;
static unk32 data_ov019_020d1d80 = 0;
static unk32 data_ov019_020d1db4;
static UnkStruct_TwoPtrs data_ov019_020d1e2c;
static UnkStruct_TwoPtrs data_ov019_020d1e34;
static UnkStruct_TwoPtrs data_ov019_020d1e3c;
static UnkStruct_TwoPtrs data_ov019_020d1e44;
static UnkStruct_TwoPtrs data_ov019_020d24a0;
static UnkStruct_TwoPtrs data_ov019_020d24a8;
static UnkStruct_TwoPtrs data_ov019_020d24b0;

typedef void (*UnknownCallback)(void);
struct UnknownCallbackStruct {
    /* 00 */ UnknownCallback mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */
};
static UnknownCallbackStruct data_ov019_020d1edc[23];

static unk32 data_ov019_020d23b0;
static unk8 data_ov019_021094cc[0xDC00];
static unk8 data_ov019_020fb8cc[0xDC00];
static unk8 data_ov019_020edccc[0xDC00];
static unk8 data_ov019_020e00cc[0xDC00];
static unk8 data_ov019_020d24cc[0xDC00];

static UnkStruct_ov019_020d24c8 *data_ov019_020d24c8;

static unk16 data_ov019_020d24c0[4];

ARM FileSelect_UnkStruct1 *FileSelect_UnkStruct1::Create() {
    return new(1, 4) FileSelect_UnkStruct1();
}

ARM FileSelect_UnkStruct1::FileSelect_UnkStruct1() {
    this->mUnk_20 = 0;
    data_02049bd4.func_02014cdc(2);
    data_02049bd4.mUnk_02 &= 0xFFFB;
    data_02049a2c.func_02013370(1);
    data_0204999c_2.mUnk_60 = 0xD6D8;
    data_ov000_020b504c.func_ov001_020be668();
    data_0204a110.func_ov001_020bd514(2, FileSelect_UnkStruct2::Create, 0, 1);
}

// ARM UnkSystem1_ov019_1::~UnkSystem1_ov019_1() {}

ARM FileSelect_UnkStruct1::~FileSelect_UnkStruct1() {
    data_0204a088->func_ov000_02061098();
    data_ov000_020b62a8.func_ov000_020ba7c8(this->mUnk_22);
    data_ov000_020b504c.func_ov001_020be6f4();
    data_02049bd4.func_02014c60(2);
    data_ov000_020b51b8.func_ov000_0206d0bc(1);
    data_ov000_020b50c0.func_ov001_020bd8dc();
}

// https://decomp.me/scratch/bJVks
ARM void FileSelect_UnkStruct1::vfunc_08(unk32 param1, unk32 param2, unk32 param3) {
    data_ov000_020b62a8.func_ov019_020d0964();
    this->func_02018374();

    data_ov000_020b62a8.test(this->mUnk_18, data_ov019_020d1d80, &this->mUnk_04, param3);
    data_ov000_020b50c0.func_ov000_020bd8ac();
    data_ov000_020b51b8.func_ov000_0206c9a8(3, 0, 0x7F, 0);
}

ARM void FileSelect_UnkStruct1::vfunc_14() {}

ARM void FileSelect_UnkStruct1::vfunc_0C() {
    if ((this->mUnk_0C & 0xFFFF) != 0xFFFF) {
        this->mUnk_04.vfunc_04();
    }
}

ARM void FileSelect_UnkStruct1::vfunc_18() {}

ARM void FileSelect_UnkStruct1::vfunc_20() {}

ARM void FileSelect_UnkStruct1::func_ov019_020c4ae4(unk32 param1) {
    this->mUnk_20 = param1;
    // data_0204a060.func_020183d4(((param1 * 0x2700 + data_ov000_020b62a8.mUnk_218->mUnk_00050) & 0x10000),
    // func_ov001_020be054,
    //                             1);
}

ARM void FileSelect_UnkStruct1::func_ov019_020c4b2c(unk32 param1) {
    this->mUnk_20 = param1;
    data_0204a060.func_020183d4(true, func_ov001_020be0ec, 1);
}

ARM void FileSelect_UnkStruct1::func_ov019_020c4b54(unk32 param1) {
    this->mUnk_20 = param1;
    data_0204a060.func_020183d4(true, func_ov001_020be0d8, 1);
}

ARM FileSelect_UnkStruct2 *FileSelect_UnkStruct2::Create(unk32 param1) {
    return new(1, 4) FileSelect_UnkStruct2(param1);
}

ARM FileSelect_UnkStruct2::FileSelect_UnkStruct2(unk32 param1) :
    mUnk_154(&this->mUnk_104),
    mUnk_158(NULL),
    mUnk_15C(NULL),
    mUnk_160(NULL),
    mUnk_164(NULL) {
    REG_DISPCNT &= 0xFFCFFFEF;
    REG_DISPCNT |= 0x00200010;

    REG_DISPCNT_SUB &= 0xFFCFFFEF;
    REG_DISPCNT_SUB |= 0x00200010;

    this->mUnk_004.func_ov001_020bd734(&data_ov019_020d1bb0);
    func_ov001_020bd6a8();
}

ARM FileSelect_UnkStruct2::~FileSelect_UnkStruct2() {
    this->func_ov019_020c51a8();
    data_0204a110.mUnk_DA4 = 1;
    this->mUnk_004.func_ov001_020bd784();

    delete this->mUnk_164;
    this->mUnk_164 = NULL;

    delete this->mUnk_160;
    this->mUnk_160 = NULL;

    delete this->mUnk_15C;
    this->mUnk_15C = NULL;

    delete this->mUnk_158;
    this->mUnk_158 = NULL;
}

ARM void FileSelect::func_ov019_020c4de4() {}

ARM void FileSelect_UnkStruct2::func_ov019_020c4ed8(unk32 param1, unk32 param2, unk32 param3) {
    void *unkPtr;

    this->mUnk_004.func_0201c00c(0x25, 1, param3);

    FileSelect_UnkClass2_Sub3 *newSub3 = new(1, 4) FileSelect_UnkClass2_Sub3();
    unkPtr                             = newSub3;
    if (newSub3 != NULL) {
        unkPtr = &newSub3->mUnk_0004;
    }
    this->mUnk_158 = newSub3;
    this->mUnk_154->mUnk_04.func_020166cc(unkPtr);
    newSub3->vfunc_18();

    FileSelect_UnkClass2_Sub4 *newSub4 = new(1, 4) FileSelect_UnkClass2_Sub4();
    unkPtr                             = newSub4;
    if (newSub4 != NULL) {
        unkPtr = newSub4->mUnk_0004;
    }
    this->mUnk_15C = newSub4;
    this->mUnk_154->mUnk_04.func_020166cc(unkPtr);
    newSub4->vfunc_18();

    this->mUnk_160 = new(1, 4) FileSelect_UnkClass2_Sub5(&this->mUnk_104, this->mUnk_158);
    this->mUnk_164 = new(1, 4) FileSelect_UnkClass2_Sub6(&this->mUnk_104, this->mUnk_158);

    data_0204a110.mUnk_DA4 = 0;
}

ARM void FileSelect_UnkStruct2::func_ov019_020c4ff8() {
    func_0201867c();
    this->func_0201875c();
    this->func_02018908();

    if (this->mUnk_132 == 0) {
        this->mUnk_148 = -1;
    }

    this->func_ov019_020c5038();
    this->func_ov019_020c503c();
}

ARM void FileSelect_UnkStruct2::func_ov019_020c5038() {}

class UnkStruct {
public:
    unk8 pad[0x3AC];
    unk8 mUnk_3AC;
};

// https://decomp.me/scratch/hJi8l
ARM void FileSelect_UnkStruct2::func_ov019_020c503c() {
    if (data_0204a088->mUnk_00 == 0x0F) {
        unk32 iVar1 = data_0204a110.func_01ff9b50();
        unk32 uVar2;

        switch (iVar1) {
            case 0x58:
                data_ov003_020ba740->func_ov003_020b69d8(2);
                data_ov000_020b5214.func_ov000_0206db44(0x13);
                break;
            case 0x57:
                data_ov003_020ba740->func_ov003_020b69d8(3);
                test(data_ov019_020d1db4, &data_ov000_020b504c, &this->mUnk_168, this->mUnk_158->mUnk_0024);
                UnkStruct *pVar1 = (UnkStruct *) data_ov000_020b504c.func_ov000_02067bb4(0);
                pVar1->mUnk_3AC  = 1;
                data_ov000_020b5214.func_ov000_0206db44(0x12);
                break;
            default:
                break;
        }
    }

    if ((this->mUnk_170 & 0xFFFF) != 0xFFFF) {
        this->mUnk_168.vfunc_04();

        if ((this->mUnk_170 & 0xFFFF) == 0xFFFF) {
            if (this->mUnk_17C != 0) {
                data_ov003_020ba740->func_ov003_020b69d8(4);
            } else {
                data_ov003_020ba740->func_ov003_020b69d8(6);
            }
        }
    }
}

ARM void FileSelect_UnkStruct2::func_ov019_020c5168(unk32 param1) {
    func_02018694();
    this->func_02018a14(param1);
}

ARM void FileSelect_UnkStruct2::func_ov019_020c5188(unk32 param1) {
    func_02018984();
    this->func_02018830(param1);
}

ARM void FileSelect_UnkStruct2::func_ov019_020c51a8() {
    delete data_0204a088;
}

ARM UnkStruct_0204a088_Base::~UnkStruct_0204a088_Base() {
    data_0204a088 = NULL;
}

ARM UnkSystem1_ov019_Derived1::UnkSystem1_ov019_Derived1(unk32 param1, unk32 param2) :
    UnkSystem1_ov019_1(0, 0) {
    this->mUnk_14 = 0;
    this->mUnk_18 = -1;
    this->mUnk_1B = 0;
}

ARM void UnkSystem1_ov019_Derived1::vfunc_08(unk32 param1) {}

ARM unk32 UnkSystem1_ov019_Derived1::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    UnkStruct_ov000_02067bc4 *pVar1;
    UnkStruct_TwoPtrs *callbacks;

    if (param1 < 3) {
        if (this->mUnk_04 < 1) {
            this->func_ov019_020c5590(0x1B, param2, param3);
        } else {
            pVar1 = data_ov000_020b504c.func_ov000_02067bc4(0x4C);

            if (pVar1->vfunc_08() != 0) {
                switch (this->mUnk_04) {
                    case 0x1E:
                        switch (param1) {
                            case 0:
                                data_ov000_020b64b0[2] = 0;
                                this->mUnk_18          = -1;
                                data_ov000_020b62a8.func_ov019_020d08fc(2, data_ov019_020d1e2c);
                                break;
                            case 1:
                                data_ov000_020b62a8.func_ov019_020d08fc(2, data_ov019_020d1e34);
                                break;
                            case 2:
                                data_ov000_020b62a8.func_ov019_020d08fc(2, data_ov019_020d1e3c);
                                break;
                            case 3:
                                data_ov000_020b62a8.func_ov019_020d08fc(2, data_ov019_020d1e44);
                                break;
                            default:
                                this->mUnk_18 = -1;
                                break;
                        }
                        break;
                    case 0x3C:
                        break;
                    default:
                        if (data_ov000_020b62a8.mUnk_000 == 0) {
                            if (this->mUnk_1B == 0) {
                                pVar1       = data_ov000_020b504c.func_ov000_02067bc4(0x4c);
                                unk32 uVar1 = pVar1->mUnk_160.func_02022128();

                                if (uVar1 != 0) {
                                    data_ov000_020b5214.func_ov000_0206db44(0x1F);
                                    data_ov000_020b504c.func_ov000_02067e60(this->mUnk_1A, this->mUnk_10);
                                    this->mUnk_1B = 0;
                                    data_02049bd4.mUnk_04--;
                                    return 1;
                                }
                            } else {
                                data_ov000_020b504c.func_ov000_02067bc4(0x4c);
                                this->mUnk_1B = 1;
                                func_02021c2c();
                            }
                        }
                        break;
                }
            }

            return 0;
        }
    }

    this->mUnk_04++;
    return 1;
}

ARM unk32 UnkSystem1_ov019_Derived1::vfunc_20(unk32 param1, unk32 param2, unk32 param3) {
    bool isParam3 = false;

    if (param3 != 0) {
        isParam3 = true;
    }

    switch (param1) {
        case 0:
            return data_ov000_020b62a8.mUnk_20A;
        case 1:
            if (!data_ov000_020b62a8.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c90(param3));
        case 2:
            if (!data_ov000_020b62a8.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c4c(2, isParam3, param3));
        case 3:
            if (!data_ov000_020b62a8.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c4c(4, isParam3, param3));
        default:
            break;
    }

    return -1;
}

ARM unk32 UnkSystem1_ov019_Derived1::func_ov019_020c5540(bool param1, unk16 param2) {
    if (param2 >= 0) {
        if (param1 != 1 || this->mUnk_18 != 0) {
            this->mUnk_18                   = param2;
            unk32 sVar1                     = this->mUnk_18 + 1;
            UnkStruct_ov000_02067bc4 *pTest = data_ov000_020b504c.func_ov000_02067bc4(0);
            pTest->mUnk_008->mUnk_54        = sVar1;
        }

        return 1;
    }

    return 0;
}

ARM void UnkSystem1_ov019_Derived1::func_ov019_020c5590(unk32 param1, unk32 param2, unk32 param3) {
    data_02049bd4.mUnk_04++;
    UnkStruct_ov000_02067bc4::UnkStruct1 auStack_20(param3);
    this->mUnk_1A = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &auStack_20);
    data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021bec(1);
    data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10);
    func_02021c08();
}

ARM UnkSystem1_ov019_Derived1::~UnkSystem1_ov019_Derived1() {}

class Test1 {
public:
    unk8 mUnk_00[0x10];
    Test1();
};

class Test2 {
public:
    unk8 mUnk_00[0x6C];
    Test2();
};

//! TODO: update class on ghidra
ARM FileSelect_UnkClass2_Sub3::FileSelect_UnkClass2_Sub3() :
    mUnk_001C(0),
    mUnk_0020(3),
    mUnk_0024(-1),
    mUnk_005C(5, 0x8E, 0, 1, 0x8E, 0),
    mUnk_0100(-1, 0x89, 0, 0, 0x89, 0, 0x89, 0, 0x20012),
    // mUnk_03E0(NULL),
    // mUnk_03E4(NULL),
    mUnk_0488(0x43, 0x8A, 0, 0x0D, 0x8A, 0, 0x8A, 0, 0x20016),
    mUnk_07E4(0x44, 0x8A, 1, 3, 0x8A, 2, 0x8A, 2, 0x20014),
    mUnk_0AC4(0x45, 0x8A, 2, 4, 0x8A, 1, 0x8A, 1, 0x20015),
    mUnk_0DA4(0x46, 0x8B, 1, 0x0E, 0x8B, 1, 0x8B, 2, 0x20017),
    mUnk_11BC(0x47, 0x8B, 0, 0x0F, 0x8B, 0, 0x8B, 0, 0x20018),
    mUnk_15D4(0x48, 0x8B, 0, 0x10, 0x8B, 3, 0x8B, 3, 0x20019),
    mUnk_18EC(0x49, 0x8B, 3, 0x11, 0x8B, 2, 0x8B, 1, 0x2001A) {

    // ghidra lines 163-221

        // delete &mUnk_03E0;
    mUnk_03E0.Reset();
    // if (mUnk_03E0[0].mUnk_03E0 != mUnk_03E0[1].mUnk_03E0) {
    // }

    // mUnk_03E0[0] = new(1, 4) FileSelect_UnkClass2_Sub3::Dummy();

    this->mUnk_0010.func_020166cc(&this->mUnk_0100.mUnk_000.mUnk_04);
    this->mUnk_0100.mUnk_000.mUnk_2A = 0;
    this->mUnk_0488.mUnk_000.mUnk_2C = 1;
    this->mUnk_07E4.mUnk_000.mUnk_2C = 1;
    this->mUnk_0AC4.mUnk_000.mUnk_2C = 1;
    this->mUnk_005C.mUnk_2C          = 1;
    this->mUnk_0DA4.mUnk_000.mUnk_2C = 1;
    this->mUnk_11BC.mUnk_000.mUnk_2C = 1;
    this->mUnk_15D4.mUnk_000.mUnk_2C = 1;
    this->mUnk_18EC.mUnk_000.mUnk_2C = 1;

    // ghidra lines 163-221

    this->mUnk_11BC.mUnk_000.mUnk_2A = 0;
    this->mUnk_15D4.mUnk_000.mUnk_2A = 0;
    this->mUnk_18EC.mUnk_000.mUnk_2A = 0;
    // this->mUnk_15BA += data_ov019_020d24c0[3];
    // this->mUnk_15B8 += data_ov019_020d24c0[2];
    this->mUnk_0488.mUnk_000.mUnk_2A = 0;
    this->mUnk_07E4.mUnk_000.mUnk_2A = 0;
    this->mUnk_0AC4.mUnk_000.mUnk_2A = 0;
    this->mUnk_005C.mUnk_2A          = 0;
    this->mUnk_0DA4.mUnk_000.mUnk_2A = 0;

    // ghidra lines 233-239

    data_0204a110.func_020195a0("MSB:SelectBG.nclr", 0, 6, 0);
    Test1 aauStack_94[6];
    Test2 aauStack_48;
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT |= 0x00001C00;
    func_020249d4(&REG_BLDCNT, 4, 8, 0, 0x10);
    this->mUnk_0010.func_020166cc(&this->mUnk_005C.mUnk_04);
    this->func_ov019_020c63dc();
    this->func_ov019_020c6d10();
}

ARM FileSelect_UnkClass2_Sub3::~FileSelect_UnkClass2_Sub3() {}

// temp, to fix objdiff line numbers because of above ctor and dtor
#line 489

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c14() {}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c18() {
    this->mUnk_0010.func_020166cc(&this->mUnk_0488.mUnk_000.mUnk_04);
    this->mUnk_0010.func_020166cc(&this->mUnk_07E4.mUnk_000.mUnk_04);
    this->mUnk_0010.func_020166cc(&this->mUnk_0AC4.mUnk_000.mUnk_04);
}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c54() {
    this->mUnk_0010.func_020166cc(&this->mUnk_0DA4.mUnk_000.mUnk_04);
    this->mUnk_0010.func_020166cc(&this->mUnk_11BC.mUnk_000.mUnk_04);
    this->mUnk_0010.func_020166cc(&this->mUnk_15D4.mUnk_000.mUnk_04);
    this->mUnk_0010.func_020166cc(&this->mUnk_18EC.mUnk_000.mUnk_04);
}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c9c() {}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6ca0() {
    this->mUnk_0488.mUnk_000.mUnk_04.func_020166ac();
    this->mUnk_07E4.mUnk_000.mUnk_04.func_020166ac();
    this->mUnk_0AC4.mUnk_000.mUnk_04.func_020166ac();
}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6cd0() {
    this->mUnk_0DA4.mUnk_000.mUnk_04.func_020166ac();
    this->mUnk_11BC.mUnk_000.mUnk_04.func_020166ac();
    this->mUnk_15D4.mUnk_000.mUnk_04.func_020166ac();
    this->mUnk_18EC.mUnk_000.mUnk_04.func_020166ac();
}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6d08() {}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6d0c() {}

// non-matching
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6d10() {
    unk32 uVar1;
    UnknownCallback pcVar2;

    uVar1 = data_ov019_020d1edc[this->mUnk_001C].mUnk_04;

    if ((uVar1 & 1) == 0) {
        pcVar2 = data_ov019_020d1edc[this->mUnk_001C].mUnk_00;
    } else {
        pcVar2 = data_ov019_020d1edc[this->mUnk_001C + (uVar1 >> 1)].mUnk_00;
    }

    pcVar2();
}

ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6d48() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6e14() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6e3c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7000() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c717c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c71d0() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c71f0() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7210() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7274() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c72a0() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c757c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7768() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c77b8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7804() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7858() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7878() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c78ac() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7910() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7a44() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7c3c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7c48() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7c70() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7d3c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c7dc8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c80dc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c80e8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c80f4() {}
ARM void FileSelect_UnkClass2_Sub3::vfunc_08() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8290() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c82c4() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8454() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8524() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c854c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8aac() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8ad8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8b10() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8b48() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8b74() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c8c4c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c92dc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c9b28() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c9b70() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c9bcc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c9c18() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c9c70() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c9d88() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c9e08() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020ca6a4() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020ca80c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020ca844() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020ca87c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020ca8b4() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020ca940() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb180() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb1dc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb238() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb268() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb26c() {}
ARM void FileSelect_UnkClass2_Sub3::vfunc_10() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb2a8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb2dc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb324() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb4bc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb4c8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb4d4() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb4e0() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb4ec() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb4f8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb504() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb510() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb51c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb528() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb534() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb540() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb54c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb558() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb564() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb570() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb57c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb588() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb5b0() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb5bc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb5c8() {}
ARM void FileSelect_UnkClass2_Sub3::vfunc_18() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb5dc() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb664() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb6e8() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020cb718() {}
ARM unk32 FileSelect_UnkClass2_Sub3::func_ov019_020cb748() {}

ARM void FileSelect::func_ov019_020cb768() {}
ARM void FileSelect::func_ov019_020cbaec() {}
ARM void FileSelect::func_ov019_020cbb10() {}
ARM void FileSelect::func_ov019_020cbb40() {}
ARM void FileSelect::func_ov019_020cbb94() {}
ARM void FileSelect::func_ov019_020cbc0c() {}
ARM void FileSelect::func_ov019_020cc5ac() {}
ARM void FileSelect::func_ov019_020cc5c0() {}
ARM void FileSelect::func_ov019_020cc5f4() {}
ARM void FileSelect::func_ov019_020cc6ac() {}
ARM void FileSelect::func_ov019_020cc718() {}
ARM void FileSelect::func_ov019_020cc78c() {}
ARM void FileSelect::func_ov019_020cc85c() {}
ARM void FileSelect::func_ov019_020cc874() {}
ARM void FileSelect::func_ov019_020cc880() {}
ARM void FileSelect::func_ov019_020ccb18() {}
ARM void FileSelect::func_ov019_020ccc28() {}
ARM void FileSelect::func_ov019_020ccd40() {}
ARM void FileSelect::func_ov019_020ccd78() {}
ARM void FileSelect::func_ov019_020ccdb0() {}
ARM void FileSelect::func_ov019_020ccdf4() {}
ARM void FileSelect::func_ov019_020cce04() {}
ARM void FileSelect::func_ov019_020cce30() {}
ARM void FileSelect::func_ov019_020cd16c() {}
ARM void FileSelect::func_ov019_020cd41c() {}
ARM void FileSelect::func_ov019_020cd5f8() {}
ARM void FileSelect::func_ov019_020cd614() {}
ARM void FileSelect::func_ov019_020cd788() {}
ARM void FileSelect::func_ov019_020cd7f8() {}
ARM void FileSelect::func_ov019_020cd8d4() {}
ARM void FileSelect::func_ov019_020cdbdc() {}
ARM void FileSelect::func_ov019_020cdc0c() {}
ARM void FileSelect::func_ov019_020cdc38() {}
ARM void FileSelect::func_ov019_020cdc5c() {}
ARM void FileSelect::func_ov019_020cdc60() {}
ARM void FileSelect::func_ov019_020cdc8c() {}
ARM void FileSelect::func_ov019_020cdcb8() {}
ARM void FileSelect::func_ov019_020cde8c() {}
ARM void FileSelect::func_ov019_020cde9c() {}
ARM void FileSelect::func_ov019_020cdeac() {}
ARM void FileSelect::func_ov019_020ce314() {}
ARM void FileSelect::func_ov019_020ce414() {}
ARM void FileSelect::func_ov019_020ce4dc() {}
ARM void FileSelect::func_ov019_020ce61c() {}
ARM void FileSelect::func_ov019_020ce668() {}
ARM void FileSelect::func_ov019_020ce6c8() {}
ARM void FileSelect::func_ov019_020ce704() {}
ARM void FileSelect::func_ov019_020ce74c() {}
ARM void FileSelect::func_ov019_020ce7a0() {}
ARM void FileSelect::func_ov019_020ce7d4() {}
ARM void FileSelect::func_ov019_020ce820() {}
ARM void FileSelect::func_ov019_020ce830() {}
ARM void FileSelect::func_ov019_020ce844() {}
ARM void FileSelect::func_ov019_020ce9a4() {}
ARM void FileSelect::func_ov019_020cea04() {}
ARM void FileSelect::func_ov019_020cea6c() {}
ARM void FileSelect::func_ov019_020cea70() {}
ARM void FileSelect::func_ov019_020cea74() {}
ARM void FileSelect::func_ov019_020ceaac() {}
ARM void FileSelect::func_ov019_020cebcc() {}
ARM void FileSelect::func_ov019_020cec64() {}
ARM void FileSelect::func_ov019_020cef04() {}
ARM void FileSelect::func_ov019_020cef6c() {}
ARM void FileSelect::func_ov019_020cefe4() {}
ARM void FileSelect::func_ov019_020ceff8() {}
ARM void FileSelect::func_ov019_020cf00c() {}
ARM void FileSelect::func_ov019_020cf130() {}
ARM void FileSelect::func_ov019_020cf168() {}
ARM void FileSelect::func_ov019_020cf21c() {}

class UnkStruct2 {
public:
    /* 00 */ unk8 mUnk_00[0x10];
    /* 10 */

    UnkStruct2(const char *path, unk32 param2);
    ~UnkStruct2();
    void func_020154ec(void *param1);
};

class UnkStruct3 {
public:
    unk32 mUnk_00;

    UnkStruct3() {};
    UnkStruct3(const char *param1, const char *param2, const char *param3);
    ~UnkStruct3() {};

    static void func_0200a7b0(unk32 param1, void *param2, void *param3, void *param4, unk32 param5, unk32 param6, unk32 param7,
                              unk32 param8);
};

ARM FileSelect_UnkClass2_Sub4::FileSelect_UnkClass2_Sub4() /* :
    mUnk_001C(0),
    mUnk_0020(0),
    mUnk_0028(1) */
{
    this->mUnk_0EB8.func_02015410("Screen/Bg/Tape_a.bin", 1);
    this->mUnk_0EC4.func_02015410("Screen/Bg/Tape_b.bin", 1);
    this->mUnk_0ED0.func_02015410("Screen/Bg/Tape_c.bin", 1);
    this->mUnk_0EDC.func_02015410("Screen/Bg/Tape_d.bin", 1);
    this->mUnk_0EE8.func_02015410("Screen/Bg/Tape_e.bin", 1);

    this->mUnk_0EF4.func_020171e4();
    this->mUnk_0F30.func_020171e4();
    this->mUnk_0F6C.func_020171e4();
    this->mUnk_0FA8.func_020171e4();
    this->mUnk_0FE4.func_020171e4();

    this->mUnk_0EB8.func_02015460("TPA", data_ov019_020fb8cc, sizeof(data_ov019_020fb8cc));
    this->mUnk_0EC4.func_02015460("TPB", data_ov019_020edccc, sizeof(data_ov019_020edccc));
    this->mUnk_0ED0.func_02015460("TPC", data_ov019_020d24cc, sizeof(data_ov019_020d24cc));
    this->mUnk_0EDC.func_02015460("TPD", data_ov019_020e00cc, sizeof(data_ov019_020e00cc));
    this->mUnk_0EE8.func_02015460("TPE", data_ov019_021094cc, sizeof(data_ov019_021094cc));

    func_020275e8();

    this->mUnk_0EF4.func_02017520("TPA:Tape_a", "TPA:Tape_a", 0);
    this->mUnk_0F30.func_02017520("TPB:Tape_b", "TPB:Tape_b", 0);
    this->mUnk_0F6C.func_02017520("TPC:Tape_c", "TPC:Tape_c", 0);
    this->mUnk_0FA8.func_02017520("TPD:Tape_d", "TPD:Tape_d", 0);
    this->mUnk_0FE4.func_02017520("TPE:Tape_e", "TPE:Tape_e", 0);

    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    REG_DISPCNT_SUB |= 0x00001F00;

    {
        UnkStruct2 auStack_28("Screen/Bg/Cover.bin", 1);
        auStack_28.func_020154ec(&data_ov019_020d23b0);

        func_020275e8();

        {
            UnkStruct3 uStack_64("CVR:Cover", "CVR:Cover", "CVR:Tape");
            unk32 uStack_60;
            unk32 uStack_5c;

            UnkStruct3::func_0200a7b0(4, &uStack_64, &uStack_60, &uStack_5c, 0, 0, 6, 1);

            unk32 auStack_38[4];
            func_0201568c(auStack_38);

            unk32 auStack_48[4];
            func_0201568c(auStack_48);

            unk32 auStack_58[4];
            func_0201568c(auStack_58);
        }

        {
            UnkStruct3 uStack_a0("CVR:Line", NULL, NULL);
            unk32 uStack_9c;
            unk32 uStack_98;

            UnkStruct3::func_0200a7b0(7, &uStack_a0, &uStack_9c, &uStack_98, 0, 0, 0, 1);

            unk32 auStack_74[4];
            func_0201568c(auStack_74);

            unk32 auStack_84[4];
            func_0201568c(auStack_84);

            unk32 auStack_94[4];
            func_0201568c(auStack_94);
        }
    }

    this->func_ov019_020cf73c(1, 0);
    this->func_ov019_020cf73c(2, 1);
}

ARM void FileSelect_UnkClass2_Sub4::vfunc_08() {
    // this->mUnk_0024 = this->mUnk_0020;
    // this->mUnk_0020 += 0x800;

    // REG_BG1HOFS_SUB = ((this->mUnk_0020 + 0x800) >> 12) & 0x1FF;
    // REG_BG2HOFS_SUB = (((this->mUnk_0020 + 0x800) >> 12) + 0x100) & 0x1FF;
    // REG_BG3HOFS_SUB = (((this->mUnk_0020 + 0x800) >> 12) / 2) & 0x1FF;

    // if (!(((this->mUnk_0020 + 0x800) >> 12) % 256) && (((this->mUnk_0024 + 0x800) >> 12) % 256)) {
    //     switch (this->mUnk_001C) {
    //         case 0:
    //             this->mUnk_001C = 1;
    //             this->func_ov019_020cf73c(this->mUnk_0028, 2);
    //             break;
    //         case 1:
    //             this->mUnk_001C = 2;
    //             this->func_ov019_020cf73c(this->mUnk_0028, 3);
    //             break;
    //         case 2:
    //             this->mUnk_001C = 3;
    //             this->func_ov019_020cf73c(this->mUnk_0028, 4);
    //             break;
    //         case 3:
    //             this->mUnk_001C = 4;
    //             this->func_ov019_020cf73c(this->mUnk_0028, 0);
    //             break;
    //         case 4:
    //             this->mUnk_001C = 0;
    //             this->func_ov019_020cf73c(this->mUnk_0028, 1);
    //             break;
    //         default:
    //             break;
    //     }

    //     if (this->mUnk_0028 == 2) {
    //         this->mUnk_0028 = 1;
    //         this->mUnk_0020 = 0;
    //     } else {
    //         this->mUnk_0028 = 2;
    //         this->mUnk_0020 += 0x800;
    //     }
    // }

    // this->mUnk_002C.vfunc_00();
}

ARM void FileSelect_UnkClass2_Sub4::func_ov019_020cf73c(unk32 param1, unk32 param2) {
    unk32 arg0;
    unk32 arg7;
    unk32 arg8;

    switch (param1) {
        case 1:
            arg0 = 5;
            arg7 = 4;
            arg8 = 5;
            break;
        case 2:
            arg0 = 6;
            arg7 = 2;
            arg8 = 2;
            break;
        default:
            //! @bug: arg0, arg7 and arg8 can be used uninitialized.
            break;
    }

    switch (param2) {
        case 0:
            UnkStruct3::func_0200a7b0(arg0, this->mUnk_0EF4.mUnk_00, this->mUnk_0EF4.mUnk_04, this->mUnk_0EF4.mUnk_08, 0, 0,
                                      arg7, arg8);
            break;
        case 1:
            UnkStruct3::func_0200a7b0(arg0, this->mUnk_0F30.mUnk_00, this->mUnk_0F30.mUnk_04, this->mUnk_0F30.mUnk_08, 0, 0,
                                      arg7, arg8);
            break;
        case 2:
            UnkStruct3::func_0200a7b0(arg0, this->mUnk_0F6C.mUnk_00, this->mUnk_0F6C.mUnk_04, this->mUnk_0F6C.mUnk_08, 0, 0,
                                      arg7, arg8);
            break;
        case 3:
            UnkStruct3::func_0200a7b0(arg0, this->mUnk_0FA8.mUnk_00, this->mUnk_0FA8.mUnk_04, this->mUnk_0FA8.mUnk_08, 0, 0,
                                      arg7, arg8);
            break;
        case 4:
            UnkStruct3::func_0200a7b0(arg0, this->mUnk_0FE4.mUnk_00, this->mUnk_0FE4.mUnk_04, this->mUnk_0FE4.mUnk_08, 0, 0,
                                      arg7, arg8);
            break;
        default:
            break;
    }
}

ARM void FileSelect_UnkClass2_Sub4::vfunc_10() {
    this->mUnk_0004[0].mUnk_002C.vfunc_04();
}

ARM void FileSelect_UnkClass2_Sub4::func_ov019_020cf870() {}

// non-matching
ARM void FileSelect_UnkClass2_Sub4::func_ov019_020cf9fc() {
    int i;

    for (i = 0; i < 0x1E; i++) {
        // FileSelect_UnkClass2_Sub4::Sub4* pVar6 = this->mUnk_0004[i];

        // pVar6->func_ov000_020609c4();

        // if (pVar6->func_ov000_02060af8() != 0) {
        //     pVar6->func_ov000_02060b64();
        //     // this->mUnk_0E14[i].one = (u16)gRandom.Next(0, 256);
        //     // this->mUnk_0E14[i].two = (u16)gRandom.Next(0, 192);
        // }
    }
}

ARM void FileSelect_UnkClass2_Sub4::func_ov019_020cfad0() {
    for (int i = 0; i < 0x1E; i++) {
        data_0204af1c.func_0201aad0(&this->mUnk_0004[i], &this->mUnk_0E14[i], 1, 0);
    }
}

ARM FileSelect_UnkClass2_Sub4::~FileSelect_UnkClass2_Sub4() {}

ARM FileSelect_UnkClass2_Sub5::FileSelect_UnkClass2_Sub5(FileSelect_UnkClass2_Sub7 *param1,
                                                         FileSelect_UnkClass2_Sub3 *param2) {}
ARM void FileSelect::func_ov019_020cfc68() {}
ARM void FileSelect::func_ov019_020cfc7c() {}
ARM void FileSelect::func_ov019_020cfc98() {}
ARM void FileSelect::func_ov019_020cfce8() {}
ARM void FileSelect::func_ov019_020cfd4c() {}
ARM void FileSelect::func_ov019_020cfd50() {}
ARM void FileSelect::func_ov019_020cfddc() {}
ARM void FileSelect::func_ov019_020cfdec() {}
ARM void FileSelect::func_ov019_020cfe50() {}
ARM void FileSelect::func_ov019_020cfefc() {}

ARM FileSelect_UnkClass2_Sub6::FileSelect_UnkClass2_Sub6(FileSelect_UnkClass2_Sub7 *param1,
                                                         FileSelect_UnkClass2_Sub3 *param2) {
    this->mUnk_10 = param2;
    this->mUnk_14 = param1;
    this->mUnk_18 = param1;
    data_0204a088->func_ov000_020611dc(this, 0x12);
}

ARM FileSelect_UnkClass2_Sub6::~FileSelect_UnkClass2_Sub6() {
    if (data_ov019_020d24c8 != NULL) {
        FileSelect_UnkClass2_Sub6::func_ov019_020d02f4();
    }
}

ARM void FileSelect_UnkClass2_Sub6::vfunc_08(unk32 param1) {
    if (param1 == 0) {
        this->mUnk_0C = 0;
        this->mUnk_10->func_ov019_020cb6e8();
        data_0204a110.func_0201967c(0, 0x13C, 0x2D, 0, 4);
    }
}

ARM void FileSelect_UnkClass2_Sub6::vfunc_0C(unk32 param1) {
    if (param1 == 0) {
        switch (this->mUnk_0C) {
            case 0:
                if (this->mUnk_10->func_ov019_020cb748() != 0 && !data_0204a110.mUnk_DE8->UnkCheck1()) {
                    data_0204a088->func_ov000_02061224();
                    this->mUnk_0C = 1;
                }
                break;
            case 1:
                data_0204a088->func_ov000_02061230();
                break;
            default:
                break;
        }
    }
}

ARM void FileSelect_UnkClass2_Sub6::vfunc_14() {}

extern unk32 data_020499e0[];
ARM void FileSelect_UnkClass2_Sub6::vfunc_10() {
    data_0204999c_2.func_02013014();
    data_0204999c_2.mUnk_60 = 0xD6D8;
    data_ov000_020b50c0.func_ov000_0206a758();
    this->mUnk_10->mUnk_0004.func_020166ac();
    this->mUnk_10->func_ov019_020cb664();
    data_0204a110.func_02019538(0x26, 1);
    this->mUnk_18->func_ov019_020cc5c0(this->mUnk_10->mUnk_0024);

    UnkStruct_ov019_020d24c8 *pVar1 = data_ov019_020d24c8;
    this->mUnk_14->mUnk_04.func_020166cc(data_ov019_020d24c8 == NULL ? data_ov019_020d24c8 : data_ov019_020d24c8 + 1);
    pVar1->vfunc_18();

    data_0204999c_2.func_02013070();
}

ARM void FileSelect_UnkClass2_Sub6::vfunc_18(unk32 param1) {
    if (param1 == 0) {
        this->mUnk_0C = 1;
        data_ov019_020d24c8->func_ov019_020cc85c(2, 1);
        data_0204aeec.func_0201e698();
    }
}

ARM void FileSelect_UnkClass2_Sub6::vfunc_1C(unk32 param1) {
    if (param1 == 0) {
        switch (this->mUnk_0C) {
            case 1:
                if (data_ov019_020d24c8->func_ov019_020cc874() != 0 && !data_0204a110.mUnk_DE8->UnkCheck1()) {
                    data_0204a088->func_ov000_02061224();
                    this->mUnk_0C = 0;
                }
                break;
            case 0:
                if (this->mUnk_10->func_ov019_020cb748() != 0) {
                    data_0204a088->func_ov000_02061230();
                }
                break;
            default:
                break;
        }
    }
}

ARM void FileSelect_UnkClass2_Sub6::vfunc_20() {
    data_0204999c_2.func_02013014();
    data_0204999c_2.mUnk_60 = 0xD6D8;
    this->func_ov019_020d02f4();
    data_0204a110.func_02019538(0x25, 1);

    FileSelect_UnkClass2_Sub3 *temp_r4 = this->mUnk_10;
    this->mUnk_14->mUnk_04.func_020166cc(temp_r4 == NULL ? temp_r4 : (FileSelect_UnkClass2_Sub3 *) ((unk32 *) temp_r4 + 1));
    temp_r4->vfunc_18();

    this->mUnk_10->func_ov019_020cb5dc();
    this->mUnk_10->func_ov019_020cb718();
    data_ov000_020b50c0.func_ov000_0206a77c();
    data_0204999c_2.func_02013070();
}

ARM void FileSelect_UnkClass2_Sub6::func_ov019_020d02f4() {
    if (data_ov019_020d24c8 != NULL) {
        data_ov019_020d24c8->vfunc_04();
    }
}

ARM UnkSystem1_ov019_Derived2::UnkSystem1_ov019_Derived2() :
    UnkSystem1_ov019_2(0, 0) {
    this->mUnk_12 = -1;
    this->mUnk_13 = 0;
    this->mUnk_14 = 0;
    this->mUnk_15 = 0;
}

ARM void UnkSystem1_ov019_Derived2::vfunc_08(unk32 param1) {
    UnkStruct_ov000_02067bc4::UnkStruct1 stack;
    this->mUnk_06 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &stack);
}

extern unk32 data_ov000_020b64b8;

// non-matching
ARM unk32 UnkSystem1_ov019_Derived2::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    unk32 ret = 0;

    if (param1 != 0 && param1 != 1) {
        this->mUnk_14 = param1 != 2;
    } else {
        this->mUnk_14 = 0;

        if (this->mUnk_04 <= 0) {
            data_02049bd4.mUnk_04++;
            UnkStruct_ov000_02067bc4::UnkStruct1 stack1;
            this->mUnk_13 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &stack1);
            data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021bec(1);
            func_02021c08();
        } else if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->vfunc_08() != 0) {
            if (this->mUnk_04 == 0x0F) {
                data_ov000_020b64c0->func_ov000_020d1aac(this->mUnk_12, &data_ov003_020ba740->mUnk_9D0);
                data_ov000_020b64c0->mUnk_2602[this->mUnk_12 * 0x2700] = param1;
                data_ov000_020b62a8.func_ov019_020d09dc(this->mUnk_12);
            } else if (this->mUnk_04 > 0x1E) {
                if (data_ov000_020b64b8 != 0 ? 0 : 1) {
                    if (this->mUnk_15 != 0) {
                        if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->mUnk_160.func_02022128() != 0) {
                            data_ov000_020b5214.func_ov000_0206db44(0x1F);
                            data_ov000_020b504c.func_ov000_02067e60(this->mUnk_13, this->mUnk_10);
                            this->mUnk_15 = 0;
                            ret           = 1;
                            data_02049bd4.mUnk_04--;
                        }
                    } else {
                        this->mUnk_15 = 1;
                        data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10);
                        func_02021c2c();
                    }
                } else {
                    ret = 0;
                }
            }
        }

        this->mUnk_04++;
    }

    return ret;
}

ARM UnkSystem1_ov019_Derived2::~UnkSystem1_ov019_Derived2() {}

ARM UnkSystem1_ov019_Derived3::UnkSystem1_ov019_Derived3() :
    UnkSystem1_ov019_3(0, 0) {
    this->mUnk_12 = -1;
    this->mUnk_13 = 0;
    this->mUnk_14 = 0;
    this->mUnk_18 = -1;
    this->mUnk_1C = 0;
    this->mUnk_20 = 0;
    this->mUnk_21 = 0;
}

ARM void UnkSystem1_ov019_Derived3::func_ov019_020d05fc() {
    this->mUnk_21 = 0;
    this->UnkSystem1_ov000_Base::vfunc_04();
}

ARM void UnkSystem1_ov019_Derived3::func_ov019_020d0610(unk32 param1) {
    UnkStruct_ov000_02067bc4::UnkStruct1 stack;
    this->mUnk_06 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &stack);
}

ARM void UnkSystem1_ov019_Derived3::func_ov019_020d0658() {}

ARM UnkSystem1_ov019_Derived3::~UnkSystem1_ov019_Derived3() {}

typedef void (*SomeCallback)(void);
class UnkStruct_ov000_020b64e4 {
public:
    SomeCallback callback;
};
extern UnkStruct_ov000_020b64e4 data_ov000_020b64e4;
extern unk32 data_ov000_020b64e8;

// non-matching
ARM void UnkStruct_ov000_020b62a8::func_ov019_020d086c(u16 param1) {
    func_02030d48(data_ov000_020b62a8.mUnk_204.mUnk_00);
    SomeCallback callback = data_ov000_020b64e4.callback;

    if (data_ov000_020b64e8 & 1) {
        // callback = data_ov000_020b62a8.mUnk_218[data_ov000_020b64e8 >> 1][data_ov000_020b64e4];
    }

    callback();
    data_ov000_020b62a8.mUnk_20C = func_02030cfc();
    func_02030d58(data_ov000_020b62a8.mUnk_204.mUnk_00);

    if (data_ov000_020b62a8.mUnk_20C != 0) {
        data_ov000_020b62a8.mUnk_214 = data_ov000_020b62a8.mUnk_210;
    }

    if (data_ov000_020b62a8.mUnk_210 != 2) {
        data_ov000_020b62a8.mUnk_210 = 0;
    } else {
        func_ov000_020a0b58();
    }
}

ARM void UnkStruct_ov000_020b62a8::func_ov019_020d08fc(unk32 param1, UnkStruct_TwoPtrs param2) {
    this->mUnk_23C = param2;

    if (param1 == 2) {
        this->func_ov000_020a0b2c(UnkStruct_ov000_020b62a8::func_ov019_020d086c, 0);
    } else {
        this->mUnk_210 = 1;
        data_02049b80.func_02013ecc(0, UnkStruct_ov000_020b62a8::func_ov019_020d086c, 0);
    }
}

ARM bool UnkStruct_ov000_020b62a8::func_ov019_020d0964() {
    this->mUnk_218 = new(1, 4) UnkStruct_ov000_020b62a8_Sub1();
    data_02049b80.func_02013ee8(0, 1);

    if (this->mUnk_20A == 0) {
        this->func_ov019_020d08fc(1, data_ov019_020d24a0);
        return true;
    }

    return false;
}

ARM void UnkStruct_ov000_020b62a8::func_ov019_020d09dc(unk32 param1) {
    this->mUnk_218->mUnk_04E0A = param1;
    this->func_ov019_020d08fc(2, data_ov019_020d24a8);
}

ARM void UnkStruct_ov000_020b62a8::func_ov019_020d0a04(unk32 param1) {
    this->mUnk_218->mUnk_04E0A = param1;
    this->func_ov019_020d08fc(2, data_ov019_020d24b0);
}

ARM void UnkStruct_ov000_020b62a8::func_ov019_020d0a2c(u16 param1) {
    data_02049bd4.mUnk_04++;
    data_ov000_020b62a8.mUnk_218->mUnk_04E0A = param1;
    func_02030d48(data_ov000_020b62a8.mUnk_204.mUnk_00);
    data_ov000_020b62a8.mUnk_210 = 1;
    data_ov000_020b62a8.mUnk_218->func_ov019_020d1634();
    data_ov000_020b62a8.mUnk_20C = func_02030cfc();

    if (data_ov000_020b62a8.mUnk_20C != 0) {
        data_ov000_020b62a8.mUnk_214 = data_ov000_020b62a8.mUnk_210;
        return;
    }

    data_ov000_020b62a8.mUnk_210 = 2;
    data_ov000_020b62a8.mUnk_218->func_ov019_020d16d0();
    data_ov000_020b62a8.mUnk_20C = func_02030cfc();

    if (data_ov000_020b62a8.mUnk_20C != 0) {
        data_ov000_020b62a8.mUnk_214 = data_ov000_020b62a8.mUnk_210;
    }

    func_02030d58(data_ov000_020b62a8.mUnk_204.mUnk_00);
    data_ov000_020b62a8.mUnk_210 = 0;
    data_02049bd4.mUnk_04--;
}

ARM void UnkStruct_ov000_020b62a8::func_ov019_020d0ae0(unk32 param1) {
    data_02049b80.func_02013ecc(0, UnkStruct_ov000_020b62a8::func_ov019_020d0a2c, param1);
}
