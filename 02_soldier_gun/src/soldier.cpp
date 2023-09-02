#include "soldier.h"

Soldier::Soldier(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

Soldier::~Soldier()
{
    if(this->_ptr_gun) {
        delete this->_ptr_gun;
        this->_ptr_gun = nullptr;
    }
}

void Soldier::addGun(Gun *ptr_gun)
{
    this->_ptr_gun = ptr_gun;
}

void Soldier::addBullet2Gun(int num)
{
    this->_ptr_gun->addBullet(num);
}

bool Soldier::fire()
{
    return this->_ptr_gun->shoot();
}
