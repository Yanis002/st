#pragma once

#include "Actor/ActorUnk_ov000_020a8bb0.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include "global.h"
#include "types.h"

class PlayerBombItem {
public:
    /* 00 */ unk16 mUnk_00[2];
    /* 04 */

    ActorUnk_ov000_020a8bb0 *func_ov109_02184a40(Vec3p *param1, u16 param2, unk32 param3);
};

class PlayerBomb : public UnkStruct_ov000_0208f820 {
public:
    /* 00 (base) */
    /* 48 */

    /* 04 */ virtual ~PlayerBomb();
    /* 0c */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;

    PlayerBomb();
};
