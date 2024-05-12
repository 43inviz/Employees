#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class Manager:public Employee
{
public:
	Manager() = default;
	Manager(string name,int age):Employee(name,age){}

	void print();
};

