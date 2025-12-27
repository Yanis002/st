#pragma once

#include "System/SysNew.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "nitro/math.h"
#include "types.h"

class FileSelect_UnkStruct1_Base : public SysObject {
public:
    /* 00 (vtable) */

    FileSelect_UnkStruct1_Base();

    virtual ~FileSelect_UnkStruct1_Base();
    virtual void vfunc_08(unk32 param1, unk32 param2, unk32 param3); // func_02018374
    virtual void vfunc_0C() = 0;
    virtual void vfunc_10(); // func_0201838c
    virtual void vfunc_14(); // func_02018388
    virtual void vfunc_18(); // func_02018390
    virtual void vfunc_1C(); // func_02018394
    virtual void vfunc_20(); // func_02018398
    virtual void vfunc_24(); // func_0201839c

    void func_02018374(void);
};

class FileSelect_UnkStruct1 : public FileSelect_UnkStruct1_Base {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem1_ov019_1 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 0C */ unk32 mUnk_10;
    /* 0C */ unk32 mUnk_14;
    /* 18 */ unk32 *mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk16 mUnk_20;
    /* 20 */ unk16 mUnk_22;
    /* 24 */

    FileSelect_UnkStruct1();
    void func_ov019_020c4ae4(unk32 param1);
    void func_ov019_020c4b2c(unk32 param1);
    void func_ov019_020c4b54(unk32 param1);

    virtual ~FileSelect_UnkStruct1(); // func_ov019_020c4928 & func_ov019_020c49ac
    virtual void vfunc_08(unk32 param1, unk32 param2, unk32 param3); // func_ov019_020c4a38
    virtual void vfunc_0C(); // func_ov019_020c4aac
    virtual void vfunc_14(); // func_ov019_020c4aa8
    virtual void vfunc_18(); // func_ov019_020c4adc
    virtual void vfunc_20(); // func_ov019_020c4ae0

    static FileSelect_UnkStruct1 *Create();
};

class FileSelect_UnkClass2_Sub1 : public SysObject {
public:
    void func_ov001_020bd734(unk32 *param1);
    void func_ov001_020bd784();
    void func_0201c00c(unk32 param1, unk32 param2, unk32 param3);
};

class FileSelect_UnkClass2_Sub2 : public FileSelect_UnkClass2_Sub1 {
public:
    FileSelect_UnkClass2_Sub2();
    ~FileSelect_UnkClass2_Sub2();
};

class FileSelect_UnkClass2_Sub3_Base : public SysObject {
public:
    FileSelect_UnkClass2_Sub3_Base();

    /* 00 */ virtual ~FileSelect_UnkClass2_Sub3_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(void);
};

class UnkSubStruct1 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */

    UnkSubStruct1();
    ~UnkSubStruct1();

    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

class UnkSubStruct10 {
public:
    unk32 mUnk_00;

    void func_020166ac(void);
};

class UnkSubStruct2 {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSubStruct10 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk8 mUnk_28;
    /* 28 */ unk8 mUnk_29;
    /* 2C */ unk8 mUnk_2A;
    /* 2C */ unk8 mUnk_2B;
    /* 2C */ unk8 mUnk_2C;
    /* 2C */ unk8 mUnk_2D;
    /* 2C */ unk8 mUnk_2E;
    /* 2C */ unk8 mUnk_2F;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 58 */ unk32 mUnk_5C;
    /* 60 */

    UnkSubStruct2();
    UnkSubStruct2(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);

    virtual ~UnkSubStruct2();
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

class UnkSubStruct3 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 mUnk_40;
    /* 44 */

    UnkSubStruct3();
    // ~UnkSubStruct3();

    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

class UnkSubStruct4 {
public:
    UnkSubStruct4(UnkSubStruct2 *param1, unk32 param2, unk32 param3, unk32 param4);
    ~UnkSubStruct4();
};

class UnkSubStruct5 {
public:
    UnkSubStruct5(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    ~UnkSubStruct5();

    virtual void vfunc_00();
};

class UnkSubStruct6 {
public:
    UnkSubStruct6();
    ~UnkSubStruct6();
};

class UnkSubStruct7_Base {
public:
    /* 00 (vtable) */
    // /* 04 */ unk8 mUnk_04[0x14 - 0x04];
    /* 04 */ unk8 mUnk_04[0x0C - 0x04];
    /* 14 */

    UnkSubStruct7_Base(unk32 param1);

