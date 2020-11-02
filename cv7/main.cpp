#include <iostream>
#include "rytir.h"
#include "Napoj.h"
#include "Brneni.h"
#include "Zbran.h"

int main() {
    Zbran* mec = new Zbran(10, 5.0);
    Brneni* platove = new Brneni(10, 5.0);
    Napoj* smallHP = new Napoj(20);
    Rytir* nikolas = new Rytir(100, 20, 40, mec, platove);

    nikolas->printInfo();
    nikolas->seberNapoj(smallHP);
    nikolas->vypijPosledniNapoj();
    nikolas->printInfo();


    delete nikolas;
    delete mec;
    delete platove;
    return 0;
}
