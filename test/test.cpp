#include <iostream>
#include "kursant.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //cout.width(100);

    kursant abc;
    abc.Create();

    cout << abc.fio << "\n";
}
