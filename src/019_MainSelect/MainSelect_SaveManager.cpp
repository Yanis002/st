#include "Unknown/UnkStruct_ov000_020b62a8.hpp"

#include <wstring.h>

extern "C" {
unk32 func_020312b8(void *src, uintptr_t dest, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                    unk32 param8, unk32 param9);
bool func_ov000_020a0a90(size_t param1, void *param2, size_t param3);
unk32 func_020328c8(void *, void *, size_t);
};

static size_t data_ov019_020d1bd4[5]; // contains sizes (0xE00, 0x80, etc...)
static unk32 data_ov019_020d1be8[5]; // contains numbers 0x0000, 0x1C00, 0x1D00, 0x2500 and 0x2600

ARM UnkStruct_ov000_020b62a8_Sub1::UnkStruct_ov000_020b62a8_Sub1() :
    mUnk_04E08(0),
    mUnk_04E0A(0) {}

ARM unk16 UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d0c4c(unk32 param1, unk32 param2) {
    for (s16 i = 0; i < MAX_SAVE_FILES; i++) {
        if ((this->mUnk_04E00[param2].mUnk_00[i] & (1 << param1)) != 0) {
            return i;
        }
    }

    return -1;
}

ARM unk16 UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d0c90(unk32 param1, unk32 param2, unk32 param3) {
    unk16 var_r7;
    unk16 var_r8;
    bool isParam1;

    // that's the best use of a switch I have ever seen
    switch (param1) {
        case 0:
            isParam1 = false;
            break;
        default:
            isParam1 = true;
            break;
    }

    var_r8 = this->func_ov019_020d0c4c(0, isParam1);
    if (var_r8 >= 0 && param1 == 2 && var_r8 != this->func_ov019_020d0c4c(0, 0)) {
        var_r8 = -1;
    }

    var_r7 = this->func_ov019_020d0c4c(1, isParam1);
    if (var_r7 >= 0 && param1 == 2 && var_r7 != this->func_ov019_020d0c4c(1, 0)) {
        var_r7 = -1;
    }

    if (var_r8 >= 0) {
        if (var_r7 >= 0) {
            if (var_r8 >= var_r7) {
                var_r8 = var_r7;
            }

            return var_r8;
        }

        return var_r8;
    }

    return var_r7;
}

struct stack_struct {
    unk32 mUnk_00;
    unk16 mUnk_04;
    u16 mUnk_06;
    unk32 mUnk_08;
    unk32 mUnk_0C;
    unk32 mUnk_10;
    unk32 mUnk_14;
    unk32 mUnk_18;
    unk32 mUnk_1C;
};

ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d0d50() {
    stack_struct stack[MAX_SAVE_FILES];

    for (int i = 0; i < 2; i++) {
        this->mSaveFiles[i].func_ov000_020a1124();
        this->func_ov019_020d0e18(i);
    }

    stack[0].mUnk_00 = 0x0C1D2E3F;
    stack[0].mUnk_1C = 0xF4E5D6C7;
    stack[0].mUnk_04 = 0x1A;
    Fill16(0, &stack[0].mUnk_06, 0x16);

    stack[1].mUnk_00 = 0x0C1D2E3F;
    stack[1].mUnk_1C = 0xF4E5D6C7;
    stack[1].mUnk_04 = 0x1A;
    Fill16(0, &stack[1].mUnk_06, 0x16);

    func_020312b8(stack, sizeof(SaveFileData) * 2, sizeof(stack_struct) * 2, 0, 0, 0, 7, 10, 2);
}

// https://decomp.me/scratch/gJJbb
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d0e18(unk32 param1) {
    size_t offset = param1 * sizeof(SaveFileData);
    Save *puVar3  = &this->mSaveFiles[param1];

    if (!func_ov000_020a0a90(offset, &puVar3->mSaveInfo, sizeof(puVar3->mSaveInfo))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(Save, mTreasures), &puVar3->mTreasures, sizeof(puVar3->mTreasures))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(Save, mUnk_1D00), &puVar3->mUnk_1D00, sizeof(puVar3->mUnk_1D00))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(Save, mUnk_2500), &puVar3->mUnk_2500, sizeof(puVar3->mUnk_2500))) {
        return;
    }

    func_ov000_020a0a90(offset + offsetof(Save, mUnk_2600), &puVar3->mUnk_2600, sizeof(puVar3->mUnk_2600));
}

ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d0ea8() {}
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d1108() {}
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d127c() {}

