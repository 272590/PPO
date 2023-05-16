#include <iostream>
#include <string>
#include "ui.h"
#include "klasa.h"
using namespace std;

void dodaj_osobe(Ludzie & spis)
{
    cout << endl <<"Kogo chcesz dodac?:\n\t1 - Student\t2 - Pracownik"<< endl;
    int d;
    string imie, nazwisko, pesel;

    do
    {   
        cin >> d;

    } while (d != 1 && d != 2);

    if (d == 1)
    {
        Student *dodajStudent = new Student();
        string indeks;

        cout << "\t*** Dane studenta ***\nPodaj imie: ";
        cin >> imie;
        dodajStudent->setImie(imie);

        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        dodajStudent->setNazwisko(nazwisko);

        int sprawdz = 0;
            do
            {
                cout << "Podaj pesel: ";
                cin >> pesel;
                sprawdz = dodajStudent->setPesel(pesel);
                if(sprawdz == 1)
                {
                   cout << "Pesel za maly,";
                }
                if(sprawdz == 2)
                {
                    cout << "Pesel za dlugi,";
                }
            }while(sprawdz);

        cout << "Podaj indeks: ";
        cin >> indeks;
        dodajStudent->setIndeks(indeks);

        spis.dodaj_osobe_do_spisu(dodajStudent);
    }
    else 
    {
        if (d == 2)
        {
            Pracownik *dodajPracownik = new Pracownik();
            string IDprac;

            cout << "\t*** Dane pracownika ***\nPodaj imie: ";
            cin >> imie;
            dodajPracownik->setImie(imie);

            cout << "Podaj nazwisko: ";
            cin >> nazwisko;
            dodajPracownik->setNazwisko(nazwisko);

            int sprawdz = 0;
                do
                {
                    cout << "Podaj pesel: ";
                    cin >> pesel;
                    sprawdz = dodajPracownik->setPesel(pesel);
                    if(sprawdz == 1)
                    {
                    cout << "Pesel za maly,";
                    }
                    if(sprawdz == 2)
                    {
                        cout << "Pesel za dlugi,";
                    }
                }while(sprawdz);
            
            cout << "Podaj numer identyfikacyjny: ";
            cin >> IDprac;
            dodajPracownik->setIDprac(IDprac);

            spis.dodaj_osobe_do_spisu(dodajPracownik);
        
        }
    }
}

void wyswietl_all(Ludzie & spis)
{
    cout << "\tIMIE\t-\tNAZWISKO\t-\tPESEL" <<endl;
    for (int i = 0; i < spis.getRozmiar(); i++)
    {
        cout << "\t" << spis.wyswietl_osobe(i).getImie()<<"\t-\t";
        cout << spis.wyswietl_osobe(i).getNazwisko()<<"\t\t-\t";            //robil -> wskaznikiem?
        cout << spis.wyswietl_osobe(i).getPesel()<<endl;
    }
}
void wyswietl_osobe(Inter *spis)
{   
    cout << endl << "Wyswietlam studenta lub pracownika" << endl;
    cout << "STUDENT: " << spis->getId() << endl;
    cout << "PRACOWNIK: " << spis->getId() << endl;
} 
 
