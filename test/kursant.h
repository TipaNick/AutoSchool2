#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
struct kursant
{
public: 
	string fio;
    int age;
    string email;
    string phone;
    string category;

    void Create();
    void Create(string fio_k, int age_k, string email_k, string phone_k, string cat_k);
};



