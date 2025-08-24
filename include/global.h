#ifndef GLOBAL_H
#define GLOBAL_H

#define SCREEN_WIDTH 32
#define SCREEN_HEIGHT 24

#define ARRAY_LEN_U(arr) (u32)((sizeof(arr) / sizeof(*arr)))
#define ARRAY_LEN(arr) (s32)((sizeof(arr) / sizeof(*arr)))

// Prevent the IDE from reporting errors that the compiler/linker won't report
#ifdef __INTELLISENSE__
#endif

#define ARM _Pragma("thumb off")
#define THUMB _Pragma("thumb on")

// `override` was added in C++11 before the DS, so we only use the keyword to indicate overriden functions
#define override

#pragma define_section dtcm ".dtcm" \
                            ".dtcm"
// Puts variables in the DTCM module
#define DTCM_BEGIN _Pragma("section dtcm begin")
#define DTCM_END _Pragma("section dtcm end")

#pragma define_section sbss ".data" \
                            ".sbss"
// Define .sbss variables
#define SBSS_BEGIN _Pragma("section sbss begin")
#define SBSS_END _Pragma("section sbss end")

#endif
