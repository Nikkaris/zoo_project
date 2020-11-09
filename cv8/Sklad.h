//
// Created by nikol on 09.11.2020.
//

#ifndef CV8_SKLAD_H
#define CV8_SKLAD_H

#include "Patro.h"
#include <vector>

class Sklad {
public:
    std::vector<Patro*> m_patra;
public:
    Sklad(int pocetPater);
    ~Sklad();
    void ulozKontejner(Kontejner* kontejner, int patro, int pozice);
    void odeberKontejner(int patro, int pozice);
    void vypisObsahSkladu();
};


#endif //CV8_SKLAD_H
