#include <iostream>
using namespace std;

class Auto{
    float m_najetoKm;
    float m_cenaZaDen;
    float m_vydelanoKc;

public:
    Auto(float najetoKm, float cenaZaDen, float vydelanoKc){
        m_najetoKm = najetoKm;
        m_cenaZaDen = cenaZaDen;
        m_vydelanoKc = vydelanoKc;
    }

    float getPujcovne(int pocetDni){
        return m_cenaZaDen * pocetDni;
    }

    void evidujZapujcku(float najetoKm, int pocetDni){
        m_najetoKm += najetoKm;
        m_vydelanoKc += getPujcovne(pocetDni);
    }

    void printInfo(){
        cout << "Najeto KM: " << m_najetoKm << endl;
        cout << "Cena za den: " << m_cenaZaDen << endl;
        cout << "Vydelano Kc: " << m_vydelanoKc << endl;
    }

};

int main() {
    Auto* audi = new Auto(10000, 500, 0);

    delete audi;
    return 0;
}
