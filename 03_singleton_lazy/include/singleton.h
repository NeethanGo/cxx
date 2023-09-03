#ifndef __SINGLETON_H
#define __SINGLETON_H

#include <pthread.h>

class Singleton;


class Singleton {
private:
    // 静态成员变量，用于存储唯一的实例
    static Singleton *gInstance;
    static pthread_mutex_t gMutex;

    // 必须将构造函数申明为私有，否则用户初始化不调用函数getInstance（）时，
    // 直接通过new或直接实例化一个对象时，就会多次创建多个对象
    Singleton();

public:
    // 若外部想直接调用，需要使用static修饰
    static Singleton *getInstance(){
        // 将线程锁放在函数内部，避免每次调用该函数都去获取锁
        if(gInstance == nullptr){
            pthread_mutex_lock(&gMutex);
            if(gInstance == nullptr){
                gInstance = new Singleton;
            }
            pthread_mutex_unlock(&gMutex);
        }
        return gInstance;
    }

    void printInfo();
    bool sTest1();
    bool sTest2();
    bool sTest3();

};

#endif /* __SINGLETON_H */
