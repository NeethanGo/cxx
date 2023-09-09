#include "gun.h"
#include "soldier.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;



void test()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBullet2Gun(20);
    sanduo.fire();
}

int main(int argc, char **argv)
{
    int ret = 0;
    test();

    testing::InitGoogleTest(&argc, argv);
    ret = RUN_ALL_TESTS();
    cout << "RUN_ALL_TESTS, ret=%d" << ret << endl;

    return 0;
}