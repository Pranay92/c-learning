#include <iostream>
#include <fstream>

using namespace std;


/*
	The following pattern is equivalent to JS hoisting
	where you can first pass in functions like this

	var obj = {};
	obj.getVal = getVal;
	return obj;

	and then actually define getVal after 'return'

	function getVal() {
	
	};

	this is needed because the int will execute at the first, if the functions aren't defined yet will throw error
	declaring functions in this way at the top makes the code more readable
*/
	
int getNum();
void addNum(int no);
int num = 0;

int main() {
	addNum(20);
	addNum(10);
	cout << getNum() << endl;
	return 0;
};

int getNum() {
	return num;
};

void addNum(int no) {
	num += no;
};