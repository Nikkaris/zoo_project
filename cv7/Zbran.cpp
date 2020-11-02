//
// Created by nikol on 02.11.2020.
//

#include "Zbran.h"

Zbran::Zbran(int bonusUtoku, float vaha){
    m_bonusUtoku = bonusUtoku;
    m_vaha = vaha;
}

int Zbran::getBonusUtoku(){
    return m_bonusUtoku;
}
float Zbran::getVaha(){
    return m_vaha;
}