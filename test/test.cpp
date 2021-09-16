#include <iostream>
#include "kursant.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    kursant abc = create();
    kursant abc2 = create("Вова", 23, "v@mail.ru", "+79456545152", "Б");
    view(abc);
    view(abc2);
    //cout << abc.fio << "\n" << abc2.fio;
}
