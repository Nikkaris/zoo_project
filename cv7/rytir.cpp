//
// Created by nikol on 02.11.2020.
//

#include <iostream>
#include "rytir.h"

Rytir::Rytir(int zivoty, int obrana, int silaUtoku, Zbran* zbran, Brneni* brneni){
    m_zivoty = zivoty;
    m_zbran = zbran;
    m_brneni = brneni;
    m_obrana = obrana + m_brneni->getBonusObrany();
    m_silaUtoku = silaUtoku + m_zbran->getBonusUtoku();
}

void Rytir::Zautoc(Drak* protivnik){
    if (m_silaUtoku > protivnik->getObrana()){
        std::cout << "Rytir utoci na draka" << std::endl;
        std::cout << std::endl;
        protivnik->odectiZivoty(m_silaUtoku-protivnik->getObrana());
    } else if (m_silaUtoku < protivnik->getObrana()){
        std::cout << "Drak utoci na rytire" << std::endl;
        std::cout << std::endl;
        m_zivoty -= protivnik->getUtok() - m_obrana;
    } else {
        std::cout << "Protivnici se ubranili" << std::endl;
        std::cout << std::endl;
    }
}

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
    std::cout << std::endl;
}
//void odectiZivoty(int kolikZivotu);