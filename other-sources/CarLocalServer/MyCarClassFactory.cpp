#include "stdafx.h"
#include "MyCar.h"
#include "MyCarClassFactory.h"
#include "locks.h"

MyCarClassFactory::MyCarClassFactory()
{
	m_refCount = 0;
}

MyCarClassFactory::~MyCarClassFactory()
{
	MessageBox(NULL,
	"MyCarClassFactory is being distructed. Make sure you see this message, if not, you might have memory leak!",
	"Destructor",MB_OK | MB_SETFOREGROUND);
}

STDMETHODIMP_(ULONG) MyCarClassFactory::AddRef()
{
	//return ++m_refCount;
	return 10;
}

STDMETHODIMP_(ULONG) MyCarClassFactory::Release()
{
	/*
	if ( --m_refCount == 0 )
	{
		delete this;
		return 0;
	}
	return m_refCount;
	*/
	return 20;
}

STDMETHODIMP MyCarClassFactory::QueryInterface(REFIID riid,void** pIFace)
{
	if ( riid == IID_IUnknown )
		*pIFace = (IUnknown*)this;
	else if ( riid == IID_IClassFactory )
		*pIFace = (IClassFactory*)this;
	else
	{
		*pIFace = NULL;
		return E_NOINTERFACE;
	}
	((IUnknown*)(*pIFace))->AddRef();
	return S_OK;
}

STDMETHODIMP MyCarClassFactory::LockServer(BOOL fLock)
{
	if ( fLock ) Lock();
	else UnLock();
	return S_OK;
}

STDMETHODIMP MyCarClassFactory::CreateInstance(LPUNKNOWN pUnkOuter,REFIID riid,void** ppv)
{
	if ( pUnkOuter != NULL ) return CLASS_E_NOAGGREGATION;

	MyCar* pMyCarObj = NULL;
	HRESULT hr;

	pMyCarObj = new MyCar();
	hr = pMyCarObj->QueryInterface(riid,ppv);

	if ( FAILED(hr) ) delete pMyCarObj;
	return hr;
}
