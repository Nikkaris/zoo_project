//
// Created by dalib on 28.11.2020.
//

#include "Enemy.h"

Enemy::Enemy(int level){
    m_level = level;
}

int Enemy::getEnemyLevel(){
    return m_level;
}