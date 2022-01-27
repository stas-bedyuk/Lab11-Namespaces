// 3 sem lab 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Address.h"
#include "Parent.h"
#include "Classroom_teacher.h"
#include "Student.h"
using namespace std;

namespace NAME
{
    Street;
    House;
    Address;
    Person;
    Parent;
    Classroom_teacher;
    Student;
}
using namespace NAME;
int main()
{//клавиатура текстовый файл загрузка
    
    char name_of_city[30];
    char name_of_street[30];
    char name_of_teacher[30];
    char name_of_school[30];
    int house;
    int age;
    int count;
    int j;
    cout << "\nDo you like enter or read information?(1/0)\n";
    cin >> j;
    if (j == 1)
    {
        cout << "\nEnter the name of city for Classroom_teacher: ";
        cin >> name_of_city;
        cout << "\nEnter the name of street for Classroom_teacher: ";
        cin >> name_of_street;
        cout << "\nEnter the number of house Classroom_teacher: ";
        cin >> house;
        Address* h1 = new Address(name_of_city, name_of_street, house);
        cout << "\nEnter the age of Classroom_teacher: ";
        cin >> age;
        cout << "\nEnter the name of Classroom_teacher: ";
        cin >> name_of_teacher;
        cout << "\nEnter the count of Classroom_teacher: ";
        cin >> count;
        Classroom_teacher* b = new Classroom_teacher(h1, age, name_of_teacher, count);
        cout << "\nEnter the name of city for Parent and student: ";
        cin >> name_of_city;
        cout << "\nEnter the name of street for Parent and student: ";
        cin >> name_of_street;
        cout << "\nEnter the number of house Parent and student: ";
        cin >> house;
        Address* h = new Address(name_of_city, name_of_street, house);
        cout << "\nEnter the age of Parent: ";
        cin >> age;
        cout << "\nEnter the name of Parent: ";
        cin >> name_of_teacher;
        cout << "\nEnter the count of children for Parent: ";
        cin >> count;
        Parent* a = new Parent(h, age, name_of_teacher, count);
        cout << "\nEnter the age of Student: ";
        cin >> age;
        cout << "\nEnter the name of Student: ";
        cin >> name_of_teacher;
        cout << "\nEnter the number of class for Student: ";
        cin >> count;
        cout << "\nEnter the name of  schol: ";
        cin >> name_of_school;
        Student* c = new Student(h, age, name_of_teacher, count, name_of_school);
        cout << endl << endl;
        a->see();
        b->see();
        c->see();
        a->write();
        c->write();
        b->write();
        delete a;
        delete b;
        delete c;
        delete h;
        delete h1;
    }
    else
    {
        Student a1;
        Parent b1;
        Classroom_teacher c1;
        a1.read();
        b1.read();
        c1.read();
        a1.see();
        cout << endl << endl;
        b1.see();
        cout << endl << endl;
        c1.see();
        cout << endl << endl;
    }
    
    return 0;
}

