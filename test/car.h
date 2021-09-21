#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
struct car
{
	string model;
	string num;
};

struct car create_car();
struct car create_car(string m, string n);
void view_car(car x);
void beep_beep(car x);
