#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int add(int first,int second = 0) {
	return first + second;
}

int add(int first, int second, int third) {
	return first + second + third;
}

int factorial(int num) {
	if(num == 1) {
		return num;
	}

	return num * factorial(num - 1);
}

int main() {

	cout << factorial(5) << endl;

	return 0;
}