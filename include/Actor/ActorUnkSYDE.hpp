//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYDE : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYDE();

    /* 4C */ virtual ~ActorUnkSYDE() override;

    void func_ov058_02143398(void);
    void func_ov058_02143438(void);
    void func_ov058_021435e0(void);
    void func_ov058_0214454c(void);
    void func_ov058_02144560(void);
    void func_ov058_02144608(void);
    void func_ov058_021446b8(void);
    void func_ov058_02144ba0(void);
    void func_ov058_02145120(void);
    void func_ov058_021456a4(void);
    void func_ov058_021456d8(void);
    void func_ov058_0214574c(void);
    void func_ov058_02145894(void);
    void func_ov058_02145964(void);
    void func_ov058_021459b8(void);
    void func_ov058_021459e4(void);
    void func_ov058_02145bd4(void);
    void func_ov058_02145c68(void);
    void func_ov058_02145da8(void);
    void func_ov058_02145e94(void);
    void func_ov058_02145ef0(void);
    void func_ov058_02146070(void);
    void func_ov058_0214614c(void);
    void func_ov058_021462c0(void);
    void func_ov058_02146314(void);
    void func_ov058_0214633c(void);
    void func_ov058_02146364(void);
    void func_ov058_0214638c(void);
    void func_ov058_021463ac(void);
    void func_ov058_021463d4(void);
    void func_ov058_02146400(void);
    void func_ov058_0214642c(void);
    void func_ov058_02146458(void);
    void func_ov058_02146480(void);
    void func_ov058_021464e8(void);
    void func_ov058_021464ec(void);
    void func_ov058_021464f0(void);
    void func_ov058_021464f4(void);
    void func_ov058_02146520(void);
    void func_ov058_0214654c(void);
    void func_ov058_02146558(void);
    void func_ov058_02146848(void);
    void func_ov058_021468d8(void);
    void func_ov058_02146978(void);
    void func_ov058_0214697c(void);
    void func_ov058_02146980(void);
    void func_ov058_02146984(void);
    void func_ov058_021469e4(void);
    void func_ov058_02146b3c(void);
    void func_ov058_02146c6c(void);
    void func_ov058_02146ccc(void);
    void func_ov058_02146cec(void);
    void func_ov058_02146d30(void);
    void func_ov058_02146d74(void);
    void func_ov058_021470d8(void);
    void func_ov058_02147148(void);
    void func_ov058_021471bc(void);
    void func_ov058_021471f4(void);
    void func_ov058_02147740(void);
    void func_ov058_02147760(void);
    void func_ov058_02147860(void);
    void func_ov058_02147a10(void);
    void func_ov058_02147a5c(void);
    void func_ov058_02147a84(void);
    void func_ov058_02147aec(void);
    void func_ov058_02147b6c(void);
    void func_ov058_02147b98(void);
    void func_ov058_02147bc4(void);
    void func_ov058_02147bf4(void);
    void func_ov058_02147c30(void);
    void func_ov058_02147c6c(void);
    void func_ov058_02147ca8(void);
    void func_ov058_02147ce4(void);
    void func_ov058_02147d20(void);
    void func_ov058_02147d5c(void);
    void func_ov058_02147d60(void);
    void func_ov058_02147d7c(void);
    void func_ov058_02147da4(void);
    void func_ov058_02147dc4(void);
    void func_ov058_02147dd8(void);
    void func_ov058_02147dec(void);
    void func_ov058_02147e00(void);
    void func_ov058_02147e14(void);
    void func_ov058_02147e28(void);
    void func_ov058_02147e3c(void);
    void func_ov058_02147e50(void);
    void func_ov058_02147e64(void);
    void func_ov058_02147e78(void);
    void func_ov058_02147e8c(void);
    void func_ov058_02147ea0(void);
    void func_ov058_02147eb4(void);
    void func_ov058_02147ec8(void);
    void func_ov058_02147edc(void);
};

class ActorTypeUnkSYDE : public ActorType {
public:
    static ActorTypeUnkSYDE gInstance;

    /* 00 (base) */

    ActorTypeUnkSYDE();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYDE *GetInstance();
};
