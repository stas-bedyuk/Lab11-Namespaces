#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Street
{
protected:
    char name_of_street[30];
public:
    Street() {};
    Street(const char* sname){ strcpy(name_of_street, sname);}
    ~Street() { cout << "\nWORK DESTRUCTOR STREET\n";}
    void see()
    {
        cout << "\nSTREET: " << name_of_street << endl;
    }
};
