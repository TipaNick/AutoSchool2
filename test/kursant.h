#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
struct kursant
{
	string fio;
    int age;
    string email;
    string phone;
    string category;
};


struct kursant create();
struct kursant create(string f, int a, string e, string p, string c);
void view(kursant x);
