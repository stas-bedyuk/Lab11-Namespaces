#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class House
{
protected:
    int number_of_house;
public:
    House() {};
    House(int hnumber) : number_of_house(hnumber) {}
    ~House() { cout << "\nWORK DESTRUCTOR HOUSE\n";}
    void see() { cout << "\nHOUSE: " << number_of_house << endl; }
};
