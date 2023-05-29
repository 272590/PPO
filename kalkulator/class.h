#pragma once
#include <iostream>
#include <string>
#include "interface.h"

class okno_liczby : public Okno
{
    private:
        double liczba;

    public:
        okno_liczby();
        okno_liczby(double _liczba);
        
        double getLiczba();
        void setLiczba(double _liczba);
        string getWyraz();
        void setWyraz(string _wyraz);

        int IDokno();


};

class okno_wyrazy : public Okno
{
    private: 
        string wyraz;
    
    public:
        okno_wyrazy();
        okno_wyrazy(string _wyraz);

        double getLiczba();
        void setLiczba(double _liczba);
        string getWyraz();
        void setWyraz(string _wyraz);

        int IDokno();
};