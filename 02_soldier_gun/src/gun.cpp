#include "gun.h"
#include <iostream>

using namespace std;

void Gun::addBullet(int bullet_count)
{
    this->_bullet_count += bullet_count;
}

bool Gun::shoot()
{
    if(this->_bullet_count <= 0){
        cout << "The gun is no bullet!" << endl;
        return false;
    }
    this->_bullet_count -= 1;

    cout << "shoot successfully !" << endl;
    return true;
}   