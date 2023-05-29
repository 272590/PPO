#include <string>
#include <iostream>
using namespace std;

class Okno 
{
    public:
        virtual double getLiczba() = 0;
        virtual void setLiczba(double _liczba) = 0;

        virtual string getWyraz() = 0;
        virtual void setWyraz(string _wyraz) = 0;

        virtual int IDokno() = 0;
        /**
         * IDokno - typ argumentu
         * @return 1 - double; 2 - string
        */

};