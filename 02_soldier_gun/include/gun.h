#ifndef __GUN_H
#define __GUN_H


#include <string>

class Gun {
public:
    Gun(std::string type){
        this->_bullet_count = 0; // 默认枪没有子弹
        this->type = type;
    }

    // 装填子弹
    void addBullet(int bullet_count);
    bool shoot();

private:
    int _bullet_count; 
    std::string type;

};


#endif /* __GUN_H */
