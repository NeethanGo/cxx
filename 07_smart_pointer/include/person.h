#ifndef __PERSON__H
#define __PERSON__H

class Person
{
public:
    Person();
    ~Person();

    void printInfo();

    bool sTest1();
    bool sTest2();
};

// SmartPointerPerson
class SpPerson
{
private:
    Person *p;

public:
    SpPerson() : p(0) {}
    SpPerson(Person *other);

    ~SpPerson();

    // 重载Person ->
    Person *operator->();

    bool spTest1();
};

#endif /* __PERSON__H */
