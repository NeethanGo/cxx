#include "bridge.h"

void LinuxOS::installOSImpl()
{
    cout << "Install Linux OS" << endl;
}

void WindosOS::installOSImpl()
{
    cout << "Install Windos OS" << endl;
}

void Mac::installOS()
{
    printInfo();
    impl->installOSImpl();
}

void Lenovo::installOS()
{
    printInfo();
    impl->installOSImpl();
}