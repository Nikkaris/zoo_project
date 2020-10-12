#include <iostream>
using namespace std;

class ElectricCar{
    float m_maxAh;
    float m_availableAh;
    float m_carMaxCurrent;
public:
    ElectricCar(float maxAh, float availableAh, float carMaxCurrent){
        m_maxAh = maxAh;
        m_availableAh = availableAh;
        m_carMaxCurrent = carMaxCurrent;
    }

    float getCarMaxCurrent(){
        return m_carMaxCurrent;
    }

    void charge(float maxAh){
        if (maxAh > (m_maxAh-m_availableAh))
            m_availableAh = m_maxAh;
        else
            m_availableAh += maxAh;
    }
};

int main() {
    ElectricCar* tesla = new ElectricCar(100.0, 70.0, 2.0);

    delete tesla;
    return 0;
}
