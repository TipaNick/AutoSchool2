#include "manager.h"

manager create_manager()
{
    manager temp;
    temp.fio = "�.�.��������";
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
    cout << "��������:\n|| ���: ";
    cout.width(15);
    cout << x.fio;
    cout.width(0);
    cout << " || �������: ";
    cout.width(3);
    cout << x.age;
    cout.width(0);
    cout << " || �������: ";
    cout.width(11);
    cout << x.phone << " ||\n";
}

manager vvod_manager()
{
    manager temp;
    cout << "������� ���: ";
    cin >> temp.fio;
    cout << "������� �������: ";
    cin >> temp.age;
    cout << "������� �������: ";
    cin >> temp.phone;
    return temp;
}
