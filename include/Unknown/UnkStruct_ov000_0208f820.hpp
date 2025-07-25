#pragma once

#include "global.h"
#include "types.h"

#include "System/SysNew.hpp"
#include "nitro/math.h"

struct UnkStruct_ov000_0208f820_14 {
    /* 00 */ unk8 mUnk_00[0x6C];
    /* 6c */ unk32 mUnk_6c;
    /* 70 */ u16 mUnk_70;
    /* 72 */ unk16 mUnk_72;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7c */ unk32 mUnk_7c;
    /* 80 */ unk32 mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8c */ unk32 mUnk_8c;
    /* 90 */
};

struct UnkStruct_ov000_0208f820_28_54 {
    /* 00 */ unk8 mUnk_00[0x12];
    /* 12 */ u16 mUnk_12;
};

struct UnkStruct_ov000_0208f820_28 {
    /* 00 */ unk8 mUnk_00[0x54];
    /* 54 */ UnkStruct_ov000_0208f820_28_54 *mUnk_54;
    /* 58 */
};

class UnkStruct_ov000_0208f820 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ UnkStruct_ov000_0208f820_14 *mUnk_14;
    /* 18 */ unk8 mUnk_18;
    /* 18 */ unk8 mUnk_19;
    /* 18 */ unk8 mUnk_1a;
    /* 18 */ unk8 mUnk_1b;
    /* 1c */ unk32 mUnk_1c;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ UnkStruct_ov000_0208f820_28 *mUnk_28;
    /* 2c */ unk32 mUnk_2c;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ Vec3p *mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3c */ unk32 mUnk_3c;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual ~UnkStruct_ov000_0208f820();
    /* 0c */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1c */ virtual void vfunc_1c();
    /* 20 */

    UnkStruct_ov000_0208f820();
};
