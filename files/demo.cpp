#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	ofstream writer("demo.txt");
	ifstream reader("demo.txt");

	char letter;

	if(!writer) {
		cout << "Error openeing file" << endl;

		return -1;
	}

	writer << "Keep working hard to make your dreams come true." << endl;

	writer.close();
	

	if(!reader) {
		cout << "Error opening file for reading" << endl;

		return -1;
 	}

 	while(!reader.eof()) {
 		reader.get(letter);
 		cout << letter;
 	}

	return 0;
}