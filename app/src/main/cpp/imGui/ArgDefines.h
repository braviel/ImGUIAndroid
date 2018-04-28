
//=================================================================================================================================
//   Copyright (c) 2013 Qualcomm Technologies, Inc.  All rights reserved.     
//=================================================================================================================================
// Standard types

#ifndef _ARGDEFINES_H_
#define _ARGDEFINES_H_


#include "Crossplatform.h"

#if defined( _WIN32 ) || defined( _WIN64 )
typedef char               char8;
typedef char               int8;
typedef short              int16;
typedef int                int32;
typedef __int64            int64;
typedef float              float32;
typedef double             float64;
typedef unsigned char      uint8;
typedef unsigned short     uint16;
typedef unsigned int       uint32;
typedef unsigned __int64   uint64;
#elif defined(LINUX_OR_OSX)

#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char               char8;
typedef char               int8;
typedef short              int16;
typedef int                int32;
typedef int64_t            int64;
typedef float              float32;
typedef double             float64;
typedef unsigned char      uint8;
typedef unsigned short     uint16;
typedef unsigned int       uint32;
typedef uint64_t   	   uint64;

#endif

//--------------------------------------------------------------------------------------
// Common types
//--------------------------------------------------------------------------------------
typedef unsigned char      BYTE;

typedef char               CHAR;
typedef char               CHAR8;
typedef unsigned char      UCHAR;
typedef unsigned char      UCHAR8;

typedef wchar_t            WCHAR;
typedef unsigned short     UCHAR16;

typedef signed char        INT8;
typedef signed short       INT16;
typedef signed int         INT32;
typedef unsigned char      UINT8;
typedef unsigned short     UINT16;
typedef unsigned int       UINT32;

typedef float              FLOAT;
typedef float              FLOAT32;
typedef double             FLOAT64;

typedef int                BOOL;

typedef unsigned short     WORD;
typedef unsigned long      DWORD;

#ifndef VOID
    #define VOID void
#endif

#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif

#ifndef NULL
    #define NULL 0
#endif

const UINT32 NATIVE_APP_WIDTH  = 480;
const UINT32 NATIVE_APP_HEIGHT = 765;

#define SAFE_DELETE(p)              if ((p) != NULL) delete (p); (p) = NULL;
#define SAFE_FREE(p)                if ((p) != NULL) free(p); (p) = NULL;



#endif // _ARGDEFINES_H_

