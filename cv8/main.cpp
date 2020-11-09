#include <iostream>
#include "Sklad.h"

int main() {
    Sklad* sklad01 = new Sklad(5);
    Kontejner* k01 = new Kontejner("auta");
    Kontejner* k02 = new Kontejner("iPady");
    Kontejner* k03 = new Kontejner("iPhony");
    Kontejner* k04 = new Kontejner("MacBooky");

    sklad01->ulozKontejner(k01, 0, 0);
    sklad01->ulozKontejner(k02, 0, 1);
    sklad01->ulozKontejner(k03, 0, 2);
    sklad01->ulozKontejner(k04, 0, 3);
    sklad01->ulozKontejner(k04, 0, 5);
    sklad01->ulozKontejner(k03, 2, 2);
   // sklad01->vypisObsahSkladu();

    std::cout << &sklad01->m_patra.at(0) << std::endl;
    std::cout << &sklad01->m_patra.at(1) << std::endl;
    std::cout << &sklad01->m_patra.at(2) << std::endl;
    std::cout << &sklad01->m_patra.at(3) << std::endl;
    std::cout << &sklad01->m_patra.at(4) << std::endl;

    delete k01;
    delete k02;
    delete k03;
    delete k04;
    delete sklad01;
    return 0;
}
