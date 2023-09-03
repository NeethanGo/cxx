#include "template.h"

#include <iostream>

using namespace std;

// 下述函数除了类型不一样，其他完全一样
/*
int& max(int& a, int& b)
{
    return (a>b)?a:b;
}

float& max(float& a, float& b)
{
    return (a>b)?a:b;
}

double& max(double& a, double& b)
{
    return (a>b)?a:b;
}
*/

// 函数模板
template <typename T>
T &tMax(T &a, T &b)
{
    cout << __PRETTY_FUNCTION__ << endl;
    return (a > b) ? a : b;
}

// 函数模板 重载
template <typename T>
const T &tMax(const T &a, const T &b)
{
    cout << "const, " << __PRETTY_FUNCTION__ << endl;
    return (a > b) ? a : b;
}

// 普通函数
const int &tMax(int &a, int &b)
{
    cout << "int, " << __PRETTY_FUNCTION__ << endl;
    return (a > b) ? a : b;
}

// 类模板
template <typename T>
Person<T>::Person(const T& value) : data(value) {}

template <typename T>
T Person<T>::getValue() const {
    return data;
}

template <typename T>
void Person<T>::setValue(const T &t)
{
    this->data = t;
}

template <typename T>
void Person<T>::printInfo()
{
    cout << "class template, ";
    cout << data << endl;
}

// 实现在源文件中的类模板函数
template <typename T>
T add(const T& a, const T& b) {
    return a + b;
}