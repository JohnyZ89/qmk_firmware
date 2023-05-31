#pragma once

#include "quantum.h"

#if defined(KEYBOARD_keychron_k12_white_ansi)
    #include "ansi.h"
#elif defined(KEYBOARD_keychron_k12_white_iso)
    #include "iso.h"
#endif