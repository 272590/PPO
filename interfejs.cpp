#include <iostream>
#include <string>
#include <vector>
using namespace std;
    
void interfejs(&Student)
{
    virtual string getType() = 0;
    virtual string getId() = 0;

    Student nr_albumu;
        Student getType()
        {
            return "Student";  
        }
        Student getId()
        {
            return nr_albumu;
        }
}