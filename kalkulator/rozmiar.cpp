#include <iostream>
#include <string>
#include "arkusz.h"
#include "rozmiar.h"

void rozmiar_user()
{
    string test;
    int wiersze = 1;
    int kolumny = 3;

        cout << "Jaki ma byc rozmiar tabeli?: ";
        cout << "Podaj ile wierszy :\t";
        do 
        {
            cin >> wiersze;

        }while(wiersze <= 0);

        cout << "Podaj ile kolumn :\t";
        do 
        {
            cin >> kolumny;

        }while(kolumny <= 0);
    
    Arkusz arkusz(wiersze, kolumny);
}
