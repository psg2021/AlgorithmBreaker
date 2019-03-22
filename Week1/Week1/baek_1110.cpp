#include <iostream>

using namespace std;

int main_1110() {
	int input;
	cin >> input;

	int ten = 0, one = 0, count = 0;

	ten = input / 10;
	one = input % 10;
	
	do {
		int temp;

		temp = ten + one;
		ten = one;
		one = temp % 10;
		count++;
	} while (ten * 10 + one != input);
	
	cout << count <<endl;

	return 0;
}