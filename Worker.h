#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class Worker:public Employee
{
public:
	Worker() = default;
	Worker(string name,int age):Employee(name,age){}

	void print();
};

