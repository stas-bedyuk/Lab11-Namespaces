#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Street.h"
#include "House.h"
using namespace std;
    class Address
    {
    protected:
        char name_of_city[30];
        Street* sname;  //����������
        House* hnumber; //���������� 
    public:
        Address() {};
        Address(const char* cname, const char* sname1, int hnumber);
        ~Address();
        void see();
    };

