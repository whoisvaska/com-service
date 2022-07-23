#if !defined MyCar_H_
#define MyCar_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

const int MAX_SPEED = 500;
const int MAX_NAME_LENGTH = 20;
#include "CarLocalServerTypeInfo.h"

class MyCar : 
	public IEngine, 
	public ICreateMyCar, 
	public IStats  
{
public:
	MyCar();
	virtual ~MyCar();

	// IUnknown
	STDMETHODIMP QueryInterface(REFIID riid, void** pIFace);
	STDMETHODIMP_(DWORD)AddRef();
	STDMETHODIMP_(DWORD)Release();

	// IEngine
	STDMETHODIMP SpeedUp();
	STDMETHODIMP GetMaxSpeed(int* maxSpeed);
	STDMETHODIMP GetCurSpeed(int* curSpeed);
	
	// IStats
	STDMETHODIMP DisplayStats();
	STDMETHODIMP GetPetName(BSTR* petName);

	// ICreateMyCar
	STDMETHODIMP SetPetName(BSTR petName);
	STDMETHODIMP SetMaxSpeed(int maxSp);

private:
	DWORD	m_refCount;
	BSTR	m_petName;
	int		m_maxSpeed;
	int		m_currSpeed;
};

#endif // !defined(AFX_MyCar_H__86A1A88D_D36B_11D2_B8CF_0020781238D4__INCLUDED_)

