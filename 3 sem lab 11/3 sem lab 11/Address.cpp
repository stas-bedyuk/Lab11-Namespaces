#include "Address.h"
Address::Address(const char* cname, const char* sname1, int hnumber)
{
    this->sname = new  Street(sname1);
    this->hnumber = new House(hnumber);
    strcpy(name_of_city, cname);
}
Address::~Address()
{
    cout << "\nWORK DESTRUCTOR ADDRESS\n";
    delete sname;
    delete hnumber;
}
void Address::see()
{
    cout << "\nCITY: " << name_of_city << endl;
    sname->see();
    hnumber->see();
}