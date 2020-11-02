//
// Created by nikol on 02.11.2020.
//

#ifndef CV7_HLAVA_H
#define CV7_HLAVA_H


class Hlava{
    int m_silaUtoku;
    int m_zivoty;
public:
    Hlava(int silaUtoku);
    int getSilaUtoku();
    int getZivoty();
    void odectiZivoty(int kolikZivotu);
};


#endif //CV7_HLAVA_H
