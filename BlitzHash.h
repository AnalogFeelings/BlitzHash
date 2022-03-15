#pragma once

#include "cryptopp/sha.h"
#include "cryptopp/sha3.h"
#include "cryptopp/filters.h"
#include "cryptopp/hex.h"
#include <string>

#define cstring const char*

#define BLITZ3D(x) extern "C" __declspec(dllexport) x _stdcall

//==== SHA1 Functions ===================================
BLITZ3D(cstring) BlitzHashDigestSHA1(cstring string);
//==== SHA2 Functions ===================================
BLITZ3D(cstring) BlitzHashDigestSHA224(cstring string);
BLITZ3D(cstring) BlitzHashDigestSHA256(cstring string);
BLITZ3D(cstring) BlitzHashDigestSHA384(cstring string);
BLITZ3D(cstring) BlitzHashDigestSHA512(cstring string);
//==== SHA3 Functions ===================================
BLITZ3D(cstring) BlitzHashDigestSHA3_224(cstring string);
BLITZ3D(cstring) BlitzHashDigestSHA3_256(cstring string);
BLITZ3D(cstring) BlitzHashDigestSHA3_384(cstring string);
BLITZ3D(cstring) BlitzHashDigestSHA3_512(cstring string);