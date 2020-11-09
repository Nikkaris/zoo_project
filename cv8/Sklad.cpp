//
// Created by nikol on 09.11.2020.
//

#include "Sklad.h"

Sklad::Sklad(int pocetPater){
    /*std::vector<Patro*> patra(pocetPater, new Patro());              //zpusob inicializece vectoru a N prvcich
    m_patra = patra;*/

    for (int i = 0; i < pocetPater; i++){
        m_patra.push_back(new Patro());
    }
}

Sklad::~Sklad(){
    for (int i = 0; i < m_patra.size(); i++){
        delete m_patra.at(i);
    }
}

void Sklad::ulozKontejner(Kontejner* kontejner, int patro, int pozice){
    if ((patro >= 0) and (patro < m_patra.size()))
    {
        m_patra.at(patro)->ulozKontejner(kontejner, pozice);
    } else {
        std::cout << "Patro musi mit index od 0 do " << m_patra.size()-1 << std::endl;
    }
}

void Sklad::odeberKontejner(int patro, int pozice){
    m_patra.at(patro)->odeberKontejner(pozice);
}

void Sklad::vypisObsahSkladu(){
    for (int i = 0; i < m_patra.size(); i++){
        std::cout << "Patro " << i << std::endl;
        m_patra.at(i)->vypisObsahPatra();
    }
}