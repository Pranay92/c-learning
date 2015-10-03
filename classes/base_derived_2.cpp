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

class Architect : public Person {
	
	private:

		string experience;

	public:

		string getExp() {
			return experience;
		};

		string info() {

			int age  = Person::getAge();
			string name = Person::getName();

			string info = "Hi my name is " + string(name) + " and I'm a" + to_string(age) + " years old Architect and I'm working for " + string(experience);

			return info;
		};

		Architect(int age, string name, string exp) : Person(age,name), experience(exp) {

		};
};

int main() {

	Person Mike(21,"MIke");
	Programmer Pranay(24,"Pranay");
	Architect Morris(25,"Morris","2 years and 2 months");

	cout << Pranay.info() << endl;
	cout << Mike.info() << endl;
	cout << Morris.info() << endl;

	return 0;
}