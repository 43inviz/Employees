#pragma once
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;
class President:public Employee
{
public:
	President() = default;
	President(string name, int age) :Employee(name, age) {}

	void print();
};

