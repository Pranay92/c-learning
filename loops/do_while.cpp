#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	string userInput;
	int numberGuessed;

	do {
		cout << "Enter lucky number: ";

		getline(cin,userInput);

		numberGuessed = stoi(userInput);
	} while(numberGuessed % 3 != 0);

	cout << "You won!!" << endl;

	return 0;
}