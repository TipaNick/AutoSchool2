#include "kursant.h"

kursant create()
{
	struct kursant temp;
	temp.fio = "�.�.������";
	temp.age = 18;
	temp.email = "example@mail.ru";
	temp.phone = "+79237108483";
	temp.category = "�";
	return temp;
}

kursant create(string f, int a, string e, string p, string c)
{
	struct kursant temp;
	temp.fio = f;
	temp.age = a;
	temp.email = e;
	temp.phone = p;
	temp.category = c;
	return temp;
}

void view(kursant x)
{
	
	cout << "|| ���: ";
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
	cout << " || ���������: ";
	cout.width(2);
	cout << x.category << " ||\n";
}


