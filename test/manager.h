#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
struct manager
{
	string fio;
	int age;
	string phone;
};

manager create_manager();
manager create_manager(string f, int a, string p);
void view_manager(manager x);
manager vvod_manager();