#ifndef __PERSON__H
#define __PERSON__H

#include <iostream>


class Person {
public:
    Person(){}
    Person(std::string name, int age){
        this->mName = name;
        this->mAge = age;
    }

    void sTest1();
    void sTest2();

private:
    std::string mName;
    int mAge;
};

#endif /* __PERSON__H */
