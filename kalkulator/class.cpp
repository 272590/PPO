#include <iostream>
#include <string>
#include "interface.h"
#include "class.h"

/** okno liczbowe -----------------------------------------------------------------------------------------------------*/

okno_liczby::okno_liczby()
{
    liczba = 0;
}
okno_liczby::okno_liczby(double _liczba)
{
    liczba = _liczba;
}

double okno_liczby::getLiczba()
{
    return liczba;
}
void okno_liczby::setLiczba(double _liczba)
{
    liczba = _liczba;
}
string okno_liczby::getWyraz()
{
    return "BRAK";
}
void okno_liczby::setWyraz(string _wyraz)
{

}
int okno_liczby::IDokno()
{
    return 1;
}


/** okno wyrazowe -------------------------------------------------------------------------------------------------------*/

okno_wyrazy::okno_wyrazy()
{
    wyraz = " ";
}
okno_wyrazy::okno_wyrazy(string _wyraz)
{
    wyraz = _wyraz;
}

double okno_wyrazy::getLiczba()
{
    return 0;
}
void okno_wyrazy::setLiczba(double _liczba)
{

}
string okno_wyrazy::getWyraz()
{
    return wyraz;
};
void okno_wyrazy::setWyraz(string _wyraz)
{
    wyraz = _wyraz;
}
int okno_wyrazy::IDokno()
{
    return 2;
}
