#include <iostream>
#include <vector>
#include <string>

using namespace std;

void dodajStudenta(vector<Student>& studenci) 
{
    string imie, nazwisko;
    int nr_indeksu, wiek;

    cout << "Podaj imię, nazwisko, numer indeksu i wiek studenta: " << endl;
    cin >> imie >> nazwisko >> nr_indeksu >> wiek;

    studenci.push_back(Student(imie, nazwisko, nr_indeksu, wiek));
}









