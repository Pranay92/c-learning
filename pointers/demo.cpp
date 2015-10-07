#include <iostream>

using namespace std;

int main () {

	int age = 24;
	int* ptr = &age;

	// this will print out the memory address of variable age
	cout << ptr << endl;

	// this is equivalent to *(&age) i.e value @ address of age
	cout << *ptr << endl;

	return 0;
}