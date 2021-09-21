#include "manager.h"

manager create_manager()
{
    manager temp;
    temp.fio = "П.П.Проверка";
    temp.age = 30;
    temp.phone = "+79132776449";
    return temp;
}

manager create_manager(string f, int a, string p)
{
    manager temp;
    temp.fio = f;
    temp.age = a;
    temp.phone = p;
    return temp;
}

void view_manager(manager x)
{
    cout << "Менеджер:\n|| ФИО: ";
    cout.width(15);
    cout << x.fio;
    cout.width(0);
    cout << " || Возраст: ";
    cout.width(3);
    cout << x.age;
    cout.width(0);
    cout << " || Телефон: ";
    cout.width(11);
    cout << x.phone << " ||\n";
}

void get_manager_phone(manager x)
{
    cout << "Я " << x.fio << ". Мой телефон: " << x.phone << endl;
}