// https://decomp.me/scratch/lmC67
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d13b8() {
    u16 index = this->mUnk_04E0A;

    this->mSaveFiles[this->mUnk_04E0A].mUnk_2600.func_ov019_020d1400();

    func_ov000_020a0a90(index * sizeof(SaveFileData) + offsetof(Save, mUnk_2600),
                        &this->mSaveFiles[this->mUnk_04E0A].mUnk_2600, sizeof(this->mSaveFiles->mUnk_2600));
}

ARM void Save::Sub7::func_ov019_020d1400() {
    this->mUnk_00[0].mUnk_7E =
        func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &this->mUnk_00, sizeof(Save::Sub7::Sub17) - sizeof(u16));
    Copy256(&this->mUnk_00[0], &this->mUnk_00[1], sizeof(Save::Sub7::Sub17));
}

// non-matching
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d1434() {
    size_t offset = this->mUnk_04E0A * sizeof(SaveFileData);

    this->mSaveFiles[this->mUnk_04E0A].mSaveInfo.func_ov019_020d14fc();
    if (!func_ov000_020a0a90(offset + offsetof(SaveInfo, mSaveInfoData), &this->mSaveFiles[this->mUnk_04E0A].mSaveInfo,
                             sizeof(this->mSaveFiles[this->mUnk_04E0A].mSaveInfo))) {
        return;
    }

    this->mSaveFiles[this->mUnk_04E0A].mUnk_1D00.func_ov019_020d14c0();
    if (!func_ov000_020a0a90(offset + offsetof(Save, mUnk_1D00), &this->mSaveFiles[this->mUnk_04E0A].mUnk_1D00,
                             sizeof(this->mSaveFiles[this->mUnk_04E0A].mUnk_1D00))) {
        return;
    }

    this->func_ov019_020d13b8();
}

ARM void Save::Sub5::func_ov019_020d14c0() {
    this->mUnk_000[0].mUnk_3FE =
        func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &this->mUnk_000, offsetof(Save::Sub5::Sub15, mUnk_3FE));
    Copy256(&this->mUnk_000[0], &this->mUnk_000[1], sizeof(Save::Sub5::Sub15));
}

ARM void SaveInfo::func_ov019_020d14fc() {
    this->mSaveInfoData[0].mUnk_DFE = func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &this->mSaveInfoData[0].mUnk_000,
                                                    offsetof(SaveInfo::SaveInfoData, mUnk_DFE));
    Copy256(&this->mSaveInfoData[0], &this->mSaveInfoData[1], sizeof(SaveInfo::SaveInfoData));
}

//! TODO: weird sizeof
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d1538() {
    size_t offset;

    offset = this->mUnk_04E0A * sizeof(SaveFileData);

    this->mSaveFiles[this->mUnk_04E0A].mTreasures.func_ov019_020d1600();
    if (!func_ov000_020a0a90(offset + offsetof(Save, mTreasures), &this->mSaveFiles[this->mUnk_04E0A].mTreasures, 0x1C00)) {
        return;
    }

    this->mSaveFiles[this->mUnk_04E0A].mUnk_2500.func_ov019_020d15cc();
    if (!func_ov000_020a0a90(offset + offsetof(Save, mUnk_2500), &this->mSaveFiles[this->mUnk_04E0A].mUnk_2500, 0x800)) {
        return;
    }

    this->func_ov019_020d1434();
}

ARM void Save::Sub6::func_ov019_020d15cc() {
    this->mUnk_00[0].mUnk_7E =
        func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &this->mUnk_00, offsetof(Save::Sub6::Sub16, mUnk_7E));
    Copy256(&this->mUnk_00[0], &this->mUnk_00[1], sizeof(Save::Sub6::Sub16));
}

ARM void SaveTreasures::func_ov019_020d1600() {
    this->mTreasureData[0].mUnk_7E =
        func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &this->mTreasureData, offsetof(SaveTreasures::TreasureData, mUnk_7E));
    Copy256(&this->mTreasureData[0], &this->mTreasureData[1], sizeof(SaveTreasures::TreasureData));
}

