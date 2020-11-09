//
// Created by nikol on 09.11.2020.
//

#ifndef CV8_PATRO_H
#define CV8_PATRO_H

#include <array>
#include "kontejner.h"

class Patro {
    std::array<Kontejner*, 10> m_pozice;
public:
    Patro();
    void ulozKontejner(Kontejner* kontejner, int pozice);
    void odeberKontejner(int pozice);
    void vypisObsahPatra();
};


#endif //CV8_PATRO_H
