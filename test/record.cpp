#include "record.h"

record create_record()
{
	record temp_rec;

	kursant temp_kurs;
	temp_kurs.fio = "�.�.������";
	temp_kurs.age = 18;
	temp_kurs.email = "example@mail.ru";
	temp_kurs.phone = "+79237108483";
	temp_kurs.category = "�";

	instructor temp_ins;
	temp_ins.fio = "�.�.������";
	temp_ins.age = 40;
	temp_ins.email = "ppp@mail.ru";
	temp_ins.phone = "+79132776446";
	temp_ins.exp = 3;

	manager temp_manag;
	temp_manag.fio = "�.�.��������";
	temp_manag.age = 30;
	temp_manag.phone = "+79132776449";

	car temp_cr;
	temp_cr.model = "���� ������";
	temp_cr.num = "�111�� 120";

	temp_rec.kurs = temp_kurs;
	temp_rec.inst = temp_ins;
	temp_rec.manag = temp_manag;
	temp_rec.time = "16:00 19.09.2021";
	temp_rec.cr = temp_cr;

	return temp_rec;
}

record create_record(kursant k, instructor i, manager m, string t, car c)
{
	record temp;
	temp.kurs = k;
	temp.inst = i;
	temp.manag = m;
	temp.time = t;
	temp.cr = c;
	return temp;
}

void view_record(record x)
{
	cout << "������:\n|| ��� ��������: ";
	cout.width(15);
	cout << x.kurs.fio;
	cout.width(0);
	cout << " || ��� �����������: ";
	cout.width(15);
	cout << x.inst.fio;
	cout.width(0);
	cout << " || �����: ";
	cout.width(17);
	cout << x.time;
	cout.width(0);
	cout << "\n|| ������: ";
	cout.width(11);
	cout << x.cr.num;
	cout.width(0);
	cout << " || ��� ���������: ";
	cout.width(15);
	cout << x.manag.fio << " ||\n";
}
