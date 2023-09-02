#ifndef __SOLDIER__H
#define __SOLDIER__H

#include "gun.h"
#include <string>

class Soldier {
public:
    Soldier(std::string name);
    ~Soldier();
    void addGun(Gun *ptr_gun);
    void addBullet2Gun(int num);
    bool fire();

private:
    std::string _name;
    Gun *_ptr_gun;
};

#endif /* __SOLDIER__H */
