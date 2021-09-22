#include "car.h"

car create_car()
{
    car temp;
    temp.model = "Лада Калина";
    temp.num = "А111АА 120";
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
    cout << "Машина:\n|| Модель: ";
    cout.width(x.model.length() + 3);
    cout << x.model;
    cout.width(0);
    cout << "|| Номер: ";
    cout.width(11);
    cout << x.num << " ||\n";
}

void beep_beep(car x)
{
    cout << x.model << " делает Бип-Бип." << endl;
}

car vvod_car()
{
    car temp;
    cout << "Введите модель: ";
    cin >> temp.model;
    cout << "Введите номер: ";
    cin >> temp.num;
    return temp;
}
