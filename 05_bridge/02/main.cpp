#include <iostream>
#include "bridge.h"

using namespace std;


int main()
{
    OS *os1 = new LinuxOS();
    OS *os2 = new WindosOS();

    Computer *c1 = new Mac(os1);
    Computer *c2 = new Lenovo(os2);

    c1->installOS();
    c2->installOS();

    return 0;
}