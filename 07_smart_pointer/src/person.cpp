#include "person.h"

#include <iostream>

using namespace std;

Person::Person()
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::printInfo()
{
    cout << "Just a test fun" << endl;
}

// 内存泄漏
bool Person::sTest1()
{
    cout << "This is sTest1" << endl;
    Person *zhangsan = new Person();
    zhangsan->printInfo();

    return true;
}

// 使用局部变量，避免内存泄漏
// 注意：无法要求他人使用这个方法
bool Person::sTest2()
{
    cout << "This is sTest2" << endl;
    Person zhangsan;
    zhangsan.printInfo();

    return true;
}

SpPerson::SpPerson(Person *other)
{
    cout << "SpPerson(Person *other)" << endl;
    p = other;
}

SpPerson::~SpPerson()
{
    cout << "~SpPerson()" << endl;
    if (p)
    {
        delete p;
    }
}

Person *SpPerson::operator->()
{
    return p;
}

bool SpPerson::spTest1()
{
    cout << "This is spTest1" << endl;
    SpPerson spp = new Person();
    spp->printInfo();
    return true;
}