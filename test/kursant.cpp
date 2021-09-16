#include "kursant.h"
#include <Windows.h>

void kursant::Create()
{
	strcpy_s(fio, "П.П.Пример");
	age = 18;
	strcpy_s(email, "example@mail.ru");
	strcpy_s(phone, "+79237108483");
	strcpy_s(category, "Б");
}
