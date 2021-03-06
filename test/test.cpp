#include <iostream>
#include "kursant.h"
#include "instructor.h"
#include "car.h"
#include "manager.h"
#include "record.h"
#include <Windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251);

    kursant abc = create_kursant();
    kursant abc2 = create_kursant("Вова", 23, "v@mail.ru", "+79456545152", "Б");

    view_kursant(abc);
    view_kursant(abc2);

    instructor abc_ins = create_instructor();
    instructor abc_ins2 = create_instructor("Петрович", 45, "p@mail.ru", "+79456545152", 14);

    view_instructor(abc_ins);
    view_instructor(abc_ins2);
    
    car abc_car = create_car();
    car abc_car2 = create_car("Mercedes benz j55", "П123РО 122");

    view_car(abc_car);
    view_car(abc_car2);

    manager abc_mag = create_manager();
    manager abc_mag2 = create_manager("Андрей", 27, "+79485465152");

    view_manager(abc_mag);
    view_manager(abc_mag2);

    record zap1 = create_record();
    record zap2 = create_record(abc, abc_ins, abc_mag, "13:00 19.09.2020", abc_car);

    view_record(zap1);
    view_record(zap2);

    get_age_kursant(abc);

    hello_instructor(abc_ins2);

    get_manager_phone(abc_mag2);

    get_record_time(zap2);

    beep_beep(abc_car2);

    abc = vvod_kursant();

    view_kursant(abc);
}
