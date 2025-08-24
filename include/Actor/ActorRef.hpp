#pragma once

#include "types.h"

struct ActorRef {
    /* 0 */ s16 index : 14;
    /* 1.6 */ s8 mUnk_1_6 : 2;
    /* 2 */ s16 id;
    /* 4 */

    inline void Reset() {
        *(u32 *) this = 0;
    }

    inline bool operator==(const ActorRef &other) const {
        return this->index == other.index && this->mUnk_1_6 == other.mUnk_1_6 && this->id == other.id;
    }

    inline bool operator!=(const ActorRef &other) const {
        return !(*this == other);
    }
};
