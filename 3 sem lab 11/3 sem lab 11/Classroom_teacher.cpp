#include "Classroom_teacher.h"
void Classroom_teacher::see()
{
    cout << "\n__CLASSROOM TEACHER__\n";
    cout << "\nNAME: " << name << endl;
    cout << "\nAGE: " << age << endl;
    if (h != nullptr) h->see();
    cout << "\nCOUT OF STUDENTS: " << cout_of_student << endl;
}