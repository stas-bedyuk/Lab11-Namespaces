#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Address.h"
using namespace std;
class Person
{
protected:
    int age;
    char name[30];
    Address* h=nullptr;   // агрегация

public:
    Person() {};
    Person(Address* h, int age1, const char* name1);
    ~Person() { cout << "\nWORK DESTRUCTOR PERSON\n"; }
    void see();
};
