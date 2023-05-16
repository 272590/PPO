/*  SPIS TRESCI     plik zawiera opis dzialania programu    */

#pragma once        //zabezpieczenie zeby plik naglowkowy 2 razy sie nie zalaczyl do programu 
#include <string> 
#include <vector>
#include "imter.h"
using namespace std;


class Osoba
{
    private:
        string imie;
        string nazwisko;
        string pesel;

    public:
        void setImie(string _imie);
        void setNazwisko(string _nazwisko);

    /**  setPesel - wstawienie numeru Pesel
        *@param string _pesel - numer wpisany przez uzytkownika
        *@return -> 0 - pesel poprawny, 1 - pesel za maly, 2 - pesel za duzy */
        int setPesel(string _pesel);

        string getImie();
        string getNazwisko();
        string getPesel();
};

class Student : public Osoba, Inter
{
    private:
        string indeks;
        string Id;

    public:
        void setIndeks(string _index);
        
        string getIndeks();
        string getId();

       // string toString();
};

class Pracownik : public Osoba, Inter
{
    private:
        string IDprac;
        string Id;

    public:
        void setIDprac(string _IDprac);

        string getIDprac();
        string getId();

       // string toString();
};



class Ludzie
{
    private:
        vector<Osoba *> spis;
    
    public:
        void dodaj_osobe_do_spisu(Osoba * add_osoba);
        Osoba wyswietl_osobe(int index);
        
        /** getRozmiar - 
         @return - rozmiar spisu */
        int getRozmiar();
};

