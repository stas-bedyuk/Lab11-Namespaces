#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Address.h"
#include "Person.h"
#include "fstream"
using namespace std;
class Parent : public Person
{
protected:
    int cout_of_children;
public:
    Parent() {};
    Parent(Address* h, int age1, const char* name1, int cout) :Person(h, age1, name1), cout_of_children(cout) {}
    ~Parent() { cout << "\nWORK DESTRUCTOR PARENT\n"; }
    void see();
	void write()
	{
		ofstream out("bab1");
		try
		{
			if (!out) throw 1;
		}
		catch (int)
		{
			cout << "\nFILE IS NOT OPEN!!!\n";
			return;
		}
		out << cout_of_children <<" "<< age<<" " << name << endl;
		out.close();
	}
	void read()
	{
		ifstream in("bab1");
		try
		{
			if (!in) throw 1;
		}
		catch (int)
		{
			cout << "\nFILE IS NOT OPEN!!!\n";
			exit(1);
		}
	
	
			in >> cout_of_children >> age >> name;

		in.close();
	}
};
