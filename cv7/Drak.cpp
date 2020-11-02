//
// Created by nikol on 02.11.2020.
//

#include <iostream>
#include "Drak.h"

Drak::Drak(int obrana, int utokPrvniHlavy, int utokDruheHlavy){
    m_obrana = obrana;
    m_hlavy.at(0) = new Hlava(utokPrvniHlavy);
    m_hlavy.at(1) = new Hlava(utokDruheHlavy);
}
int Drak::getUtok(){
    return m_hlavy.at(0)->getSilaUtoku() + m_hlavy.at(1)->getSilaUtoku();
}
int Drak::getObrana(){
  return m_obrana;
}
void Drak::odectiZivoty(int kolikZivotu){
    m_hlavy.at(0)->odectiZivoty(kolikZivotu);
    m_hlavy.at(1)->odectiZivoty(kolikZivotu);
}

void Drak::printInfo(){
    std::cout << "Zivoty hlavy 1: " << m_hlavy.at(0)->getZivoty() << std::endl;
    std::cout << "Zivoty hlavy 2: " << m_hlavy.at(1)->getZivoty() << std::endl;
    std::cout << "Obrana: " << m_obrana << std::endl;
    std::cout << "Sila utoku hlavy 1: " << m_hlavy.at(0)->getSilaUtoku() << std::endl;
    std::cout << "Sila utoku hlavy 2: " << m_hlavy.at(1)->getSilaUtoku() << std::endl;
    std::cout << std::endl;
}

Drak::~Drak(){
    delete m_hlavy.at(0);
    delete m_hlavy.at(1);
}