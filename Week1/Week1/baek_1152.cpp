#include <string>
#include <iostream>

using namespace std;

int main_1152() {
	string input;
	int count = 0;
	getline(cin, input);
	
	for (int i = 0; i < input.size(); i++) {
		if (input.at(i) == ' ') {
			if (i + 1 < input.size()) {
				count++;
			}
		}
		else if (i == 0) {
			count++;
		}
	}

	cout << count << endl;
	
	return 0;
}