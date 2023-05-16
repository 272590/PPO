#include <iostream>
#include <string>
#include "klasa.h"
using namespace std;

//  dzialanie fuknkcje programu  
//  dla Osoba, Student, Pracownik   ----------------------------------------------------------------------------------------

void Osoba::setImie(string _imie)
{
    imie = _imie;
}
void Osoba::setNazwisko(string _nazwisko)
{
    nazwisko = _nazwisko;
}

int Osoba::setPesel(string _pesel)
{
    if (_pesel.length() == 11)
    {
        pesel = _pesel;
        return 0;
    }
    else
    {
        if (_pesel.length() < 11)
        {
            return 1;
        }
        else 
        {
            return 2;
        }
    }
}

string Osoba::getImie()
{
    return imie;
}
string Osoba::getNazwisko()
{
    return nazwisko;
}
string Osoba::getPesel()
{
    return pesel;
}

 //  tylko dla Student   -----------------------------------------------------------------------------------------------------

void Student::setIndeks(string _indeks)
{
    indeks = _indeks;
}
string Student::getIndeks()
{
    return indeks;
}
string Student::getId()
{
    return Id;
}
/**string Student::toString()
{
    return "Student: ";
}*/
 // tylko dla Pracownik ---------------------------------------------------------------------------------------------------

void Pracownik::setIDprac(string _IDprac)
{
    IDprac = _IDprac;
}
string Pracownik::getIDprac()
{
    return IDprac;
}
string Pracownik::getId()
{
    return Id;
}
/**string Pracownik::toString()
{
    return "Pracownik: ";
}*/
// funkcje klasy Ludzie , vector spis ----------------------------------------------------------------------------------------

void Ludzie::dodaj_osobe_do_spisu(Osoba * add_osoba)
{
    spis.push_back(add_osoba);
}

Osoba Ludzie::wyswietl_osobe(int index)
{
    return *spis[index];
}

int Ludzie::getRozmiar()
{
    return spis.size();
}


