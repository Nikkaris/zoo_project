//
// Created by nikol on 09.11.2020.
//

#ifndef CV8_KONTEJNER_H
#define CV8_KONTEJNER_H

#include <iostream>

class Kontejner {
    std::string m_popis;
public:
    Kontejner(std::string popis);
    void vypisObsah();
};


#endif //CV8_KONTEJNER_H