    virtual void vfunc_00() = 0;
    virtual void vfunc_04() = 0;
};

class UnkSubStruct7 : public UnkSubStruct7_Base, public UnkSubStruct3 {
public:
    /* 00 (base) */
    /* 14 (base) */
    // /* 44 */ unk32 mUnk_44;
    // /* 48 */ unk32 mUnk_48;
    // /* 4C */ unk8 mUnk_4C[0x50 - 0x44];
    // /* 50 */

    UnkSubStruct7() :
        UnkSubStruct7_Base(0),
        UnkSubStruct3() {}

    virtual void vfunc_00();
    virtual void vfunc_04();
};

class UnkSubStruct8 {
public:
    /* 00 (vtable) */
    /* 04 */ void *ptr;
    /* 14 */

    UnkSubStruct8();

    virtual void vfunc_00();
};

class UnkSubStruct9 {
public:
    /* 000 */ unk32 mUnk_00;
    /* 780 */

    UnkSubStruct9();
};

class FileSelect_UnkClass2_Sub8 : public FileSelect_UnkClass2_Sub3_Base {
public:
    /* 00 (vtable) */

    void func_020166cc(void *param1);
};

class FileSelect_UnkClass2_Sub3 : public FileSelect_UnkClass2_Sub3_Base {
public:
    class Dummy1 : public SysObject {
    public:
        // unk32 *mUnk_03E0;
        UnkSubStruct2 mUnk_00;
        unk8 mUnk_60[0x780 - 0x60];

        Dummy1() {};
        ~Dummy1() {};
    };
    class Dummy2 : public SysObject {
    public:
        // unk32 *mUnk_03E0;
        Dummy1 *mUnk_00[2];

        Dummy2() {};
        ~Dummy2() {};
        // ~Dummy2() {
        //     mUnk_00[0] = NULL;
        //     mUnk_00[1] = NULL;
        // }

        void Reset() {
            // delete *mUnk_00;

            Dummy1 *ptr = mUnk_00[1];

            if (mUnk_00[0] != mUnk_00[1]) {
                while (ptr != mUnk_00[0]) {

                    ptr--;
                }
            }
        }
    };

    class SubTest1 {
    public:
        /* 000 */ UnkSubStruct2 mUnk_000;
        /* 060 */ UnkSubStruct4 mUnk_060;
        /* 064 */ unk8 mUnk_064[0x238];
        /* 29C */ UnkSubStruct3 mUnk_29C;
        /* 2E0 */

        SubTest1(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                 unk32 param8, unk32 param9) :
            mUnk_000(param1, param2, param3, param4, param5, param6),
            mUnk_060(&mUnk_000, param7, param8, param9) {}
    };

    class SubTest2 {
    public:
        /* 000 */ UnkSubStruct2 mUnk_000;
        /* 060 */ unk8 mUnk_060[0x38];
        /* 098 */ UnkSubStruct4 mUnk_098;
        /* 09C */ unk8 mUnk_09C[0x238];
        /* 2D4 */ UnkSubStruct3 mUnk_2D4;
        /* 318 */

        SubTest2(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                 unk32 param8, unk32 param9) :
            mUnk_000(param1, param2, param3, param4, param5, param6),
            mUnk_098(&mUnk_000, param7, param8, param9) {}
    };

    class SubTest3 {
    public:
        /* 000 */ UnkSubStruct3 mUnk_000;
        /* 044 */ UnkSubStruct3 mUnk_044;
        /* 088 */ UnkSubStruct6 mUnk_088;
        /* 08C */ unk8 mUnk_08C[0x74];
        /* 100 */
    };

