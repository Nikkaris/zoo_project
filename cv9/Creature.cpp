//
// Created by nikol on 16.11.2020.
//

#include "Creature.h"

Creature::Creature(int level){
    m_level = level;
}

int Creature::getLevel(){
    return m_level;
}