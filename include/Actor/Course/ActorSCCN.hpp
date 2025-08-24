#pragma once

#include "Actor/Actor.hpp"
#include "types.h"

enum SCCNType {
    SCCNType_None                       = 0,
    SCCNType_FadeMain                   = 1, // Fades only main screen
    SCCNType_NoEntranceWalk             = 2, // No walk animation from entrance
    SCCNType_CircleTransition           = 3,
    SCCNType_Unk1                       = 4, // Crashes game?
    SCCNType_Unk2                       = 5, // Crashes game?
    SCCNType_NoEntranceWalk2            = 6,
    SCCNType_NoEntranceWalk3            = 7,
    SCCNType_WalkNorth                  = 8,
    SCCNType_WalkSouth                  = 9,
    SCCNType_WhiteFade                  = 10,
    SCCNType_WhiteFade2                 = 11,
    SCCNType_WhiteFade3                 = 12,
    SCCNType_WhiteFade4                 = 13,
    SCCNType_WhiteFade5                 = 14,
    SCCNType_CircleTransition2          = 15,
    SCCNType_SlowWalk                   = 16,
    SCCNType_ClockwiseStairs            = 17,
    SCCNType_CounterClockwiseStairs     = 18,
    SCCNType_ClockwiseStairsFade        = 19,
    SCCNType_CounterClockwiseStairsFade = 20,
    SCCNType_FadeMain2                  = 21, // Fades only main screen
    SCCNType_CircleMain                 = 22, // Fades only main screen
    SCCNType_ToOriginThenNorth          = 23, // Walks to SCCN origin then north
    SCCNType_ToOriginThenSouth          = 24, // Walks to SCCN origin then south
    SCCNType_BlueWarp                   = 25,
    SCCNType_WalkStraight               = 26,
    SCCNType_ToOriginThenNorth2         = 27, // Walks to SCCN origin then north
    SCCNType_SlowWalkQuickTransition    = 28,
    SCCNType_WalkStraightWhiteFade      = 29,
    SCCNType_NoEntranceWalk4            = 30, // No walk animation from entrance
    SCCNType_ToOriginThenNorth3         = 31, // Walks to SCCN origin then north
    SCCNType_ToOriginThenSouthWhite     = 32, // Walks to SCCN origin then south
    // more probably
};

class ActorSCCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk8 mUnk_98;
    /* 99 */ unk8 mUnk_99; // gives knockback if not -1
    /* 9a */ unk8 mUnk_9a;
    /* 9b */ SCCNType mUnk_9b : 8;
    /* 9c */ unk32 mUnk_9c;
    /* a0 */ q20 mUnk_a0;
    /* a4 */ q20 mUnk_a4;
    /* a8 */ q20 mUnk_a8;
    /* ac */ q20 mUnk_ac;
    /* b0 */ q20 mUnk_b0;
    /* b4 */ q20 mUnk_b4;
    /* b8 */ unk32 mUnk_b8;
    /* bc */ unk32 mUnk_bc;
    /* c0 */ unk32 mUnk_c0;
    /* c4 */ unk32 mUnk_c4;
    /* c8 */
};
