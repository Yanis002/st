#include "Actor/ActorManager.hpp"
#include "CommonFuncs.hpp"
#include "RefStruct.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "nitro/math.h"

THUMB_BEGIN

UnkStruct_027e0ce0_40_Base_78::UnkStruct_027e0ce0_40_Base_78() {
    this->mRef.Reset();
}

UnkStruct_027e0ce0_40_Base_78::~UnkStruct_027e0ce0_40_Base_78() {}

THUMB_END

//! TODO: make it work with inlines
void UnkStruct_027e0ce0_40_Base_78::func_ov031_020dcd9c(const VecFx32 *param1, VecFx32 *param2) {
    u16 var_r1;
    s32 temp_r1;
    u16 var_r2;
    bool var_r2_2;
    bool var_ip;
    bool var_ip_2;
    bool var_lr;
    u16 temp_r3;
    Actor *temp_r0;

    STACK_PAD(4);

    temp_r3 = this->mRef.acRef.type_index;
    var_lr  = true;
    var_ip  = false;

    if ((temp_r3 != 0x100) && (temp_r3 != 0x101)) {
        var_lr = false;
    }

    if (var_lr) {
        if (temp_r3 == 0x101) {
            var_r2 = 0;
        } else {
            var_r2 = this->mRef.acRef.unk_id;
        }

        if (var_r2 == 1) {
            var_ip = true;
        }
    }

    if (var_ip) {
        param2->x = param1->x;
        param2->y = param1->y;
        param2->z = param1->z;
        param2->y += 0x429;
        return;
    }

    var_r2_2 = false;

    if (!this->mRef.IsEmpty()) {
        var_ip_2 = false;

        if (((s32) temp_r3 == 0x100) || (temp_r3 == 0x101)) {
            if (temp_r3 == 0x101) {
                var_r1 = 0;
            } else {
                var_r1 = this->mRef.acRef.unk_id;
            }

            if (var_r1 == 1) {
                var_ip_2 = true;
            }
        }

        if (!var_ip_2) {
            var_r2_2 = true;
        }
    }

    if (!var_r2_2) {
        return;
    }

    temp_r0   = gpActorManager->func_01fff3b4(this->mRef);
    param2->x = temp_r0->mPos.x;
    param2->y = temp_r0->mPos.y;
    param2->z = temp_r0->mPos.z;
    param2->y += 0x333;
}

//! TODO: make it work with inlines
void UnkStruct_027e0ce0_40_Base_78::func_ov031_020dcea4(UnkAngleStruct *pAngle, UnkStruct_027e0ce0_40_Base_78 *thisx,
                                                        UnkAngleStruct angle) {
    bool var_r2;
    bool var_r2_2;
    bool var_r3;
    bool var_r3_2;
    u16 temp_ip;
    u16 var_r0;
    u16 var_r0_2;

    STACK_PAD(4);

    temp_ip = thisx->mRef.acRef.type_index;
    var_r3  = true;
    var_r2  = false;

    if ((temp_ip != 0x100) && (temp_ip != 0x101)) {
        var_r3 = false;
    }

    if (var_r3) {
        if (temp_ip == 0x101) {
            var_r0 = 0;
        } else {
            var_r0 = thisx->mRef.acRef.unk_id;
        }

        if (var_r0 == 1) {
            var_r2 = true;
        }
    }

    if (var_r2) {
        func_01fff17c(&pAngle->angle_s, data_027e0ce0, 1);
        return;
    }

    var_r2_2 = false;

    if (!thisx->mRef.IsEmpty()) {
        var_r3_2 = false;

        if (((s32) temp_ip == 0x100) || (temp_ip == 0x101)) {
            if (temp_ip == 0x101) {
                var_r0_2 = 0;
            } else {
                var_r0_2 = thisx->mRef.acRef.unk_id;
            }

            if (var_r0_2 == 1) {
                var_r3_2 = true;
            }
        }

        if (!var_r3_2) {
            var_r2_2 = true;
        }
    }

    if (!var_r2_2) {
        *pAngle = angle.angle_s;
    } else {
        *pAngle = gpActorManager->func_01fff3b4(thisx->mRef)->mAngle.angle_s;
    }
}

//! TODO: make it work with inlines
bool UnkStruct_027e0ce0_40_Base_78::func_ov031_020dcfb4(VecFx32 *param1) {
    u16 var_r1;
    s32 temp_r1;
    u16 var_r2;
    bool var_r2_2;
    bool var_ip;
    bool var_ip_2;
    bool var_lr;
    u16 temp_r3;
    Actor *temp_r0;

    STACK_PAD(4);

    temp_r3 = this->mRef.acRef.type_index;
    var_lr  = true;
    var_ip  = false;

    VecFx32_Reset(param1);

    if ((temp_r3 != 0x100) && (temp_r3 != 0x101)) {
        var_lr = false;
    }

    if (var_lr) {
        if (temp_r3 == 0x101) {
            var_r2 = 0;
        } else {
            var_r2 = this->mRef.acRef.unk_id;
        }

        if (var_r2 == 1) {
            var_ip = true;
        }
    }

    if (var_ip) {
        VecFx32 *pVec = data_027e0ce0->func_01fff168(PlayerType_Zelda);
        param1->x     = pVec->x;
        param1->y     = pVec->y;
        param1->z     = pVec->z;
        return true;
    }

    var_r2_2 = false;

    if (!this->mRef.IsEmpty()) {
        var_ip_2 = false;

        if (((s32) temp_r3 == 0x100) || (temp_r3 == 0x101)) {
            if (temp_r3 == 0x101) {
                var_r1 = 0;
            } else {
                var_r1 = this->mRef.acRef.unk_id;
            }

            if (var_r1 == 1) {
                var_ip_2 = true;
            }
        }

        if (!var_ip_2) {
            var_r2_2 = true;
        }
    }

    if (!var_r2_2) {
        return false;
    }

    temp_r0   = gpActorManager->func_01fff3b4(this->mRef);
    param1->x = temp_r0->mVel.x;
    param1->y = temp_r0->mVel.y;
    param1->z = temp_r0->mVel.z;
    return true;
}
