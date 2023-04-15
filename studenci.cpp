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

void wypiszStudentow(const vector<Student>& studenci) 
{
    cout << endl << "Wprowadzono następujące dane studentów:" << endl;
    for (int i = 0; i < studenci.size(); i++) {
        cout << "Student " << i+1 << ":" << endl;
        cout << "Imię: " << studenci[i].imie << endl;
        cout << "Nazwisko: " << studenci[i].nazwisko << endl;
        cout << "Numer indeksu: " << studenci[i].nr_indeksu << endl;
        cout << "Wiek: " << studenci[i].wiek << endl << endl;
}







