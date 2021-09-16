#include <iostream>
#include "kursant.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    kursant abc;
    abc.Create();

    kursant abc2;
    abc2.Create("Ваня", 23, "v@mail.ru", "+79456584", "Б");

    cout << abc.fio << "\n" << abc2.fio;
}
