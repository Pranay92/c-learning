#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	int matrix[2][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10}
	};

	int i,j;

	for(i = 0; i < 2; i++) {
		for(j = 0; j < 5; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}


	return 0;
}
