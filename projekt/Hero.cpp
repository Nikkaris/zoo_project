//
// Created by nikol on 19.11.2020.
//

#include "Hero.h"

Hero::Hero(std::string name){
    m_name = name;
}

void Hero::printInfo(){
    std::cout << "Name of hero: " << m_name << std::endl;
}