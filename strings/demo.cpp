#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	string dogName = "goofy",
		   catName = "meow";

	cout << dogName.append(" is your dog name") << endl;

	cout << catName.append(" is your cat's name") << endl;

	cout << dogName.compare(catName) << endl;

	cout << dogName.size() << endl;

	return 0;
}