// the class object (class factory) for CoMyCar class

#if !defined(MyCarClassFactory_H)
#define MyCarClassFactory_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <windows.h>

class MyCarClassFactory : public IClassFactory
{
public:
	MyCarClassFactory();
	virtual ~MyCarClassFactory();

	// IUnknown
	STDMETHODIMP QueryInterface(REFIID riid,void** pIFace);
	STDMETHODIMP_(ULONG)AddRef();
	STDMETHODIMP_(ULONG)Release();

	// IClassFactory
	STDMETHODIMP LockServer(BOOL fLock);
	STDMETHODIMP CreateInstance(LPUNKNOWN pUnkOuter,REFIID riid,void** ppv);

private:

	ULONG m_refCount;

};

#endif