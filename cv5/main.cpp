#include <iostream>
using namespace std;

class Student{
    string m_jmeno;
    int m_rokNarozeni;
    string m_bydliste;
public:
    Student(string jmeno, int rokNarozeni, string bydliste){
        m_jmeno = jmeno;
        m_rokNarozeni = rokNarozeni;
        m_bydliste = bydliste;
    }

    Student(string jmeno, int rokNarozeni): Student(jmeno, rokNarozeni, "Neni znamo"){
    }

    string getJmeno(){
        return m_jmeno;
    }
};

class Kurz{
    string m_nazev;
    int m_cena;
public:
    Kurz(string nazev, int cena){
        m_nazev = nazev;
        m_cena = cena;
    }

    string getNazev(){
        return m_nazev;
    }
};

class Zapis{
    int m_znamka;
    Student* m_student;
    Kurz* m_kurz;
public:
    Zapis(Kurz* kurz, Student* student){
        m_kurz = kurz;
        m_student = student;
    }

    void setZnamka(int znamka){

    }

    void printInfo(){
        
    }
};

int main(){

    return 0;
}
