#include <iostream>
#include "rytir.h"
#include "Napoj.h"
#include "Brneni.h"
#include "Zbran.h"

int main() {
    Zbran* mec = new Zbran(10, 5.0);
    Brneni* platove = new Brneni(10, 5.0);
    Napoj* smallHP = new Napoj(20);
    Rytir* nikolas = new Rytir(100, 25, 40, mec, platove);
    Drak* drak = new Drak(55, 30, 45);

    nikolas->seberNapoj(smallHP);
    nikolas->vypijPosledniNapoj();
    nikolas->Zautoc(drak);
    nikolas->printInfo();
    drak->printInfo();


    delete nikolas;
    delete drak;
    delete mec;
    delete platove;
    delete smallHP;
    return 0;
}
