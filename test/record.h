#include "kursant.h"
#include "instructor.h"
#include "car.h"
#include "manager.h"

#pragma once
struct record
{
	kursant kurs;
	instructor inst;
	manager manag;
	string time;
	car cr;
};

struct record create_record();
struct record create_record(kursant k, instructor i, manager m, string t, car c);
void view_record(record x);

