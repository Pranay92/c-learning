#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Person {
	
	private:
		
		int age;
		string name;
	
	public:
		
		int getAge() {
			return age;
		};

		string getName() {
			return name;
		};

		virtual string info() {

			string intro = ("Hi my name is " + string(name) + " and I'm " + to_string(age) + " years old.");
			return intro;
		};

		Person(int pAge, string pName) {
			age = pAge;
			name = pName;
		};

};

class Programmer : public Person {

	public: 
		string info() {

			int age = Person::getAge();
			string name = Person::getName();

			string intro = "Hi my name is " + string(name) + " and I'm a " + to_string(age) + " years old programmer.";
			return intro;
		};


		// we neeed to explicitliy call the base class constrcutor otherwise it will throw an error 
		// ref - http://stackoverflow.com/questions/23647409/error-base-class-constructor-must-explicitly-initialize-parent-class-construct
		Programmer(int pAge, string pName) : Person(pAge, pName) {}

};

int main() {

	Person Mike(21,"MIke");

	cout << Mike.info() << endl;

	Programmer Pranay(24,"Pranay");

	cout << Pranay.info() << endl;

	return 0;
}