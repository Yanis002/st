#include "Actor/ActorManager.hpp"
#include "Save/SaveManager.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_02049bac.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov024_020d8694.hpp"
#include "files.h"

#include <dsprot.h>

extern "C" void func_02026800(void *, int, const char *, ...);
extern "C" void func_ov026_020e9208();
extern "C" void func_ov000_02081520(void *, void *, u8);
extern "C" void func_ov000_020814ec(void *, void *);

struct UnkStruct7 {
    /* 00 */ u16 unk_00;
    /* 02 */ Vec2s unk_02;
    /* 04 */
};

UnkStruct_027e0cd8 *UnkStruct_027e0cd8::Create() {
    return new(HeapIndex_1) UnkStruct_027e0cd8();
}

UnkStruct_027e0cd8::UnkStruct_027e0cd8() :
    mUnk_04(NULL),
    mUnk_08(NULL),
    mUnk_0C(NULL),
    mUnk_10(NULL),
    mUnk_16(true),
    mUnk_17(true),
    mUnk_30(-1),
    mUnk_34(-1) {

    UnkStruct_027e09bc *ptr = data_027e09bc;
    UnkSystem8 *pList       = GetLinkListRef(this->mUnk_18);
    ptr->mUnk_48.Prepend(pList);

    VecFx32_Init(0, 0, 0, &this->mUnk_24);

    for (int i = 0; i < ARRAY_LEN(this->mUnk_38); i++) {
        this->mUnk_38[i] = 0;
        this->mUnk_48[i] = false;
    }
}

UnkStruct_027e0cd8::~UnkStruct_027e0cd8() {
    DELETE(this->mUnk_04);
    DELETE(this->mUnk_08);
}

void UnkStruct_027e0cd8::func_ov001_020b7830(const UnkStruct_SceneChange1 *param1) {
    CourseListEntry *pEntry;
    UnkStruct_func_ov000_020702a8 *pUnk1;

    pEntry = data_027e09a0->GetCourseEntry(param1->mSceneIndex);
    pUnk1  = data_027e09a0->func_ov000_020702a8(param1->mSceneIndex);

    wchar_t sp80[16];
    sp80[0]                    = L'\0';
    sp80[sizeof(sp80) / 2 - 1] = L'\0';
    func_02026800(sp80, sizeof(sp80), "Map/%s/course.bin", pEntry->name);

    UnkStruct2 sp70((char *) sp80, 0x01);
    sp70.func_020154ec("MCS");

    bool isCS = true;
    if (param1->mIsCS != true) {
        isCS = false;
    }

    UnkFileSystem3 sp60(isCS ? "MCS:objlist/npctype_1.zob" : "MCS:objlist/npctype.zob");
    gpActorManager->func_ov001_020bb018((ZOBHeader *) sp60.vfunc_08(sizeof(ZOBHeader)));

    UnkFileSystem3 sp50(isCS ? "MCS:objlist/motype_1.zob" : "MCS:objlist/motype.zob");
    gpMapObjManager->func_ov001_020bacd8((ZOBHeader *) sp50.vfunc_08(sizeof(ZOBHeader)));

    UnkStruct7 sp4;
    Vec2s_Copy(&pUnk1->mUnk_10, &sp4.unk_02);
    Vec2s_Copy(&sp4.unk_02, &this->mUnk_00);

    this->mUnk_14 = pEntry->unk_10;
    this->mUnk_04 = new(HeapIndex_1) UnkStruct_027e0cd8_04();

    if (pEntry->unk_21 != -1) {
        this->mUnk_08 = new(HeapIndex_1) UnkStruct_027e0cd8_04();
    }

    if (DSProt_DetectEmulator(NULL) == 0) {
        this->mUnk_30 = 0x1C;
    }

    if (this->mUnk_14 == 0x02 || this->mUnk_14 == 0x04) {
        this->mUnk_10 = new(HeapIndex_1) UnkStruct_027e0cd8_10();
        func_ov026_020e9208();
    } else if (data_027e09a4->mUnk_60 == 0 && data_ov024_020d8694 != NULL) {
        if (data_027e09a4->CurrentSceneIndex() == SceneIndex_d_main) {
            data_ov024_020d8694->func_ov024_020cb000(20);
        } else {
            data_ov024_020d8694->func_ov024_020cafb8(20);
        }
    }

    this->func_ov001_020b8120(param1->mSceneIndex);

    if (pEntry->unk_21 != -1) {
        wchar_t sp30[16];
        sp30[0]                    = L'\0';
        sp30[sizeof(sp30) / 2 - 1] = L'\0';

        func_02026800(sp30, sizeof(sp30), "Map/%s/course.bin", data_027e09a0->GetCourseEntry(pEntry->unk_21)->name);

        UnkStruct2 sp20((const char *) sp30, 0x01);
        sp20.func_020154ec("MCT");
        this->func_ov001_020b7b38(pEntry, pUnk1);
    } else {
        this->func_ov001_020b7b38(pEntry, pUnk1);
    }

    UnkStruct_SceneChange1 sceneChange(param1);
    if (sceneChange.mRoomIndex != 0xFF) {
        func_ov000_02081520(&sp4, this->mUnk_04, sceneChange.mRoomIndex);
        func_ov000_020814ec(this->mUnk_04, &sp4);
    } else {
        sceneChange.mRoomIndex = this->mUnk_04->mUnk_40[this->mUnk_04->mUnk_10][this->mUnk_04->mUnk_11];
    }

    this->func_ov001_020b7d64(&sceneChange);
    this->func_ov001_020b7e68(&sceneChange, 0x01);
}

