#include "car.h"

car create_car()
{
    car temp;
    temp.model = "���� ������";
    temp.num = "�111�� 120";
    return temp;
}

car create_car(string m, string n)
{
    car temp;
    temp.model = m;
    temp.num = n;
    return temp;
}

void view_car(car x)
{
    cout << "������:\n|| ������: ";
    cout.width(x.model.length() + 3);
    cout << x.model;
    cout.width(0);
    cout << "|| �����: ";
    cout.width(11);
    cout << x.num << " ||\n";
}

void beep_beep(car x)
{
    cout << x.model << " ������ ���-���." << endl;
}

car vvod_car()
{
    car temp;
    cout << "������� ������: ";
    cin >> temp.model;
    cout << "������� �����: ";
    cin >> temp.num;
    return temp;
}
