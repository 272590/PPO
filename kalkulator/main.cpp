#include <iostream>
#include <string>
#include "arkusz.h"
#include "rozmiar.h"
using namespace std;

int main()
{

    int wybor;
    bool koniec = false;
    
    do 
    {
    cout << endl << "\t\t*** Arkusz komputerowy ***" << endl
        << "\t\t\t--- MENU ---" << endl
        << "\t\t0 -> ustal rozmiar arkusza" << endl
        << "\t\t1 -> dodaj element do tabeli" << endl
        << "\t\t2 -> dodaj kolumne" << endl
        << "\t\t3 -> dodaj wiersz" << endl
        << "\t\t4 -> wyswietl arkusz" << endl 
        << "\t\t5 -> zakoncz program" << endl << endl
        << "Co chcesz zrobic? :\t";
    
    cin >> wybor;

    switch (wybor)
    {
    case 0:
        rozmiar_user();
        break;
    case 1:
        //dodaj_element();
        break;
    case 2:
        //arkusz.RozmiarKolumny();
        break;
    case 3:
        //arkusz.RozmiarWiersze();
        break;
    case 4:
        //arkusz.showArkusz();
        break;
    case 5:
        cout << "* Zakonczyles dzialanie programu *" << endl;
        koniec = true;
        break;
    default:
        cout << endl << "!!! Wybor nieprawidlowy - sprobuj ponownie !!!" << endl << endl;
        break;
    }
    
    }while (!koniec);
}