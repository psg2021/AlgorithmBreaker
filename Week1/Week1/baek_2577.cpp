#include <iostream>
#include <string>

using namespace std;

int main_2577() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	//string result = to_string(a*b*c);
	int arr[10] = { 0 };

	/*for (int i = 0; i < result.size(); i++) {
		arr[result.at(i) - '0']++;
	}*/

	int result = a * b * c;
	while (result != 0) {
		arr[result % 10]++;
		result /= 10;
	}

	for (int j : arr) {
		cout << j << endl;
	}
	return 0;
}