#include "instructor.h"

instructor create_instructor()
{
    instructor temp;
    temp.fio = "�.�.������";
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
	cout << "����������:\n|| ���: ";
	cout.width(15);
	cout << x.fio;
	cout.width(0);
	cout << " || �������: ";
	cout.width(3);
	cout << x.age;
	cout.width(0);
	cout << " || �����: ";
	cout.width(20);
	cout << x.email;
	cout.width(0);
	cout << " || �������: ";
	cout.width(11);
	cout << x.phone;
	cout.width(0);
	cout << " || ���� ������: ";
	cout.width(2);
	cout << x.exp << " ||\n";
}

instructor vvod_instructor()
{
	instructor temp;
	cout << "������� ���: ";
	cin >> temp.fio;
	cout << "������� �������: ";
	cin >> temp.age;
	cout << "������� �����: ";
	cin >> temp.email;
	cout << "������� �������: ";
	cin >> temp.phone;
	cout << "������� ����: ";
	cin >> temp.exp;
	return temp;

}
