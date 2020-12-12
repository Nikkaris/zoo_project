//
// Created by dalib on 28.11.2020.
//

#include "Enemy.h"

Enemy::Enemy(int level){
    m_level = level;
    m_physicalDamage = 10 * m_level;
    m_health = 100;
}

int Enemy::getEnemyLevel(){
    return m_level;
}

int Enemy::getPhysicalDamage(){
    return m_physicalDamage;
}

void Enemy::takeDamage(int howMuch){
    m_health -= howMuch;
}

int Enemy::getHealth(){
    return m_health;
}