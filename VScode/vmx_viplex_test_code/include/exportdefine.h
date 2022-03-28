﻿#pragma once
#include "viplexcore_global.h"

extern "C"
{
#ifdef _WIN32
    VIPLEX_EXPORT typedef void(__stdcall *ExportViplexCallback)(const uint16_t, const char *);
    VIPLEX_EXPORT typedef void(__stdcall *ExportViplexCallbackUnicode)(const uint16_t, const wchar_t *);
#else
    VIPLEX_EXPORT typedef void(*ExportViplexCallback)(const uint16_t, const char *);
    VIPLEX_EXPORT typedef void(ExportViplexCallbackUnicode)(const uint16_t, const wchar_t *);
#endif
}