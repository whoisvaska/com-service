#include "../../CarLocalServer/CarLocalServerTypeInfo.h"
#include "../../CarLocalServer/CarLocalServerTypeInfo_i.c"
#include <iostream>

// for showing possible mistakes
void ShowErrorMessage(LPCTSTR, HRESULT);

int main()
{
    // initialize the COM runtime
    std::cout << "Initialize the COM runtime...";
    CoInitialize(NULL);
    std::cout << "success." << std::endl;

    // declare variables
    HRESULT hr;
    IClassFactory* pICF = NULL;
    ICreateMyCar* pICreateMyCar = NULL;
    IEngine* pIEngine = NULL;
    IStats* pIStats = NULL;

    std::cout << std::endl << "Get the class factory interface for the Car class...";
    hr = CoGetClassObject(CLSID_MyCar, CLSCTX_LOCAL_SERVER, NULL, IID_IClassFactory, (void**)&pICF);
    if (FAILED(hr))
    {
        ShowErrorMessage(L"CoGetClassObject()", hr);
        exit(1);
    }
    else std::cout << "success." << std::endl;

    std::cout << "Create the Car object and get back the ICreateMyCar interface...";
    hr = pICF->CreateInstance(NULL, IID_ICreateMyCar, (void**)&pICreateMyCar);
    if (FAILED(hr))
    {
        ShowErrorMessage(L"CoGetClassObject()", hr);
        exit(1);
    }
    else std::cout << "success." << std::endl;

    // set parameters on the car
    std::cout << std::endl << "Set different parameters on the car...";
    pICreateMyCar->SetMaxSpeed(30);
    BSTR carName = SysAllocString(OLESTR("COMCar?!"));
    pICreateMyCar->SetPetName(carName);
    SysFreeString(carName);
    std::cout << "success." << std::endl;

    std::cout << std::endl << "Query the IStats interface...";
    pICreateMyCar->QueryInterface(IID_IStats, (void**)&pIStats);
    std::cout << "success." << std::endl;

    std::cout << std::endl << "Use the IStats interface to display the status of the car:" << std::endl;
    pIStats->DisplayStats();

    std::cout << std::endl << "Query the IEngine interface...";
    pICreateMyCar->QueryInterface(IID_IEngine, (void**)&pIEngine);
    std::cout << "success." << std::endl;

    std::cout << std::endl << "Start to use the engine..." << std::endl;
    int curSp = 0;
    int maxSp = 0;
    pIEngine->GetMaxSpeed(&maxSp);
    do
    {
        pIEngine->SpeedUp();
        pIEngine->GetCurSpeed(&curSp);
        std::cout << "current speed is: " << curSp << std::endl;
    } while (curSp <= maxSp);

    std::cout << std::endl << "Report status again using pIEngine: " << std::endl;

    pIEngine->DisplayStats();

    if (pICF)         pICF->Release();
    if (pICreateMyCar) pICreateMyCar->Release();
    if (pIStats)      pIStats->Release();
    if (pIEngine)     pIEngine->Release();

    std::cout << std::endl << "Close the COM runtime...";
    CoUninitialize();
    std::cout << "success." << std::endl;

    return 0;
}

void ShowErrorMessage(LPCTSTR header, HRESULT hr)
{
    void* pMsg;

    FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, hr,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR)&pMsg, 0, NULL);

    std::cout << header << ": Error(" << std::hex << hr << "): "
        << (LPTSTR)pMsg << std::endl;

    LocalFree(pMsg);
}

