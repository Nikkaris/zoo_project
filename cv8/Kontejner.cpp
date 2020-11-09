//
// Created by nikol on 09.11.2020.
//

#include "Kontejner.h"

Kontejner::Kontejner(std::string popis){
    m_popis = popis;
}

void Kontejner::vypisObsah(){
    std::cout << "Obsah: " << m_popis << std::endl;
}