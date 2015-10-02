#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	ofstream writer("demo.txt");

	if(!writer) {
		cout << "Error openeing file" << endl;

		return -1;
	}

	writer << "Keep working hard to make your dreams come true." << endl;

	writer.close();

	return 0;
}