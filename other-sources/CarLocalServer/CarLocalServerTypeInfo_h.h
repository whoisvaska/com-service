

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CarLocalServerTypeInfo_h_h__
#define __CarLocalServerTypeInfo_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IStats_FWD_DEFINED__
#define __IStats_FWD_DEFINED__
typedef interface IStats IStats;

#endif 	/* __IStats_FWD_DEFINED__ */


#ifndef __IEngine_FWD_DEFINED__
#define __IEngine_FWD_DEFINED__
typedef interface IEngine IEngine;

#endif 	/* __IEngine_FWD_DEFINED__ */


#ifndef __ICreateMyCar_FWD_DEFINED__
#define __ICreateMyCar_FWD_DEFINED__
typedef interface ICreateMyCar ICreateMyCar;

#endif 	/* __ICreateMyCar_FWD_DEFINED__ */


#ifndef __MyCar_FWD_DEFINED__
#define __MyCar_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyCar MyCar;
#else
typedef struct MyCar MyCar;
#endif /* __cplusplus */

#endif 	/* __MyCar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IStats_INTERFACE_DEFINED__
#define __IStats_INTERFACE_DEFINED__

/* interface IStats */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IStats;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0DB00772-4A6D-425F-8378-7FE44C89142F")
    IStats : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DisplayStats( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPetName( 
            /* [retval][out] */ BSTR *petName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStatsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStats * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStats * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStats * This);
        
        DECLSPEC_XFGVIRT(IStats, DisplayStats)
        HRESULT ( STDMETHODCALLTYPE *DisplayStats )( 
            IStats * This);
        
        DECLSPEC_XFGVIRT(IStats, GetPetName)
        HRESULT ( STDMETHODCALLTYPE *GetPetName )( 
            IStats * This,
            /* [retval][out] */ BSTR *petName);
        
        END_INTERFACE
    } IStatsVtbl;

    interface IStats
    {
        CONST_VTBL struct IStatsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStats_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStats_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStats_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStats_DisplayStats(This)	\
    ( (This)->lpVtbl -> DisplayStats(This) ) 

#define IStats_GetPetName(This,petName)	\
    ( (This)->lpVtbl -> GetPetName(This,petName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStats_INTERFACE_DEFINED__ */


#ifndef __IEngine_INTERFACE_DEFINED__
#define __IEngine_INTERFACE_DEFINED__

/* interface IEngine */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IEngine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E953BC3-547E-4E85-8FF5-C7FD2419C7C6")
    IEngine : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SpeedUp( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxSpeed( 
            /* [retval][out] */ int *maxSpeed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurSpeed( 
            /* [retval][out] */ int *curSpeed) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEngineVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEngine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEngine * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEngine * This);
        
        DECLSPEC_XFGVIRT(IEngine, SpeedUp)
        HRESULT ( STDMETHODCALLTYPE *SpeedUp )( 
            IEngine * This);
        
        DECLSPEC_XFGVIRT(IEngine, GetMaxSpeed)
        HRESULT ( STDMETHODCALLTYPE *GetMaxSpeed )( 
            IEngine * This,
            /* [retval][out] */ int *maxSpeed);
        
        DECLSPEC_XFGVIRT(IEngine, GetCurSpeed)
        HRESULT ( STDMETHODCALLTYPE *GetCurSpeed )( 
            IEngine * This,
            /* [retval][out] */ int *curSpeed);
        
        END_INTERFACE
    } IEngineVtbl;

    interface IEngine
    {
        CONST_VTBL struct IEngineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEngine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEngine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEngine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEngine_SpeedUp(This)	\
    ( (This)->lpVtbl -> SpeedUp(This) ) 

#define IEngine_GetMaxSpeed(This,maxSpeed)	\
    ( (This)->lpVtbl -> GetMaxSpeed(This,maxSpeed) ) 

#define IEngine_GetCurSpeed(This,curSpeed)	\
    ( (This)->lpVtbl -> GetCurSpeed(This,curSpeed) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEngine_INTERFACE_DEFINED__ */


#ifndef __ICreateMyCar_INTERFACE_DEFINED__
#define __ICreateMyCar_INTERFACE_DEFINED__

/* interface ICreateMyCar */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ICreateMyCar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53AA5A2D-E3F0-40B5-8B29-D05B23E6B6C7")
    ICreateMyCar : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPetName( 
            /* [in] */ BSTR petName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaxSpeed( 
            /* [in] */ int maxSp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICreateMyCarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICreateMyCar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICreateMyCar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICreateMyCar * This);
        
        DECLSPEC_XFGVIRT(ICreateMyCar, SetPetName)
        HRESULT ( STDMETHODCALLTYPE *SetPetName )( 
            ICreateMyCar * This,
            /* [in] */ BSTR petName);
        
        DECLSPEC_XFGVIRT(ICreateMyCar, SetMaxSpeed)
        HRESULT ( STDMETHODCALLTYPE *SetMaxSpeed )( 
            ICreateMyCar * This,
            /* [in] */ int maxSp);
        
        END_INTERFACE
    } ICreateMyCarVtbl;

    interface ICreateMyCar
    {
        CONST_VTBL struct ICreateMyCarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICreateMyCar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICreateMyCar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICreateMyCar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICreateMyCar_SetPetName(This,petName)	\
    ( (This)->lpVtbl -> SetPetName(This,petName) ) 

#define ICreateMyCar_SetMaxSpeed(This,maxSp)	\
    ( (This)->lpVtbl -> SetMaxSpeed(This,maxSp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICreateMyCar_INTERFACE_DEFINED__ */



#ifndef __CarLocalServerLib_LIBRARY_DEFINED__
#define __CarLocalServerLib_LIBRARY_DEFINED__

/* library CarLocalServerLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CarLocalServerLib;

EXTERN_C const CLSID CLSID_MyCar;

#ifdef __cplusplus

class DECLSPEC_UUID("AF07C674-9883-4EDF-B9A5-0CBB5B30AB42")
MyCar;
#endif
#endif /* __CarLocalServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


