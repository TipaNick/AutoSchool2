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

car create_car();
car create_car(string m, string n);
void view_car(car x);
car vvod_car();
