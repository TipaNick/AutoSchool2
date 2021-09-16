#include "kursant.h"

void kursant::Create()
{
	fio = "П.П.Пример";
	age = 18;
	email = "example@mail.ru";
	phone = "+79237108483";
	category = "Б";
}

void kursant::Create(string fio_k, int age_k, string email_k, string phone_k, string cat_k)
{
	fio = fio_k;
	age = age_k;
	email = email_k;
	phone = phone_k;
	category = cat_k;
}
