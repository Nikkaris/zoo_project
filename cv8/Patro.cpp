//
// Created by nikol on 09.11.2020.
//

#include "Patro.h"

Patro::Patro(){
    for (Kontejner* &pozice:m_pozice){
        pozice = nullptr;
    }
}

void Patro::ulozKontejner(Kontejner* kontejner, int pozice){
    if ((pozice >= 0) and (pozice < m_pozice.size())){
        if (m_pozice.at(pozice) == nullptr){
            m_pozice.at(pozice) = kontejner;
        } else {
            std::cout << "Pozice " << pozice << " je obsazena" << std::endl;
        }
    } else {
        std::cout << "Pozice musi byt 0 az " << m_pozice.size()-1 << std::endl;
    }
}

void Patro::odeberKontejner(int pozice){
    if (m_pozice.at(pozice) != nullptr) {
        m_pozice.at(pozice) = nullptr;
    } else {
        std::cout << "Pozice je volna" << std::endl;
    }
}

void Patro::vypisObsahPatra(){
    for (int i = 0; i < m_pozice.size(); i++){
        if (m_pozice.at(i) != nullptr){
            std::cout << "Pozice " << i << ": ";
            m_pozice.at(i)->vypisObsah();
            std::cout << std::endl;
        }
    }
}