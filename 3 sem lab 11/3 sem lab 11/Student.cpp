#include "Student.h"
Student::Student(Address* h, int age1, const char* name1, int cout, const char* name_of_shcool1) :Person(h, age1, name1), class_number(cout)
{
    strcpy(name_of_shcool, name_of_shcool1);
}
Student::~Student()
{
    cout << "\nWORK DESTRUCTOR STUDENT\n";
}
void Student::see()
{
    cout << "\n__STUDENT__\n";
    cout << "\nNAME: " << name << endl;
    cout << "\nAGE: " << age << endl;
    if(h!=nullptr) h->see();
    cout << "\nCLASS NUMBER: " << class_number << endl;
    cout << "\nNAME OF SHCOOL: " << name_of_shcool << endl;
}