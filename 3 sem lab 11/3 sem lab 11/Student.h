#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Person.h"
#include "fstream"
#include "Address.h"
using namespace std;
class Student : public Person
{
protected:
    int class_number;
    char name_of_shcool[30];
public:
    Student() {};
    Student(Address* h, int age1, const char* name1, int cout, const char* name_of_shcool1);
    ~Student();
    void see();
	void write()
	{
		ofstream out("bab");
		try
		{
			if (!out) throw 1;
		}
		catch (int)
		{
			cout << "\nFILE IS NOT OPEN!!!\n";
			return;
		}
		out << name_of_shcool <<" "<< class_number << " "<<age <<" " <<name  << endl;
		out.close();
	}
	void read()
	{
		ifstream in("bab");
		try
		{
			if (!in) throw 1;
		}
		catch (int)
		{
			cout << "\nFILE IS NOT OPEN!!!\n";
			exit(1);
		}
			in >> name_of_shcool >> class_number>> age >> name;

		in.close();
	}
};
