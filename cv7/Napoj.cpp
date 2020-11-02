//
// Created by nikol on 02.11.2020.
//

#include "Napoj.h"

Napoj::Napoj(int bonusZivota){
    m_bonusZivota = bonusZivota;
}

int Napoj::getBonusZivota(){
    return m_bonusZivota;
}