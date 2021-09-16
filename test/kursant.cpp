#include "kursant.h"

kursant create()
{
	struct kursant temp;
	temp.fio = "П.П.Пример";
	temp.age = 18;
	temp.email = "example@mail.ru";
	temp.phone = "+79237108483";
	temp.category = "Б";
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
	
	cout << "|| ФИО: ";
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
	cout << " || Категория: ";
	cout.width(2);
	cout << x.category << " ||\n";
}


