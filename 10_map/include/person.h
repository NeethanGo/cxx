#ifndef __PERSON_H
#define __PERSON_H

#include <iostream>
#include <map>
#include<algorithm>

using namespace std;

class Person {
    friend void printInfo(map<int, Person> &m); // 需要访问私有数据成员变量，因此需要申明为友元函数

private:
    int no;
    string name;
    float score; 

public:
    Person(){};
    Person(int no, string name, float score){
        this->no = no;
        this->name = name;
        this->score = score;
    }
    void sTest();

};

#endif /* __PERSON_H */
