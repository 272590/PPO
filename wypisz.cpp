#include <iostream>
using namespace std;

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