    /* 0000 (base) */
    /* 0004 */ UnkSubStruct10 mUnk_0004;
    /* 0008 */ unk32 mUnk_0008;
    /* 000C */ unk32 mUnk_000C;
    /* 0010 */ FileSelect_UnkClass2_Sub8 mUnk_0010;
    /* 0014 */ unk32 mUnk_0014;
    /* 0018 */ unk32 mUnk_0018;
    /* 001C */ unk32 mUnk_001C;
    /* 0020 */ unk32 mUnk_0020;
    /* 0024 */ unk8 mUnk_0024;
    /* 0025 */ unk8 mUnk_0025;
    /* 0026 */ unk8 mUnk_0026;
    /* 0027 */ unk8 mUnk_0027;
    /* 0028 */ unk32 mUnk_0028;
    /* 002C */ UnkSubStruct1 mUnk_002C;
    /* 005C */ UnkSubStruct2 mUnk_005C;
    /* 00BC */ UnkSubStruct3 mUnk_00BC;
    /* 0100 */ SubTest1 mUnk_0100;
    /* 03E0 */ Dummy2 mUnk_03E0;
    /* 03E8 */ UnkSubStruct7 mUnk_03E8[2];
    /* 0488 */ SubTest2 mUnk_0488;
    /* 07A0 */ UnkSubStruct3 mUnk_07A0;
    /* 07E4 */ SubTest1 mUnk_07E4;
    /* 0AC4 */ SubTest1 mUnk_0AC4;
    /* 0DA4 */ SubTest2 mUnk_0DA4;
    /* 10BC */ SubTest3 mUnk_10BC;
    /* 11BC */ SubTest2 mUnk_11BC;
    /* 14D4 */ SubTest3 mUnk_14D4;
    /* 15D4 */ SubTest2 mUnk_15D4;
    /* 18EC */ SubTest2 mUnk_18EC;
    /* 1C04 */ UnkSystem1_ov019_Derived3 mUnk_1C04;
    /* 1C28 */

    FileSelect_UnkClass2_Sub3();
    void func_ov019_020c61dc();
    void func_ov019_020c63dc();
    void func_ov019_020c6c14();
    void func_ov019_020c6c18();
    void func_ov019_020c6c54();
    void func_ov019_020c6c9c();
    void func_ov019_020c6ca0();
    void func_ov019_020c6cd0();
    void func_ov019_020c6d08();
    void func_ov019_020c6d0c();
    void func_ov019_020c6d10();
    void func_ov019_020c6d48();
    void func_ov019_020c6e14();
    void func_ov019_020c6e3c();
    void func_ov019_020c7000();
    void func_ov019_020c717c();
    void func_ov019_020c71d0();
    void func_ov019_020c71f0();
    void func_ov019_020c7210();
    void func_ov019_020c7274();
    void func_ov019_020c72a0();
    void func_ov019_020c757c();
    void func_ov019_020c7768();
    void func_ov019_020c77b8();
    void func_ov019_020c7804();
    void func_ov019_020c7858();
    void func_ov019_020c7878();
    void func_ov019_020c78ac();
    void func_ov019_020c7910();
    void func_ov019_020c7a44();
    void func_ov019_020c7c3c();
    void func_ov019_020c7c48();
    void func_ov019_020c7c70();
    void func_ov019_020c7d3c();
    void func_ov019_020c7dc8();
    void func_ov019_020c80dc();
    void func_ov019_020c80e8();
    void func_ov019_020c80f4();
    void func_ov019_020c8290();
    void func_ov019_020c82c4();
    void func_ov019_020c8454();
    void func_ov019_020c8524();
    void func_ov019_020c854c();
    void func_ov019_020c8aac();
    void func_ov019_020c8ad8();
    void func_ov019_020c8b10();
    void func_ov019_020c8b48();
    void func_ov019_020c8b74();
    void func_ov019_020c8c4c();
    void func_ov019_020c92dc();
    void func_ov019_020c9b28();
    void func_ov019_020c9b70();
    void func_ov019_020c9bcc();
    void func_ov019_020c9c18();
    void func_ov019_020c9c70();
    void func_ov019_020c9d88();
    void func_ov019_020c9e08();
    void func_ov019_020ca6a4();
    void func_ov019_020ca80c();
    void func_ov019_020ca844();
    void func_ov019_020ca87c();
    void func_ov019_020ca8b4();
    void func_ov019_020ca940();
    void func_ov019_020cb180();
    void func_ov019_020cb1dc();
    void func_ov019_020cb238();
    void func_ov019_020cb268();
    void func_ov019_020cb26c();
    void func_ov019_020cb2a8();
    void func_ov019_020cb2dc();
    void func_ov019_020cb324();
    void func_ov019_020cb4bc();
    void func_ov019_020cb4c8();
    void func_ov019_020cb4d4();
    void func_ov019_020cb4e0();
    void func_ov019_020cb4ec();
    void func_ov019_020cb4f8();
    void func_ov019_020cb504();
    void func_ov019_020cb510();
    void func_ov019_020cb51c();
    void func_ov019_020cb528();
    void func_ov019_020cb534();
    void func_ov019_020cb540();
    void func_ov019_020cb54c();
    void func_ov019_020cb558();
    void func_ov019_020cb564();
    void func_ov019_020cb570();
    void func_ov019_020cb57c();
    void func_ov019_020cb588();
    void func_ov019_020cb5b0();
    void func_ov019_020cb5bc();
    void func_ov019_020cb5c8();
    void func_ov019_020cb6e8();
    void func_ov019_020cb5dc();
    void func_ov019_020cb664();
    void func_ov019_020cb718();
    unk32 func_ov019_020cb748();

