

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for CarLocalServerTypeInfo.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IStats,0x0DB00772,0x4A6D,0x425F,0x83,0x78,0x7F,0xE4,0x4C,0x89,0x14,0x2F);


MIDL_DEFINE_GUID(IID, IID_IEngine,0x3E953BC3,0x547E,0x4E85,0x8F,0xF5,0xC7,0xFD,0x24,0x19,0xC7,0xC6);


MIDL_DEFINE_GUID(IID, IID_ICreateMyCar,0x53AA5A2D,0xE3F0,0x40B5,0x8B,0x29,0xD0,0x5B,0x23,0xE6,0xB6,0xC7);


MIDL_DEFINE_GUID(IID, LIBID_CarLocalServerLib,0xBAF37DDB,0xE9FC,0x4348,0x99,0x09,0xEB,0x9D,0x89,0x6F,0x9B,0xEC);


MIDL_DEFINE_GUID(CLSID, CLSID_MyCar,0xAF07C674,0x9883,0x4EDF,0xB9,0xA5,0x0C,0xBB,0x5B,0x30,0xAB,0x42);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



