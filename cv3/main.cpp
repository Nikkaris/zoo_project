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
};

int main() {
    Auto* audi = new Auto(10000, 500, 0);

    delete audi;
    return 0;
}