    /* 00 */ virtual ~FileSelect_UnkClass2_Sub3();
    /* 08 */ virtual void vfunc_08();
    /* 10 */ virtual void vfunc_10();
    /* 18 */ virtual void vfunc_18(void);
};

class FileSelect_UnkClass2_Sub4_Base : public SysObject {
public:
    /* 0000 (vtable) */

    FileSelect_UnkClass2_Sub4_Base();

    /* 00 */ virtual ~FileSelect_UnkClass2_Sub4_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(void);
};

class FileSelect_UnkClass2_Sub4 : public FileSelect_UnkClass2_Sub4_Base {
public:
    class Sub1 {
    public:
        /* 00 */ unk8 mUnk_00[0x0C];
        /* 0C */

        void func_02015410(const char *path, unk32 param2);
        void func_02015460(const char *param1, void *param2, unk32 param3);
    };

    class Sub2 {
    public:
        Sub2();

        virtual void vfunc_00();
        virtual void vfunc_04();
    };

    class Sub3 {
    public:
        /* 00 */ unk32 *mUnk_00;
        /* 00 */ unk32 *mUnk_04;
        /* 00 */ unk32 *mUnk_08;
        /* 00 */ unk8 mUnk_0C[0x30];
        /* 3C */

        void func_020171e4();
        void func_02017520(const char *param1, const char *param2, unk32 param3);
    };

    class Sub4 {
    public:
        /* 00 */ unk8 mUnk_00[0x18];
        /* 18 */ unk32 mUnk_0018;
        /* 1C */ unk32 mUnk_001C;
        /* 20 */ unk32 mUnk_0020;
        /* 20 */ unk32 mUnk_0024;
        /* 28 */ u8 mUnk_0028; // bool?
        /* 28 */ unk8 mUnk_0029;
        /* 28 */ unk8 mUnk_002A;
        /* 28 */ unk8 mUnk_002B;
        /* 2C */ Sub2 mUnk_002C;
        /* 30 */ unk8 mUnk_0030[0x78 - 0x30];
        /* 78 */

        void func_ov000_020609c4(void);
        unk32 func_ov000_02060af8(void);
        void func_ov000_02060b64(void);
    };

    class Sub5 {
    public:
        u16 one;
        u16 two;
    };

    /* 0000 (base) */
    /* 0004 */ Sub4 mUnk_0004[30];
    /* 0E14 */ Sub5 mUnk_0E14[30];
    /* 0E8C */ unk8 mUnk_0E8C[0x0EB8 - 0x0E8C];
    /* 0EB8 */ Sub1 mUnk_0EB8;
    /* 0EC4 */ Sub1 mUnk_0EC4;
    /* 0ED0 */ Sub1 mUnk_0ED0;
    /* 0EDC */ Sub1 mUnk_0EDC;
    /* 0EE8 */ Sub1 mUnk_0EE8;
    /* 0EB8 */ Sub3 mUnk_0EF4;
    /* 0EC4 */ Sub3 mUnk_0F30;
    /* 0ED0 */ Sub3 mUnk_0F6C;
    /* 0EDC */ Sub3 mUnk_0FA8;
    /* 0EE8 */ Sub3 mUnk_0FE4;
    // /* 0004 */ unk8 mUnk_04[0x101C];
    /* 1020 */

    FileSelect_UnkClass2_Sub4();
    void func_ov019_020cf73c(unk32 param1, unk32 param2);
    void func_ov019_020cf870();
    void func_ov019_020cf9fc();
    void func_ov019_020cfad0();

    /* 00 */ virtual ~FileSelect_UnkClass2_Sub4();
    /* 08 */ virtual void vfunc_08();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
};

class FileSelect_UnkClass2_Sub7 : public SysObject {
public:
    /* 00 */ unk32 mUnk_00; // vtable?
    /* 04 */ FileSelect_UnkClass2_Sub8 mUnk_04;

    void func_ov019_020cc5c0(unk32 param1);
};

class FileSelect_UnkClass2_Sub5 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ unk8 mUnk_04[0x1C];
    /* 20 */

    FileSelect_UnkClass2_Sub5(FileSelect_UnkClass2_Sub7 *param1, FileSelect_UnkClass2_Sub3 *param2);

