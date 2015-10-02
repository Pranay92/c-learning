#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void changeName(string* name) {
	*name = "something new";
}


int main() {
	string name = "something old";

	changeName(&name);

	cout << name << endl;

	return 0;
}