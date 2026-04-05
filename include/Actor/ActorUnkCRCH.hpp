//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCRCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCRCH();

    /* 4C */ virtual ~ActorUnkCRCH() override;

    void func_ov049_02134164(void);
    void func_ov049_0213418c(void);
    void func_ov049_021341cc(void);
    void func_ov049_021341d4(void);
    void func_ov049_0213420c(void);
    void func_ov049_021342f0(void);
    void func_ov049_021343c8(void);
    void func_ov049_021343cc(void);
    void func_ov049_021343d4(void);
    void func_ov049_021343e4(void);
    void func_ov049_021343f8(void);
    void func_ov049_02134414(void);
    void func_ov049_02134438(void);
    void func_ov049_0213444c(void);
    void func_ov049_0213445c(void);
    void func_ov049_0213446c(void);
    void func_ov049_0213448c(void);
    void func_ov049_021344ac(void);
    void func_ov049_021344cc(void);
    void func_ov049_021344ec(void);
    void func_ov049_0213450c(void);
    void func_ov049_0213452c(void);
    void func_ov049_0213454c(void);
    void func_ov049_0213456c(void);
    void func_ov049_0213458c(void);
    void func_ov049_021345c8(void);
    void func_ov049_02134604(void);
    void func_ov049_02134640(void);
    void func_ov049_02134660(void);
    void func_ov049_02134680(void);
    void func_ov049_021346a0(void);
    void func_ov049_021346c0(void);
    void func_ov049_021346e0(void);
    void func_ov049_02134760(void);
};

class ActorTypeUnkCRCH : public ActorType {
public:
    static ActorTypeUnkCRCH gInstance;

    /* 00 (base) */

    ActorTypeUnkCRCH();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCRCH *GetInstance();
};
