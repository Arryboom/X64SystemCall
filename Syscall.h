#pragma once

#include "MINT.h"

#ifdef _WIN64
extern "C" PPEB _NtGetCurrentPeb64();
#else
extern "C" PPEB _NtGetCurrentPeb64() {};
#endif