// https://decomp.me/scratch/ibnQS
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d1634() {
    Save *pSlot   = &this->mSaveFiles[this->mUnk_04E0A];
    size_t offset = this->mUnk_04E0A * sizeof(SaveFileData);

    for (int i = 0; i < 120; i++) {
        if (pSlot->mSaveInfo.mSaveInfoData[0].mUnk_C84.mUnk_00[(u32) i >> 5] & (1 << (i & 0x1F))) {
            u32 dest = (i << 12) + offsetof(SaveFileData, mUnk_02700);
            u8 *src  = &this->mUnk_04E0C[i << 12];
            func_020312b8(src, offset + dest, 0x1000, 0, 0, 0, 6, 1, 0);
        }
    }
}

// non-matching
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d16d0() {
    u16 slot    = this->mUnk_04E0A == 0;
    Save *pSub2 = &this->mSaveFiles[this->mUnk_04E0A];
    Save *pSub3 = &this->mSaveFiles[slot];

    Copy256(&pSub2->mSaveInfo, &pSub3->mSaveInfo, sizeof(SaveInfo));
    Copy256(&pSub2->mTreasures, &pSub3->mTreasures, sizeof(SaveTreasures));
    Copy256(&pSub2->mUnk_2600, &pSub3->mUnk_2600, sizeof(Save::Sub7));

    pSub3->mUnk_1D00.func_ov000_020a12a0();
    Copy256(&pSub2->mUnk_1D00, &pSub3->mUnk_1D00, sizeof(Save::Sub5));

    Fill256(0, &pSub3->mUnk_2500, sizeof(Save::Sub6));
    Copy256(&pSub2->mUnk_2500, &pSub3->mUnk_2500, sizeof(Save::Sub6));

    this->mUnk_04E0A = slot;
    this->func_ov019_020d1538();

    for (int i = 0; i < NUM_UNK_BLOCKS; i++) {
        if (pSub2->mSaveInfo.mSaveInfoData[i >> 5].mUnk_C84.mUnk_00[0] & (1 << (i & 0x1F))) {
            func_ov000_020a0a90(slot * sizeof(SaveFileData) + i * SIZE_UNK_BLOCK + offsetof(SaveFileData, mUnk_02700),
                                &this->mUnk_04E0C[i * SIZE_UNK_BLOCK], SIZE_UNK_BLOCK);
        }
    }
}

ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d17e0() {
    for (int i = 0; i < MAX_SAVE_FILES; i++) {
        this->func_ov019_020d1808(i);
    }
}

struct stack_struct2 {
    u16 mUnk_00;
    u16 mUnk_02;
    bool mUnk_04;
};

