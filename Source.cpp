#include <iostream>
#include <string>
#include "Employee.h"
#include "President.h"
#include "Manager.h"
#include "Worker.h"

using namespace std;

int main() {

	Manager mg("Alex", 32);
	President pres("Jhon", 59);
	Worker work("Vasyl", 35);

	mg.print();
	pres.print();
	work.print();
	return 0;
}