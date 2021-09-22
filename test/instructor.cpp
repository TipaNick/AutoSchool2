#include "instructor.h"

instructor create_instructor()
{
    instructor temp;
    temp.fio = "П.П.Пример";
    temp.age = 40;
    temp.email = "ppp@mail.ru";
    temp.phone = "+79132776446";
    temp.exp = 3;
    return temp;
}

instructor create_instructor(string f, int a, string e, string p, int exp)
{
    instructor temp;
    temp.fio = f;
    temp.age = a;
    temp.email = e;
    temp.phone = p;
    temp.exp = exp;
    return temp;
}

void view_instructor(instructor x)
{
	cout << "Инструктор:\n|| ФИО: ";
	cout.width(15);
	cout << x.fio;
	cout.width(0);
	cout << " || Возраст: ";
	cout.width(3);
	cout << x.age;
	cout.width(0);
	cout << " || Почта: ";
	cout.width(20);
	cout << x.email;
	cout.width(0);
	cout << " || Телефон: ";
	cout.width(11);
	cout << x.phone;
	cout.width(0);
	cout << " || Стаж работы: ";
	cout.width(2);
	cout << x.exp << " ||\n";
}

instructor vvod_instructor()
{
	instructor temp;
	cout << "Введите ФИО: ";
	cin >> temp.fio;
	cout << "Введите возраст: ";
	cin >> temp.age;
	cout << "Введите почту: ";
	cin >> temp.email;
	cout << "Введите телефон: ";
	cin >> temp.phone;
	cout << "Введите стаж: ";
	cin >> temp.exp;
	return temp;

}
