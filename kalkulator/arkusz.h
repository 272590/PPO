#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "interface.h"
#include "class.h"

class Arkusz 
{
    private:
        vector<vector<Okno*>> arkusz;
        
    public:
        Arkusz();
        Arkusz (int wiersze, int kolumny);

        void setArkusz (int wiersze, int kolumny, Okno *dodaj);

        int getSizeWierszy();
        int getSizeKolumny();

        void RozmiarWiersze();
        void RozmiarKolumny();

        void showArkusz();


};