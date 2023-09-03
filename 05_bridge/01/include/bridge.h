#ifndef __BRIDGE__H
#define __BRIDGE__H

#include <iostream>

using namespace std;

class OS {
public:
    virtual void install() = 0;
};

class LinuxOS:public OS {
public:
    virtual void install(){
        cout << "Install Linux OS" <<endl;
    }
};

class WindosOS:public OS {
public:
    virtual void install(){
        cout << "Install Windos OS" <<endl;
    }
};


// 定义电脑本身属性
class Computer {
public:
    virtual void printInfo() = 0;
};

// 定义Mac电脑
class Mac:public Computer{
public:
    virtual void printInfo(){
        cout << "This is Mac, ";
    }
};

// 给Mac电脑安装Linux系统类
class MacWithLinux:public Mac, public LinuxOS {
public:
    virtual void installOS(){
        printInfo(); 
        install();
    }
};

// 给Mac电脑安装Windos系统类
class MacWithWindos:public Mac, public WindosOS {
public:
    virtual void installOS(){
        printInfo(); 
        install();
    }
};



// 定义联想电脑
class Lenovo:public Computer{
public:
    virtual void printInfo(){
        cout << "This is Lenovo, ";
    }
};

// 给Lenovo电脑安装Linux系统类
class LenovoWithLinux:public Lenovo, public LinuxOS {
public:
    virtual void installOS(){
        printInfo(); 
        install();
    }
};

// 给Lenovo电脑安装Windos系统类
class LenovoWithWindos:public Lenovo, public WindosOS {
public:
    virtual void installOS(){
        printInfo(); 
        install();
    }
};

#endif /* __BRIDGE__H */
