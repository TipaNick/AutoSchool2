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

record create_record();
record create_record(kursant k, instructor i, manager m, string t, car c);
void view_record(record x);
void get_record_time(record x);
record vvod_record();

