#include "Parent.h"
void Parent::see()
{
    cout << "\n__PARENT__\n";
    cout << "\nNAME: " << name << endl;
    cout << "\nAGE: " << age << endl;
    if (h != nullptr)h->see();
    cout << "\nCOUT OF CHILDREN: " << cout_of_children << endl;
}