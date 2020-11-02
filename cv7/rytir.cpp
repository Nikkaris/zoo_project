//
// Created by nikol on 02.11.2020.
//

#include <iostream>
#include "rytir.h"

Rytir::Rytir(int zivoty, int obrana, int silaUtoku, Zbran* zbran, Brneni* brneni){
    m_zivoty = zivoty;
    m_obrana = obrana;
    m_silaUtoku = silaUtoku;
    m_zbran = zbran;
    m_brneni = brneni;
}

//void Zautoc(Drak* protivnik);

void Rytir::seberNapoj(Napoj* napoj){
    m_napoje.push_back(napoj);
}

void Rytir::vypijPosledniNapoj() {
    if (m_napoje.size() > 0){
        m_zivoty += m_napoje.at(m_napoje.size()-1)->getBonusZivota();
        m_napoje.pop_back();
    }
}

void Rytir::zahodPosledniNapoj(){
    if (m_napoje.size() > 0){
        m_napoje.pop_back();
    }
}
void Rytir::printInfo(){
    std::cout << "Zivoty: " << m_zivoty << std::endl;
    std::cout << "Obrana: " << m_obrana << std::endl;
    std::cout << "Sila utoku: " << m_silaUtoku<< std::endl;
}
//void odectiZivoty(int kolikZivotu);