//
// Created by nikol on 02.11.2020.
//

#ifndef CV7_DRAK_H
#define CV7_DRAK_H

#include <array>
#include "Hlava.h"

class Drak{
    int m_obrana;
    std::array<Hlava*,2> m_hlavy;
public:
    Drak(int obrana, int utokPrvniHlavy, int utokDruheHlavy);
    int getUtok();
    int getObrana();
    void odectiZivoty(int kolikZivotu);
    void printInfo();
    ~Drak();
};


#endif //CV7_DRAK_H
