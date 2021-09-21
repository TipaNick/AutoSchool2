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

struct manager create_manager();
struct manager create_manager(string f, int a, string p);
void view_manager(manager x);
void get_manager_phone(manager x);
