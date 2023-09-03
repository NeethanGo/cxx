#include <iostream>
#include "template.h"

using namespace std;

int main()
{
    int a = 1, b = 10;
    double c =10.99;

    // 函数模板测试
    // 函数选择过程：先列出候选函数，包括普通函数、参数推导成功的模板函数
    tMax(a, b);

    // 语法错误，暂未找到原因
    // 类模板测试
    // Person<string> zhangsan("zhangsan");
    // zhangsan.printInfo();

    // Person<double> lisi(10.99);
    // lisi.printInfo();

    return 0;
}