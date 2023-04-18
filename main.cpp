#include <iostream>
#include <dodaj.h>
#include <wypisz.h>
#include <interfejs.h>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string imie;
    string nazwisko;
    int nr_indeksu;
    int wiek;

    Student(string i, string n, int nr, int w) {
        imie = i;
        nazwisko = n;
        nr_indeksu = nr;
        wiek = w;
        
        class Pracownik 
        {
            
        };
    }
};

int main()
{
   
    dodajStudenta();
    wypiszStudentow();
    interfejs();
    
    vector<Student> studenci;

    char wybor;
    do {
        cout << "Co chcesz zrobic?" << endl;
        cout << "1 - Dodaj studenta" << endl;
        cout << "2 - Wypisz studentow" << endl;
        cout << "3 - Zakończ program" << endl;
        cin >> wybor;
        
         switch(wybor) {
            case '1':
                dodajStudenta(studenci);
                break;
            case '2':
                wypiszStudentow(studenci);
                break;
            case '3':
                break;
            default:
                cout << "Error" << endl;
                break;
        }
    } while(wybor != '3');

    return 0;
}
