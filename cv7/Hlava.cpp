//
// Created by nikol on 02.11.2020.
//

#include "Hlava.h"

Hlava::Hlava(int silaUtoku){
    m_silaUtoku = silaUtoku;
}

int Hlava::getSilaUtoku(){
    return m_silaUtoku;
}

int Hlava::getZivoty(){
    return m_zivoty;
}

void Hlava::odectiZivoty(int kolikZivotu){
    m_zivoty -= kolikZivotu;
}