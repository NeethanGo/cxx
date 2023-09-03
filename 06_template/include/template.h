#ifndef __TEMPLATE__H
#define __TEMPLATE__H

// 函数模板
template <typename T>
T &tMax(T &a, T &b);

// 函数模板 重载
template <typename T>
const T &tMax(const T &a, const T &b);

// 普通函数
const int &tMax(int &a, int &b);

// 类模板
template <typename T>
class Person
{
private:
    T data;

public:
    Person(const T &value);
    void setValue(const T &t);
    void printInfo();

    // const：修饰符，表示这个函数是一个常量成员函数。在常量成员函数中，
    // 不能修改类的非静态成员变量。它表明这个函数不会修改类的内部状态。
    T getValue() const;
};

// 在头文件中声明的类模板函数
template <typename T>
T add(const T &a, const T &b);

#endif /* __TEMPLATE__H */
