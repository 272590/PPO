#include <iostream>
#include <string>
#include <vector>
#include "interface.h"
#include "class.h"
#include "arkusz.h"

/** konstruktory ------------------------------------------------------------------------------------------*/
Arkusz::Arkusz()
{
    vector <Okno*> check;
    for(int i = 0; i < 3; i++)
    {
        okno_liczby *dodaj = new okno_liczby;
        check.push_back(dodaj);
    }
    arkusz.push_back(check);
}
Arkusz::Arkusz (int wiersze, int kolumny)
{
    vector <Okno*> check;
    for(int i = 0; i < kolumny; i++)
    {
        okno_liczby *dodaj = new okno_liczby;
        check.push_back(dodaj);
    }
    for(int i = 0; i < wiersze; i++)
    {
        arkusz.push_back(check);
    }
}
void Arkusz::setArkusz(int wiersze, int kolumny, Okno *dodaj)
{
    arkusz[wiersze][kolumny] = dodaj;
}
int Arkusz::getSizeWierszy()
{
    return arkusz.size();
}
int Arkusz::getSizeKolumny()
{
    return arkusz[0].size();
}
void Arkusz::RozmiarKolumny()
{
    okno_liczby *proba = new okno_liczby;
    for (int i = 0; i < arkusz.size(); i++)
    {
        arkusz[i].push_back(proba);
    }
    
}
void Arkusz::RozmiarWiersze()
{
    vector <Okno*> check;
    for (int i = 0; i < arkusz[0].size(); i++)
    {
        okno_liczby *dodaj = new okno_liczby;
        check.push_back(dodaj);
    }
    arkusz.push_back(check); 
}
void Arkusz::showArkusz()
{
    for (int i = 0; i < arkusz.size(); i++)
    {
        for (int j = 0; j < arkusz[i].size(); i++)
        {
            if(arkusz [i][j] -> IDokno()==0)
            {
                cout << " - " << arkusz[i][j]->getLiczba();
            }
            else 
            {
                cout << " - " << arkusz[i][j]->getWyraz();
            }
        }
    }
}

