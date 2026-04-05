//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMGM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMGM();

    /* 4C */ virtual ~ActorUnkDMGM() override;

    void func_ov088_0216e868(void);
    void func_ov088_0216e890(void);
    void func_ov088_0216e8b0(void);
    void func_ov088_0216ebb8(void);
    void func_ov088_0216ec14(void);
    void func_ov088_0216ec78(void);
    void func_ov088_0216ed10(void);
    void func_ov088_0216ed24(void);
    void func_ov088_0216edb8(void);
    void func_ov088_0216f00c(void);
    void func_ov088_0216f020(void);
    void func_ov088_0216f178(void);
    void func_ov088_0216f19c(void);
    void func_ov088_0216f1ec(void);
    void func_ov088_0216f240(void);
    void func_ov088_0216f2b0(void);
    void func_ov088_0216f2d8(void);
    void func_ov088_0216f2f4(void);
    void func_ov088_0216f300(void);
    void func_ov088_0216f368(void);
    void func_ov088_0216f3bc(void);
    void func_ov088_0216f3d8(void);
    void func_ov088_0216f414(void);
    void func_ov088_0216f440(void);
    void func_ov088_0216f510(void);
    void func_ov088_0216f568(void);
    void func_ov088_0216f584(void);
    void func_ov088_0216f594(void);
    void func_ov088_0216f5a8(void);
    void func_ov088_0216f5bc(void);
    void func_ov088_0216f618(void);
    void func_ov088_0216f644(void);
    void func_ov088_0216f7b4(void);
    void func_ov088_0216f810(void);
    void func_ov088_0216f818(void);
    void func_ov088_0216f834(void);
    void func_ov088_0216f858(void);
    void func_ov088_0216f874(void);
    void func_ov088_0216f8a0(void);
    void func_ov088_0216fb38(void);
    void func_ov088_0216fbc4(void);
    void func_ov088_0216fbf0(void);
    void func_ov088_0216fca0(void);
    void func_ov088_0216ff10(void);
    void func_ov088_0216ff14(void);
    void func_ov088_0216ff24(void);
    void func_ov088_0216ffcc(void);
    void func_ov088_0216ffd0(void);
    void func_ov088_0216ffdc(void);
    void func_ov088_021700a4(void);
    void func_ov088_02170150(void);
    void func_ov088_02170194(void);
    void func_ov088_02170238(void);
    void func_ov088_02170284(void);
    void func_ov088_02170464(void);
    void func_ov088_021704b4(void);
    void func_ov088_02170504(void);
    void func_ov088_02170518(void);
    void func_ov088_02170558(void);
    void func_ov088_02170598(void);
};

class ActorTypeUnkDMGM : public ActorType {
public:
    static ActorTypeUnkDMGM gInstance;

    /* 00 (base) */

    ActorTypeUnkDMGM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMGM *GetInstance();
};
