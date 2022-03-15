#include "BlitzHash.h"

//==== SHA1 Functions ==================================
BLITZ3D(cstring) BlitzHashDigestSHA1(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA1 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}
//==== ************** ==================================

//==== SHA2 Functions ==================================
BLITZ3D(cstring) BlitzHashDigestSHA224(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA224 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}

BLITZ3D(cstring) BlitzHashDigestSHA256(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA256 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}

BLITZ3D(cstring) BlitzHashDigestSHA384(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA384 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}

BLITZ3D(cstring) BlitzHashDigestSHA512(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA512 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}
//==== ************** ==================================

//==== SHA3 Functions ==================================
BLITZ3D(cstring) BlitzHashDigestSHA3_224(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA3_224 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}

BLITZ3D(cstring) BlitzHashDigestSHA3_256(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA3_256 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}

BLITZ3D(cstring) BlitzHashDigestSHA3_384(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA3_384 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}

BLITZ3D(cstring) BlitzHashDigestSHA3_512(cstring string)
{
    using namespace CryptoPP;

    std::string StringToDigest = std::string(string);
    std::string PostDigestion;
    SHA3_512 Hash;

    StringSource ss(StringToDigest, true, new HashFilter(Hash, new HexEncoder(new StringSink(PostDigestion))));

    return _strdup(PostDigestion.c_str());
}
//==== ************** ==================================