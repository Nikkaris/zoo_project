#include <iostream>
using namespace std;

class Student{
    string m_jmeno;
    int m_rokNarozeni;
    string m_bydliste;
public:
    Student(string jmeno, int rokNarozeni, string bydliste){
        setJmeno(jmeno);
        setBydliste(bydliste);
        m_rokNarozeni = rokNarozeni;
    }

    Student(string jmeno, int rokNarozeni): Student(jmeno, rokNarozeni, "Neni znamo"){
    }

    string getJmeno(){
        return m_jmeno;
    }

private:
    void setJmeno(string jmeno){
        if (jmeno != "") {
            m_jmeno = jmeno;
        } else {
            cout << "Student: jmeno nemuze byt prazdne" << endl;
            m_jmeno = "Neni znamo";
        }
    }

    void setBydliste(string bydliste){
        if(bydliste != "") {
            m_bydliste = bydliste;
        } else {
            cout << "Student: bydliste nemuze byt prazdne" << endl;
            m_bydliste = "Neni znamo";
        }
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

private:
    void setNazev(string nazev){
        if (nazev != "") {
            m_nazev= nazev;
        } else {
            cout << "Student: jmeno nemuze byt prazdne" << endl;
            m_nazev = "Neni znamo";
        }
    }
};

class Zapis{
    int m_znamka;
    Student* m_student;
    Kurz* m_kurz;
public:
    Zapis(Kurz* kurz, Student* student){
        setKurz(kurz);
        m_student = student;
        m_znamka = 5; //inicializace vsech vlastnosti
    }

    void setZnamka(int znamka){
        if ((znamka > 5) or (znamka < 1)){
            cout << "Zapis: znamka musi byt na intervalu <1,5>";
        }
        else{
            m_znamka = znamka;
        }
    }

    void printInfo(){
        if (m_student != nullptr){
            cout << "Student: " << m_student->getJmeno() << endl;
        }
        if (m_kurz != nullptr) {
            cout << "Kurz: " << m_kurz->getNazev() << endl;
        }
        cout << "Znamka: " << m_znamka << endl;
    }

private:
    void setKurz(Kurz* kurz){
        if (kurz != nullptr){
            m_kurz = kurz;
        }
        else {
            cout << "Zapis: nelze ukladat prazdny kurz" << endl;
            m_kurz = nullptr;
        }
    }
};

int main(){
    Student* nikolas = new Student("Nikolas", 2000, "Rousinov");
    Kurz* programovani = new Kurz("Programovani", 1000);
    Zapis* nikolasDoPrg = new Zapis(nullptr, nikolas);

    nikolasDoPrg->setZnamka(1);
    nikolasDoPrg->printInfo();

    delete nikolas;
    delete programovani;
    delete nikolasDoPrg;
    return 0;
}
