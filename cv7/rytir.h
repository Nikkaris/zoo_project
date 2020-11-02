//
// Created by nikol on 02.11.2020.
//

#ifndef CV7_RYTIR_H
#define CV7_RYTIR_H

#include <iostream>
#include <vector>
#include "Napoj.h"
#include "Zbran.h"
#include "Brneni.h"

class Rytir{
    int m_zivoty;
    int m_silaUtoku;
    int m_obrana;
    Zbran* m_zbran;
    Brneni* m_brneni;
    std::vector<Napoj*> m_napoje;
public:
    Rytir(int zivoty, int obrana, int silaUtoku, Zbran* zbran, Brneni* brneni);
    //void Zautoc(Drak* protivnik);
    void seberNapoj(Napoj* napoj);
    void vypijPosledniNapoj();
    void zahodPosledniNapoj();
    void printInfo();
    //void odectiZivoty(int kolikZivotu);
};


#endif //CV7_RYTIR_H
