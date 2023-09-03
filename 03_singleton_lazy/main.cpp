#include "singleton.h"
#include <iostream>
#include <unistd.h>

using namespace std;



int main(void)
{
    Singleton *sTest = Singleton::getInstance();
    
    sTest->sTest1();
    sTest->sTest2();
    sTest->sTest3();

    while (1)
    {
        sleep(1);
    }

    return 0;
}