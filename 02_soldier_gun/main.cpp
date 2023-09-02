#include "gun.h"
#include "soldier.h"
#include <iostream>

using namespace std;


void test()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBullet2Gun(20);
    sanduo.fire();
}

int main(void)
{
    cout << "THis is a test string..." << endl;
    cout << "THis is a test string..." << endl;

    test();

    return 0;
}