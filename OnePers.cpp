#include "OnePers.h"

OnePers::OnePers() = default;


OnePers::OnePers(const char* f_name, int a)
{
    name = new char[strlen(f_name) + 1];
    strcpy(name, f_name);
    age = a;
}

const char* OnePers::getName()
{
    return name;
}

int OnePers::getAge()
{
    return age;
}

void OnePers::setName(const char* val)
{
    delete[]name;
    name = _strdup(val);
}

void OnePers::setAge(int val)
{
    age = val;
}

void OnePers::print()
{
    cout << "Name:" << (name ? name : "Noname") << endl;
    cout << "Year of birth:" << age << endl;
}

OnePers::~OnePers()
{
    cout << "~Person()" << endl;
    delete[]name;
}
