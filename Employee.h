#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string _name;
	int _age;
public:
	Employee() = default;
	Employee(string name,int age):_name(name),_age(age){}

	string getName();
	int getAge();


	virtual void print() = 0;
};

