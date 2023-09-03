#include "person.h"
#include <iostream>
#include <unistd.h>

using namespace std;


int main()
{
    // 会内存泄漏
    Person zhangsan;
    zhangsan.sTest1();
    zhangsan.sTest2();

    // 智能指针，自动释放内存
    SpPerson spp;
    spp.spTest1();


    return 0;
}