    virtual ~FileSelect_UnkClass2_Sub5();
};

class FileSelect_UnkClass2_Sub6_Base : public SysObject {
public:
    class Sub1 {
    public:
        Sub1();
    };

    /* 00 (vtable) */
    /* 04 */ Sub1 mUnk_04;

    FileSelect_UnkClass2_Sub6_Base();

    virtual ~FileSelect_UnkClass2_Sub6_Base();
    virtual void vfunc_08(unk32 param1);
    virtual void vfunc_0C(unk32 param1);
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18(unk32 param1);
    virtual void vfunc_1C(unk32 param1);
    virtual void vfunc_20();
    virtual void vfunc_24();
};

class FileSelect_UnkClass2_Sub6 : public FileSelect_UnkClass2_Sub6_Base {
public:
    /* 00 (base) */ // vtable at data_ov019_020d2410 (020d2408)
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ FileSelect_UnkClass2_Sub3 *mUnk_10;
    /* 14 */ FileSelect_UnkClass2_Sub7 *mUnk_14;
    /* 18 */ FileSelect_UnkClass2_Sub7 *mUnk_18;
    /* 1C */

    FileSelect_UnkClass2_Sub6(FileSelect_UnkClass2_Sub7 *param1, FileSelect_UnkClass2_Sub3 *param2);

    virtual ~FileSelect_UnkClass2_Sub6();
    virtual void vfunc_08(unk32 param1);
    virtual void vfunc_0C(unk32 param1);
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18(unk32 param1);
    virtual void vfunc_1C(unk32 param1);
    virtual void vfunc_20();

    static void func_ov019_020d02f4();
};

#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
extern "C" void func_ov000_0206807c(void *, unk32 param1, void *param2);
class FileSelect_UnkStruct2 : public FileSelect_UnkClass2_Sub2 { // 0x02262dbc
public:
    class Sub1 {
    public:
        Sub1();

        virtual void vfunc_00();
        virtual void vfunc_04();
    };

    /* 000 (vtable) */
    /* 004 */ FileSelect_UnkClass2_Sub1 mUnk_004;
    /* 008 */ void *mUnk_008;
    /* 00C */ unk8 mUnk_00C[0x0E0 - 0x00C];
    /* 0E0 */ void *mUnk_0E0;
    /* 0E4 */ void *mUnk_0E4;
    /* 0E8 */ void *mUnk_0E8;
    /* 0EC */ unk32 mUnk_0EC;
    /* 0EC */ unk32 mUnk_0F0;
    /* 0EC */ unk32 mUnk_0F4;
    /* 0EC */ unk32 mUnk_0F8;
    /* 0EC */ unk32 mUnk_0FC;
    /* 0E8 */ void *mUnk_100;
    /* 104 */ FileSelect_UnkClass2_Sub7 mUnk_104;
    /* 10C */ void *mUnk_10C;
    /* 10C */ void *mUnk_110; // vtable
    /* 10C */ void *mUnk_114;
    /* 10C */ void *mUnk_118;
    /* 10C */ unk32 mUnk_11C;
    /* 10C */ unk32 mUnk_120;
    /* 10C */ unk32 mUnk_124;
    /* 10C */ unk16 mUnk_128;
    /* 10C */ unk16 mUnk_12A; // timer that resets after the touchscreen was touched
    /* 10C */ unk32 mUnk_12C;
    /* 130 */ unk8 mUnk_130;
    /* 131 */ unk8 mUnk_131;
    /* 132 */ u8 mUnk_132; // bool?
    /* 133 */ unk8 mUnk_133;
    /* 134 */ Vec3p mUnk_134; // position of where the touchscreen is touched
    /* 140 */ unk32 mUnk_140;
    /* 144 */ unk32 mUnk_144;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ unk32 mUnk_150;
    /* 154 */ FileSelect_UnkClass2_Sub7 *mUnk_154;
    /* 158 */ FileSelect_UnkClass2_Sub3 *mUnk_158;
    /* 15C */ FileSelect_UnkClass2_Sub4 *mUnk_15C;
    /* 160 */ FileSelect_UnkClass2_Sub5 *mUnk_160;
    /* 164 */ FileSelect_UnkClass2_Sub6 *mUnk_164;
    /* 168 */ UnkSystem1_ov019_Derived2 mUnk_168;
    /* 16C */ unk32 mUnk_16C;
    /* 170 */ unk32 mUnk_170;
    /* 174 */ unk32 mUnk_174;
    /* 178 */ unk8 mUnk_178;
    /* 179 */ unk8 mUnk_179;
    /* 17A */ unk8 mUnk_17A;
    /* 17B */ unk8 mUnk_17B;
    /* 17C */ u8 mUnk_17C; // bool?
    /* 17C */ unk8 mUnk_17D;
    /* 17C */ unk8 mUnk_17E;
    /* 17C */ unk8 mUnk_17F;
    /* 180 */

