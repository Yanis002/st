#pragma once

#include "types.h"

class SysFault {
  public:
    void func_020125a4(char* file, u16 line, char* msg, ...);
};

extern SysFault data_02049984;
