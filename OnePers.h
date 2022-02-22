#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class OnePers
{
	char* name = nullptr;
	int age = 0;
public:
	OnePers();
	OnePers(const char* f_name, int a);
	const char* getName();
	int getAge();
	void setName(const char* val);
	void setAge(int val);
	void print();
	~OnePers();
};

