#if (defined _MSC_VER) && (defined COMPILE_GRAVITY_LIBRARY)

#pragma once
#pragma comment(lib, "Shlwapi.lib")

#include <basetsd.h>
#include <io.h>
#include <stdio.h>

// Fix for Visual Studio

#if (!defined(HAVE_BZERO) || !defined(bzero))
#define bzero(b, len) memset((b), 0, (len))
#endif

#if (!defined(HAVE_SNPRINTF) || !defined(snprintf))
#define snprintf    _snprintf
#endif

typedef SSIZE_T     ssize_t;
typedef int         mode_t;

#define open        _open
#define close       _close
#define read        _read
#define write       _write
#define __func__    __FUNCTION__

#endif
