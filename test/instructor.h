#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
struct instructor
{
    string fio;
    int age;
    string email;
    string phone;
    int exp;
};

instructor create_instructor();
instructor create_instructor(string f, int a, string e, string p, int exp);
void view_instructor(instructor x);
instructor vvod_instructor();