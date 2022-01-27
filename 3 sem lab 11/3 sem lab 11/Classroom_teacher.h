#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Address.h"
#include "fstream"
#include "Person.h"
using namespace std;
class Classroom_teacher : public Person
{
protected:
    int cout_of_student;
public:
    Classroom_teacher() {};
    Classroom_teacher(Address* h, int age1, const char* name1, int cout) :Person(h, age1, name1), cout_of_student(cout) {}
    ~Classroom_teacher() { cout << "\nWORK DESTRUCTOR CLASSROOM_TEACHER\n";}
    void see();
	void write()
	{
		ofstream out("bab3");
		try
		{
			if (!out) throw 1;
		}
		catch (int)
		{
			cout << "\nFILE IS NOT OPEN!!!\n";
			return;
		}
		out << cout_of_student <<" " << age <<" "<< name << endl;
		out.close();
	}
	void read()
	{
		ifstream in("bab3");
		try
		{
			if (!in) throw 1;
		}
		catch (int)
		{
			cout << "\nFILE IS NOT OPEN!!!\n";
			exit(1);
		}
			in >> cout_of_student >> age >> name;
		in.close();
	}
};