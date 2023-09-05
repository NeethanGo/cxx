#include "person.h"


void Person::sTest()
{
    map<int, Person> m;

    // 方式1
    m.insert(pair<int, Person>(1, Person(1, "lucy", 88.9f)));

    // 方式2(推荐)
    m.insert(make_pair(2, Person(2, "bobo", 90.1)));

    // 方式3
    m.insert(map<int, Person>::value_type(3, Person(3, "tom", 90.6)));

    printInfo(m);
}

void printInfo(map<int, Person> &m){
    for (map<int, Person>::iterator it = m.begin(); it != m.end(); it++)
    {
        // *it => pair<int, Person>
        cout << (*it).first << " "<< (*it).second.name << " "<< (*it).second.score<< endl;
    }
}