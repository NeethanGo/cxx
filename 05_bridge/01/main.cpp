#include <iostream>
#include "bridge.h"

using namespace std;


int main()
{
    MacWithLinux zhangsan;
    zhangsan.installOS();

    LenovoWithWindos lisi;
    lisi.installOS();

    return 0;
}