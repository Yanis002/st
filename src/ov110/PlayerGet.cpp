#include "ov110/PlayerGet.hpp"
#include "versions.h"

extern "C" void func_01ffb6e4(unk32, void *, void *);
extern "C" void func_01ffc5a0(unk32 *, unk32, u16, unk32 *, unk32);
extern "C" void func_ov000_0208f820();
extern "C" unk32 func_ov024_020d5354(unk32 *, u16 *);
extern "C" void func_ov000_02058fc4(unk32 *, UnkStruct_PlayerGet_74 *, unk8 *);
extern unk32 *data_027e0958;

static const unk32 data_ov110_02185dc4[1] = {8};

ARM void PlayerGet::func_ov110_02184a40() {}

static const unk16 data_ov110_02185dc8[1] = {2};

static const unk16 data_ov110_02185dca[15] = {
    0x11, 0x01, 0x10, 0x41, 0x12, 0x26, 0x13, 0x63, 0x14, 0x62, 0x15, 0x59, 0x16, 0x3E, 0x17,
};

static const unk32 data_ov110_02185de8[] = {
    0x30001,  0x30002,  0xB00D6,  0x8007A,  0x30003, 0x8007B, 0x8007C, 0x8007D, 0x8007E, 0x30004,  0x30005, 0x30006,  0x30007,
    0x30008,  0x30009,  0x3000A,  0x3000B,  0x3000C, 0x3000D, 0x3000E, 0x3000F, 0xD0000, 0xD0001,  0xD0002, 0xD0003,  0xF00EB,
    0x100000, 0x110000, 0x1C008E, 0x1E0048, 0x30010, 0x30011, 0x30012, 0x30013, 0x30014, 0x30015,  0x30016, 0x30017,  0xB00D7,
    0x30018,  0x30019,  0x3001A,  0x3001B,  0x3001C, 0x3001D, 0x3001E, 0x3001F, 0x30020, 0x30021,  0x30022, 0x30023,  0x30024,
    0x30025,  0x30026,  0x30027,  0x30028,  0x30029, 0x3002A, 0x3002B, 0x3002C, 0x3002D, 0x3002E,  0x3002F, 0x1400F7, 0x8007F,
    0x30030,  0x30031,  0x30032,  0x30033,  0x30034, 0x30035, 0x30036, 0x30037, 0x30038, 0x30039,  0x3003A, 0x3003B,  0x3003C,
    0x3003D,  0x3003E,  0x3003F,  0x30040,  0x30041, 0x30042, 0x30043, 0x30044, 0x30045, 0x30046,  0x30047, 0x1400F8, 0x30048,
    0x30049,  0x3004A,  0x3004B,  0x3004C,  0x3004D, 0xD0004, 0xD0005, 0x3004E, 0x3004F, 0x1400F9, 0xF00EC, 0x80080,  0x110001,
    0x1400FA, 0x100001, 0x30050,  0x30051,  0x30052, 0x30053, 0x30054, 0x30055, 0x30056, 0x30057,  0x30058, 0x030059, 0x3005A,
};

static const unk32 data_ov110_02185fbc[] = {
    0x000, 0x000, 0x003, 0x000, 0x000, 0x1A3, 0x000, 0x27B, 0x0CB, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    0x000, 0x076, 0x077, 0x078, 0x00F, 0x010, 0x011, 0x012, 0x008, 0x009, 0x00A, 0x00B, 0x00C, 0x00D, 0x002, 0x01F, 0x020,
    0x021, 0x079, 0x07A, 0x07B, 0x000, 0x000, 0x000, 0x000, 0x000, 0x068, 0x069, 0x06A, 0x06B, 0x06C, 0x06D, 0x06E, 0x06F,
    0x070, 0x071, 0x072, 0x073, 0x074, 0x075, 0x0A6, 0x0A7, 0x0A8, 0x0A9, 0x0AA, 0x000, 0x000, 0x0B0, 0x0B1,
};

static const unk32 data_ov110_021860c4[] = {
    0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x12D, 0x000, 0x000,
    0x03C, 0x000, 0x000, 0x000, 0x000, 0x000, 0x0D6, 0x194, 0x18E, 0x18F, 0x190, 0x191, 0x192, 0x193, 0x046, 0x000, 0x000,
};

// non-matching
ARM void PlayerGet::func_ov110_02184dac(unk32 param1, unk32 param2, unk32 param3) {
    UnkStruct_ov000_0208f820_14 *unk_14 = this->mUnk_14;

    func_01ffc5a0(&unk_14->mUnk_8c, unk_14->mUnk_6c, unk_14->mUnk_70, &this->mUnk_04, param3);
}

ARM PlayerGet::PlayerGet() :
    mUnk_54(0),
    mUnk_58(0),
    mUnk_5c(-1),
    mUnk_60(-1),
    mUnk_64(mUnk_44, -1),
    mUnk_6c(0x1000),
    mUnk_70(0),
    mUnk_72(0),
    mUnk_73(0),
    mUnk_88(this),
    mUnk_8c(0) {}

ARM PlayerGet::~PlayerGet() {}

#if IS_JP
ARM void PlayerGet::func_ov110_02186b8c() {}
#endif

static char *data_ov110_021861e0 = "Player/get/";
ARM void PlayerGet::vfunc_0c() {}

// #pragma section force_data begin
UnkStruct_ov110_021861ec data_ov110_021861ec = UnkStruct_ov110_021861ec(0x5E3, 0x152D, 0xCD);
#pragma section force_data end

ARM void PlayerGet::vfunc_10() {}

ARM void PlayerGet::vfunc_18(unk32 param1, unk32 param2, unk32 param3) {
    unk8 auStack_18[12];

    switch (param2) {
        case 0x39:
        case 0x3A:
            break;
        case 0x3B:
            if (param3 != 0 && this->mUnk_60 != 0 && this->mUnk_90 != 0) {
                func_01ffb6e4(this->mUnk_34, &data_ov110_021861ec, auStack_18);
                func_ov000_02058fc4(data_027e0958, &this->mUnk_74, auStack_18);
            }
            break;
        default:
            break;
    }
}

ARM UnkStruct_PlayerGet_ec::UnkStruct_PlayerGet_ec() {
    this->mUnk_00 = 0;
}

// non-matching
THUMB void UnkStruct_027e0ce0::func_ov110_02185d3c(unk32 param1) {
    unk32 uStack_14;
    u16 auStack_18[2];

    switch (param1) {
        case 0x1F:
            this->func_ov024_020d3d98(0, 0);
            this->mUnk_2c = 1;
            this->mUnk_00 = 0;
            this->mUnk_10 = 0;
            break;
        case 0x21:
            this->func_ov024_020d3d98(2, 0);
            this->mUnk_2c = 2;
            this->mUnk_04 = 2;
            this->mUnk_14 = 0;
            break;
        default:
            uStack_14     = -1;
            auStack_18[0] = 0;

            if (func_ov024_020d5354(&uStack_14, auStack_18) != 0) {
                func_ov024_020d3ee8(uStack_14, auStack_18[0], 1);
            }
            break;
    }
}

ARM unk32 PlayerGet::func_ov110_02185da4(unk32 param1) {
    return data_ov110_02185de8[param1];
}

ARM unk32 PlayerGet::func_ov110_02185db4(unk32 param1) {
    return data_ov110_02185fbc[param1];
}
