#include <iostream>

using namespace std;

bool hans(int n) {
	int prev_num = n % 10;
	n = n / 10;
	int temp_num = n % 10;
	int temp_minus = temp_num - prev_num;

	while (n >= 10) {
		prev_num = temp_num;
		n = n / 10;
		temp_num = n % 10;

		if (temp_minus != temp_num - prev_num) return false;

		temp_minus = temp_num - prev_num;
	}

	return true;
}

int main_1065() {
	int input;
	int count = 0;

	cin >> input;

	for (int i = 1; i <= input; i++) {
		if (hans(i)) count++;
	}

	cout << count << endl;

	return 0;
}

