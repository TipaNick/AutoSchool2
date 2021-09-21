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


struct kursant create_kursant();
struct kursant create_kursant(string f, int a, string e, string p, string c);
void view_kursant(kursant x);
void get_age_kursant(kursant x);
