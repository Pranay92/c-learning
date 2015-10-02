#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Base{

	public:
		string name;
		void setName(string argname) {
			name = argname;
		};

		virtual string getName() {
			return name;
		}
};

class Derived : public Base {

	public:
		string getName() {
			return ("I'm called from the derived and my name is " + name);
		}
};

int main() {
	
	Derived student;
	student.setName("Pranay");
	cout << student.getName() << endl;

	return 0;

};