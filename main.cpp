#include <iostream>
#include "ui.h"
#include "klasa.h"
using namespace std;

int main()
{ 
    Ludzie spis;

    //  konsola wyboru ----------------------------------------------------------------------------------------------------------
    
    int wybor;
    bool koniec = false;

    do 
    {
    cout << endl << "\t\t*** BAZA OSOB NA UCZELNI ***" << endl
        << "\t\t\t--- MENU ---" << endl
        << "\t\t1 -> dodaj osobe do spisu" << endl
        << "\t\t2 -> wyswietl wszytskie osoby" << endl
        << "\t\t3 -> wyswietl konkretna osobe" << endl
        << "\t\t4 -> zakoncz program" << endl << endl
        << "Co chcesz zrobic? :\t";
    
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        dodaj_osobe(spis);
        break;
    case 2:
        wyswietl_all(spis);
        break;
    case 3:
        wyswietl_osobe(index);
    case 4:
        cout << "* Zakonczyles dzialanie programu *" << endl;
        koniec = true;
        break;
    default:
        cout << endl << "!!! Wybor nieprawidlowy - sprobuj ponownie !!!" << endl << endl;
        break;
    }
    }while (!koniec);
    
}