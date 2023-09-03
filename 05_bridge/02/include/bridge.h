#ifndef __BRIDGE__H
#define __BRIDGE__H

#include <iostream>

using namespace std;

// OS实现部分
class OS {
public:
    virtual void installOSImpl() = 0;
};

class LinuxOS:public OS {
public:
    virtual void installOSImpl();
};

class WindosOS:public OS {
public:
    virtual void installOSImpl();
};


// 定义电脑本身属性基类，抽象部分
class Computer {
public:
    // 需要在子类实现被virtuall修饰的函数
    virtual void printInfo() = 0;
    virtual void installOS() = 0;
};

// 定义Mac电脑
class Mac:public Computer{
public:
    virtual void printInfo(){
        cout << "This is Mac, ";
    }

    // 新增一个指针当做桥梁，将Computer和OS连接起来
    //（在一个类里定义一个指针，指向另一个类）
    Mac(OS *impl){ this->impl = impl;}

    void installOS();
    
private:
    OS *impl;
};


// 定义联想电脑
class Lenovo:public Computer{
public:
    virtual void printInfo(){
        cout << "This is Lenovo, ";
    }
    Lenovo(OS *impl){ this->impl = impl;}

    void installOS();
    
private:
    OS *impl;    
};


#endif /* __BRIDGE__H */
