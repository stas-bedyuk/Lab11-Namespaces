#include "Person.h"
Person::Person(Address* h, int age1, const char* name1)
{
    this->h = h;
    age = age1;
    strcpy(name, name1);
}
void Person::see()
{
    cout << "\nNAME: " << name << endl;
    cout << "\nAGE: " << age << endl;
    if (h != nullptr) h->see();
}