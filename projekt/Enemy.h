//
// Created by dalib on 28.11.2020.
//

#ifndef PROJEKT_ENEMY_H
#define PROJEKT_ENEMY_H


class Enemy {
    int m_level;
    int m_physicalDamage;
    int m_health;
public:
    Enemy(int level);
    int getEnemyLevel();
    int getPhysicalDamage();
    void takeDamage(int howMuch);
    int getHealth();
};


#endif //PROJEKT_ENEMY_H