// non-matching
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d1808(unk32 param1) {
    Save *pSub2 = &this->mSaveFiles[param1];
    stack_struct2 stack1[5];

    if (func_020312b8(pSub2, param1 * sizeof(SaveFileData), 0x2700, 0, 0, 0, 6, 1, 0) == 0) {
        return;
    }

    for (int i = 0; i < COUNT_DATA; i++) {
        stack1[SaveDataIndex_SaveInfo].mUnk_00 =
            func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &pSub2->mSaveInfo.mSaveInfoData[i],
                          sizeof(SaveInfo::SaveInfoData) - sizeof(u16));
        stack1[SaveDataIndex_SaveInfo].mUnk_04 =
            pSub2->mSaveInfo.mSaveInfoData[i].mUnk_DFE == stack1[SaveDataIndex_SaveInfo].mUnk_00;

        stack1[SaveDataIndex_Treasures].mUnk_00 =
            func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &pSub2->mTreasures.mTreasureData[i],
                          sizeof(SaveTreasures::TreasureData) - sizeof(u16));
        stack1[SaveDataIndex_Treasures].mUnk_04 =
            pSub2->mTreasures.mTreasureData[i].mUnk_7E == stack1[SaveDataIndex_Treasures].mUnk_00 ? true : false;

        stack1[SaveDataIndex_02].mUnk_00 = func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &pSub2->mUnk_1D00.mUnk_000[i],
                                                         sizeof(Save::Sub5::Sub15) - sizeof(u16));
        stack1[SaveDataIndex_02].mUnk_04 =
            pSub2->mUnk_1D00.mUnk_000[i].mUnk_3FE == stack1[SaveDataIndex_02].mUnk_00 ? true : false;

        stack1[SaveDataIndex_03].mUnk_00 = func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &pSub2->mUnk_2500.mUnk_00[i],
                                                         sizeof(Save::Sub6::Sub16) - sizeof(u16));
        stack1[SaveDataIndex_03].mUnk_04 =
            pSub2->mUnk_2500.mUnk_00[i].mUnk_7E == stack1[SaveDataIndex_03].mUnk_00 ? true : false;

        stack1[SaveDataIndex_04].mUnk_00 = func_020328c8(&data_ov000_020b62a8.mUnk_000[4], &pSub2->mUnk_2600.mUnk_00[i],
                                                         sizeof(Save::Sub7::Sub17) - sizeof(u16));
        stack1[SaveDataIndex_04].mUnk_04 =
            pSub2->mUnk_2600.mUnk_00[i].mUnk_7E == stack1[SaveDataIndex_04].mUnk_00 ? true : false;
    }

    for (u32 i = 0; i < 5; i++) {
        u8 *puVar5 = &((u8 *) pSub2)[data_ov019_020d1be8[i]];

        if (stack1[i].mUnk_00 != 0) {
            if (stack1[i].mUnk_04 == 0 || stack1[i].mUnk_00 != stack1[i * 2].mUnk_04) {
                Copy256(puVar5, puVar5 + data_ov019_020d1bd4[i], data_ov019_020d1bd4[i]);
                this->mUnk_04E00[param1].mUnk_00[1] |= 1 << (i & 0xFF);
            }
        } else {
            this->mUnk_04E00[param1].mUnk_00[0] |= 1 << (i & 0xFF);

            if (stack1[i * 2].mUnk_04 == 0) {
                this->mUnk_04E00[param1].mUnk_00[1] |= 1 << (i & 0xFF);
            } else {
                Copy256(puVar5 + data_ov019_020d1bd4[i], puVar5, data_ov019_020d1bd4[i]);
            }
        }
    }
}

ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d1aac(unk32 param1, const wchar_t *param2) {
    wchar_t awStack_28[LENGTH_PLAYER_NAME + 1];

    awStack_28[8] = L'\0';
    wcsncpy(awStack_28, param2, LENGTH_PLAYER_NAME);
    Copy16((u16 *) awStack_28, (u16 *) this->mSaveFiles[param1].mSaveInfo.mSaveInfoData[0].mUnk_DA2,
           sizeof(wchar_t) * (LENGTH_PLAYER_NAME + 1));
    Copy16((u16 *) awStack_28, (u16 *) this->mSaveFiles[param1].mUnk_1D00.mUnk_000[0].mUnk_3C4,
           sizeof(wchar_t) * (LENGTH_PLAYER_NAME + 1));
}

// https://decomp.me/scratch/34KCr
ARM void UnkStruct_ov000_020b62a8_Sub1::func_ov019_020d1b14(unk32 param1) {
    Save *pSVar3;

    pSVar3 = this->mSaveFiles + param1;
    pSVar3->mSaveInfo.func_ov000_020a1028();
    pSVar3->mSaveInfo.func_ov019_020d14fc();

    Fill256(0, &pSVar3->mTreasures, sizeof(SaveTreasures));
    for (int i = 0; i < TreasureType_Max; i++) {
        pSVar3->mTreasures.mTreasureData[0].mUnk_3C[i] = TreasureType_None;
    }
    pSVar3->mTreasures.func_ov019_020d1600();

    this->mSaveFiles[param1].mUnk_1D00.func_ov000_020a12a0();
    this->mSaveFiles[param1].mUnk_1D00.func_ov019_020d14c0();

    Fill256(0, &this->mSaveFiles[param1].mUnk_2500, 0x80);
    this->mSaveFiles[param1].mUnk_2500.func_ov019_020d15cc();

    this->mSaveFiles[param1].mUnk_2600.func_ov000_020a10f4();
    this->mSaveFiles[param1].mUnk_2600.func_ov019_020d1400();
}
