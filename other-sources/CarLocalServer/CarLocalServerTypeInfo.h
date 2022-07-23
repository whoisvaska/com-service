/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Oct 26 21:15:36 2004
 */
/* Compiler settings for F:\COM\CarLocalServer\CarLocalServerTypeInfo.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CarLocalServerTypeInfo_h__
#define __CarLocalServerTypeInfo_h__

#ifdef __cplusplus
extern "C"{
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

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IStats_INTERFACE_DEFINED__
#define __IStats_INTERFACE_DEFINED__

/* interface IStats */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IStats;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE78387F-D150-4089-832C-BBF02402C872")
    IStats : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DisplayStats( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPetName( 
            /* [retval][out] */ BSTR __RPC_FAR *petName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStatsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStats __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStats __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStats __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DisplayStats )( 
            IStats __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPetName )( 
            IStats __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *petName);
        
        END_INTERFACE
    } IStatsVtbl;

    interface IStats
    {
        CONST_VTBL struct IStatsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStats_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStats_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStats_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStats_DisplayStats(This)	\
    (This)->lpVtbl -> DisplayStats(This)

#define IStats_GetPetName(This,petName)	\
    (This)->lpVtbl -> GetPetName(This,petName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IStats_DisplayStats_Proxy( 
    IStats __RPC_FAR * This);


void __RPC_STUB IStats_DisplayStats_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IStats_GetPetName_Proxy( 
    IStats __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *petName);


void __RPC_STUB IStats_GetPetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStats_INTERFACE_DEFINED__ */


#ifndef __IEngine_INTERFACE_DEFINED__
#define __IEngine_INTERFACE_DEFINED__

/* interface IEngine */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IEngine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E27972D8-717F-4516-A82D-B688DC70170C")
    IEngine : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SpeedUp( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxSpeed( 
            /* [retval][out] */ int __RPC_FAR *maxSpeed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurSpeed( 
            /* [retval][out] */ int __RPC_FAR *curSpeed) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEngineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEngine __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEngine __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEngine __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SpeedUp )( 
            IEngine __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetMaxSpeed )( 
            IEngine __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *maxSpeed);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCurSpeed )( 
            IEngine __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *curSpeed);
        
        END_INTERFACE
    } IEngineVtbl;

    interface IEngine
    {
        CONST_VTBL struct IEngineVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEngine_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEngine_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEngine_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEngine_SpeedUp(This)	\
    (This)->lpVtbl -> SpeedUp(This)

#define IEngine_GetMaxSpeed(This,maxSpeed)	\
    (This)->lpVtbl -> GetMaxSpeed(This,maxSpeed)

#define IEngine_GetCurSpeed(This,curSpeed)	\
    (This)->lpVtbl -> GetCurSpeed(This,curSpeed)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEngine_SpeedUp_Proxy( 
    IEngine __RPC_FAR * This);


void __RPC_STUB IEngine_SpeedUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEngine_GetMaxSpeed_Proxy( 
    IEngine __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *maxSpeed);


void __RPC_STUB IEngine_GetMaxSpeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEngine_GetCurSpeed_Proxy( 
    IEngine __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *curSpeed);


void __RPC_STUB IEngine_GetCurSpeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEngine_INTERFACE_DEFINED__ */


#ifndef __ICreateMyCar_INTERFACE_DEFINED__
#define __ICreateMyCar_INTERFACE_DEFINED__

/* interface ICreateMyCar */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ICreateMyCar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5DD52389-B1A4-4fe7-B131-0F8EF73DD175")
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
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICreateMyCar __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICreateMyCar __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICreateMyCar __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPetName )( 
            ICreateMyCar __RPC_FAR * This,
            /* [in] */ BSTR petName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMaxSpeed )( 
            ICreateMyCar __RPC_FAR * This,
            /* [in] */ int maxSp);
        
        END_INTERFACE
    } ICreateMyCarVtbl;

    interface ICreateMyCar
    {
        CONST_VTBL struct ICreateMyCarVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICreateMyCar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICreateMyCar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICreateMyCar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICreateMyCar_SetPetName(This,petName)	\
    (This)->lpVtbl -> SetPetName(This,petName)

#define ICreateMyCar_SetMaxSpeed(This,maxSp)	\
    (This)->lpVtbl -> SetMaxSpeed(This,maxSp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICreateMyCar_SetPetName_Proxy( 
    ICreateMyCar __RPC_FAR * This,
    /* [in] */ BSTR petName);


void __RPC_STUB ICreateMyCar_SetPetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICreateMyCar_SetMaxSpeed_Proxy( 
    ICreateMyCar __RPC_FAR * This,
    /* [in] */ int maxSp);


void __RPC_STUB ICreateMyCar_SetMaxSpeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICreateMyCar_INTERFACE_DEFINED__ */



#ifndef __CarLocalServerLib_LIBRARY_DEFINED__
#define __CarLocalServerLib_LIBRARY_DEFINED__

/* library CarLocalServerLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CarLocalServerLib;

EXTERN_C const CLSID CLSID_MyCar;

#ifdef __cplusplus

class DECLSPEC_UUID("1D66CBA8-CCE2-4439-8596-82B47AA44E43")
MyCar;
#endif
#endif /* __CarLocalServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