    void test(unk32 param1, void *data, void *param2, unk8 param3) {
        this->mUnk_17A = param3;
        // data_ov000_020b504c.func_ov000_0206807c(param1, param2);
        func_ov000_0206807c(data, param1, param2);
    }

    FileSelect_UnkStruct2(unk32 param1);
    void func_0201875c(void);
    void func_02018908(void);
    void func_02018a14(unk32 param2);
    void func_02018830(unk32 param2);
    void func_ov019_020c4ed8(unk32 param1, unk32 param2, unk32 param3);
    void func_ov019_020c4ff8();
    void func_ov019_020c5038();
    void func_ov019_020c503c();
    void func_ov019_020c5168(unk32 param1);
    void func_ov019_020c5188(unk32 param1);
    void func_ov019_020c51a8();

    virtual ~FileSelect_UnkStruct2();

    static FileSelect_UnkStruct2 *Create(unk32 param1);
};

class FileSelect : public SysObject {
public:
    FileSelect();

    //! TODO: not everything belong to this class
    void func_ov019_020c4de4();

    void func_ov019_020cb768();
    void func_ov019_020cbaec();
    void func_ov019_020cbb10();
    void func_ov019_020cbb40();
    void func_ov019_020cbb94();
    void func_ov019_020cbc0c();
    void func_ov019_020cc5ac();
    void func_ov019_020cc5c0();
    void func_ov019_020cc5f4();
    void func_ov019_020cc6ac();
    void func_ov019_020cc718();
    void func_ov019_020cc78c();
    void func_ov019_020cc85c();
    void func_ov019_020cc874();
    void func_ov019_020cc880();
    void func_ov019_020ccb18();
    void func_ov019_020ccc28();
    void func_ov019_020ccd40();
    void func_ov019_020ccd78();
    void func_ov019_020ccdb0();
    void func_ov019_020ccdf4();
    void func_ov019_020cce04();
    void func_ov019_020cce30();
    void func_ov019_020cd16c();
    void func_ov019_020cd41c();
    void func_ov019_020cd5f8();
    void func_ov019_020cd614();
    void func_ov019_020cd788();
    void func_ov019_020cd7f8();
    void func_ov019_020cd8d4();
    void func_ov019_020cdbdc();
    void func_ov019_020cdc0c();
    void func_ov019_020cdc38();
    void func_ov019_020cdc5c();
    void func_ov019_020cdc60();
    void func_ov019_020cdc8c();
    void func_ov019_020cdcb8();
    void func_ov019_020cde8c();
    void func_ov019_020cde9c();
    void func_ov019_020cdeac();
    void func_ov019_020ce314();
    void func_ov019_020ce414();
    void func_ov019_020ce4dc();
    void func_ov019_020ce61c();
    void func_ov019_020ce668();
    void func_ov019_020ce6c8();
    void func_ov019_020ce704();
    void func_ov019_020ce74c();
    void func_ov019_020ce7a0();
    void func_ov019_020ce7d4();
    void func_ov019_020ce820();
    void func_ov019_020ce830();
    void func_ov019_020ce844();
    void func_ov019_020ce9a4();
    void func_ov019_020cea04();
    void func_ov019_020cea6c();
    void func_ov019_020cea70();
    void func_ov019_020cea74();
    void func_ov019_020ceaac();
    void func_ov019_020cebcc();
    void func_ov019_020cec64();
    void func_ov019_020cef04();
    void func_ov019_020cef6c();
    void func_ov019_020cefe4();
    void func_ov019_020ceff8();
    void func_ov019_020cf00c();
    void func_ov019_020cf130();
    void func_ov019_020cf168();
    void func_ov019_020cf21c();
    void func_ov019_020cfc68();
    void func_ov019_020cfc7c();
    void func_ov019_020cfc98();
    void func_ov019_020cfce8();
    void func_ov019_020cfd4c();
    void func_ov019_020cfd50();
    void func_ov019_020cfddc();
    void func_ov019_020cfdec();
    void func_ov019_020cfe50();
    void func_ov019_020cfefc();
};
