#include <iostream>
#include "kursant.h"
#include "instructor.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    kursant abc = create_kursant();
    kursant abc2 = create_kursant("Вова", 23, "v@mail.ru", "+79456545152", "Б");

    view_kursant(abc);
    view_kursant(abc2);

    instructor abc_ins = create_instructor();
    instructor abc_ins2 = create_instructor("Петрович", 45, "p@mail.ru", "+79456545152", 14);

    view_instructor(abc_ins);
    view_instructor(abc_ins2);
    
}
