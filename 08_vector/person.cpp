#include "person.h"
#include <vector>


using namespace std;

// 存放自定义数据类型变量
void Person::sTest1()
{
    cout << "This is sTest1" <<endl;

    vector<Person> vp;
    Person zhangshan("zhangsan", 20);
    Person lisi("lisi", 20);

    vp.push_back(zhangshan);
    vp.push_back(lisi);

    for(vector<Person>::iterator it=vp.begin(); it!=vp.end(); it++){
        // cout << "Name: " << (*it).mName << " age: " <<(*it).mAge <<endl;
         cout << "Name: " << it->mName << " age: " <<it->mAge <<endl;
    }
}

// 存放自定义数据类型指针变量
void Person::sTest2()
{
    cout << "This is sTest2" <<endl;

    vector<Person*> vp;
    Person zhangshan("zhangsan", 20);
    Person lisi("lisi", 20);

    vp.push_back(&zhangshan);
    vp.push_back(&lisi);

    for(vector<Person*>::iterator it=vp.begin(); it!=vp.end(); it++){
        cout << "Name: " << (*it)->mName << " age: " <<(*it)->mAge <<endl;
    }
}