#ifndef __SINGLETON_H
#define __SINGLETON_H

#include <pthread.h>

class Singleton;


class Singleton {
private:
    // 静态成员变量，用于存储唯一的实例
    static Singleton *gInstance;

    // 必须将构造函数申明为私有，否则用户初始化不调用函数getInstance（）时，
    // 直接通过new或直接实例化一个对象时，就会多次创建多个对象
    Singleton();

public:
    // 若外部想直接调用，需要使用static修饰
    static Singleton *getInstance(){
        return gInstance;
    }

    void printInfo();
    bool sTest1();
    bool sTest2();
    bool sTest3();

};

#endif /* __SINGLETON_H */
