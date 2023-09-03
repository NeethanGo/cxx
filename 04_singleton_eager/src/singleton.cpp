#include "singleton.h"
#include <iostream>
#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>


using namespace std;

// 静态成员变量在类外初始化、申明
// 在单例中，也称为饿汉模式，不需要考虑线程并发访问的问题
Singleton *Singleton::gInstance = new Singleton;


Singleton::Singleton()
{
    cout << "Singleton()" << endl;
}

void Singleton::printInfo()
{
    cout << "This is singelton" << endl;
}

bool Singleton::sTest1()
{
     cout << "=== This is test 1 ===" << endl;

    // 创建两个对象，发现构造函数只调用了一次，单例模式基本功能实现
    Singleton *s = Singleton::getInstance();
    s->printInfo();
    Singleton *s2 = Singleton::getInstance();
    s2->printInfo();

    return true;
}

#define handle_error_en(en, msg) \
    do                           \
    {                            \
        errno = en;              \
        perror(msg);             \
        exit(EXIT_FAILURE);      \
    } while (0)

#define handle_error(msg)   \
    do                      \
    {                       \
        perror(msg);        \
        exit(EXIT_FAILURE); \
    } while (0)

static void *thread_start1(void *arg)
{
    cout << "This is pthread1 ..." << endl;

    Singleton *s = Singleton::getInstance();
    s->printInfo();

    return NULL;
}

static void *thread_start2(void *arg)
{
    cout << "This is pthread2 ..." << endl;

    Singleton *s2 = Singleton::getInstance();
    s2->printInfo();

    return NULL;
}

bool Singleton::sTest2()
{
     cout << "=== This is test 2 ===" << endl;
    // 创建两个线程测试
    pthread_t pthread1;
    pthread_t pthread2;
    pthread_attr_t attr;
    int ret;
    void *res;

    /* Initialize thread creation attributes */
    ret = pthread_attr_init(&attr);
    if (ret != 0)
        handle_error_en(ret, "pthread_attr_init");

    /* Create one thread for each command-line argument */
    ret = pthread_create(&pthread1, &attr, &thread_start1, NULL);
    if (ret != 0)
        handle_error_en(ret, "pthread_create1");

    ret = pthread_create(&pthread2, &attr, &thread_start2, NULL);
    if (ret != 0)
        handle_error_en(ret, "pthread_create2");  

    sleep(5);
    ret = pthread_attr_destroy(&attr);
    if (ret != 0)
        handle_error_en(ret, "pthread_attr_destroy");

    /* Now join with each thread, and display its returned value */
    ret = pthread_join(pthread1, &res);
    if (ret != 0)
        handle_error_en(ret, "pthread_join");

    printf("Joined with thread1 returned value was %s\n", (char *)res);

    ret = pthread_join(pthread2, &res);
    if (ret != 0)
        handle_error_en(ret, "pthread_join");

    printf("Joined with thread2 returned value was %s\n", (char *)res);    
    return true;
}

bool Singleton::sTest3()
{    
    cout << "=== This is test 3 ===" << endl;
    // 必须将构造函数申明为私有，否则用户初始化不调用函数getInstance（）时，
    // 直接通过new或直接实例化一个对象时，就会多次创建多个对象
    Singleton *s3 = new Singleton();
    Singleton s4;

    return true;
}