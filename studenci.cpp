#include <iostream>
using namespace std;

string *tab_stud = new string[20];

void dodwanie_studenci()
{
  struct Student
  {
    string imie, nazwisko;
    int wiek, index;
    
    cout << "Podaj imie: \t";
    cin >> imie;
    cout << "Podaj nazwisko: \t";
    cin >> nazwisko;
    cout << "Podaj wiek: \t";
    cin >> wiek;
    cout << "Podaj nr indeksu: \t";
    cin >> index;
  }
}

void drukowanie_studenci()
{
  for (int i = 0; i < tab_stud.size; i++)
  {
    cout << imie << "\t" << nazwisko << "\t" << wiek << "\t" << index << endl;
  }
}
