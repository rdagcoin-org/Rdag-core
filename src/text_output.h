#pragma once

#include "public_settings.h"
#include "platform/logging.h"

static void appendRdagVersion(CHAR16* dst)
{
    appendNumber(dst, VERSION_A, FALSE);
    appendText(dst, L".");
    appendNumber(dst, VERSION_B, FALSE);
    appendText(dst, L".");
    appendNumber(dst, VERSION_C, FALSE);
}
