//
// Created by nikol on 02.11.2020.
//

#include "Brneni.h"

Brneni::Brneni(int bonusObrany, float vaha){
    m_bonusObrany = bonusObrany;
    m_vaha = vaha;
}

int Brneni::getBonusObrany(){
    return m_bonusObrany;
}

float Brneni::getVaha(){
    return m_vaha;
}