void UnkStruct_027e0cd8::func_ov001_020b7a7c() {
    this->func_ov001_020b818c();
    this->func_ov001_020b803c();

    data_02049ba0.Unload(OverlaySlot_12);
    data_02049ba0.Unload(OverlaySlot_16);
    data_02049ba0.Unload(OverlaySlot_15);
    data_02049ba0.Unload(OverlaySlot_14);
    data_02049ba0.Unload(OverlaySlot_13);

    this->func_ov001_020b7e50();
    this->mUnk_30 = -1;

    if (data_027e09a4->mUnk_60 == 0) {
        this->func_ov000_02081ca0();
    }

    DELETE(this->mUnk_04);
    DELETE(this->mUnk_08);

    if (this->mUnk_10 != NULL) {
        DELETE(this->mUnk_10);
    }

    gpMapObjManager->func_ov001_020bad80();
    gpActorManager->func_ov001_020bb414();
}

void UnkStruct_027e0cd8::func_ov001_020b7b38(const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1) {
    if (pEntry->saveCourseIndex < SaveCourseIndex_Max) {
        SaveManager_00 *ptr = gSaveManager.mUnk_000;
        this->mUnk_04->func_ov000_02081354(pEntry, pUnk1, &ptr->unk_030[pEntry->saveCourseIndex], false);
        SET_FLAG(ptr->unk_004.unk_00, pEntry->saveCourseIndex);
    } else {
        SaveFile_00000_0000_Data_184 local_1c;
        MI_CpuFill32(0, &local_1c, sizeof(local_1c));
        this->mUnk_04->func_ov000_02081354(pEntry, pUnk1, &local_1c, false);
    }

    this->mUnk_34 = pEntry->unk_21;

    if (this->mUnk_34 != SceneIndex_None) {
        CourseListEntry *pOtherEntry              = data_027e09a0->GetCourseEntry(this->mUnk_34);
        UnkStruct_func_ov000_020702a8 *pOtherUnk1 = data_027e09a0->func_ov000_020702a8(this->mUnk_34);

        if (pOtherEntry->saveCourseIndex < SaveCourseIndex_Max) {
            this->mUnk_08->func_ov000_02081354(pOtherEntry, pOtherUnk1,
                                               &gSaveManager.mUnk_000->unk_030[pOtherEntry->saveCourseIndex], true);
        } else {
            SaveFile_00000_0000_Data_184 local_1c;
            MI_CpuFill32(0, &local_1c, sizeof(local_1c));
            this->mUnk_08->func_ov000_02081354(pOtherEntry, pOtherUnk1, &local_1c, true);
        }
    }
}

void UnkStruct_027e0cd8::func_ov001_020b7c08(const UnkStruct_SceneChange1 *param1, const UnkStruct_WarpUnk1_A0 *param2) {}

void UnkStruct_027e0cd8::func_ov001_020b7d64(const UnkStruct_SceneChange1 *param1) {}

void UnkStruct_027e0cd8::func_ov001_020b7e50() {
    DELETE(this->mUnk_0C);
}

void UnkStruct_027e0cd8::func_ov001_020b7e68(const UnkStruct_SceneChange1 *param1, unk32 param2) {}

void UnkStruct_027e0cd8::func_ov001_020b803c() {}

bool UnkStruct_027e0cd8::func_ov001_020b80fc(SceneIndex sceneIndex) {
    int index;

    switch (sceneIndex) {
        case SceneIndex_t_area0:
            index = 0;
            break;
        case SceneIndex_t_area1:
            index = 1;
            break;
        default:
            index = 2;
            break;
    }

    if (index == 2) {
        return 0;
    }

    return this->mUnk_48[index];
}

void UnkStruct_027e0cd8::func_ov001_020b8120(SceneIndex sceneIndex) {}

void UnkStruct_027e0cd8::func_ov001_020b818c() {
    int index;

    switch (data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_t_area0:
            index = 0;
            break;
        case SceneIndex_t_area1:
            index = 1;
            break;
        default:
            index = 2;
            break;
    }

    if (index != 2) {
        this->mUnk_38[index] = data_02049bac.func_02014b00();
    }
}

DECL_INSTANCE(UnkStruct_027e0cd8, data_027e0cd8);
