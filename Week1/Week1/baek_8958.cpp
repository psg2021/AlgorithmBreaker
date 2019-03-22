#include <iostream>
#include <string>

using namespace std;

int main_8958() {
	int n;

	cin >> n;

	int *p;
	p = new int[n];

	string input;
	int count = 0;

	for(int i = 0 ; i < n ; i++){
		cin >> input;
		p[i] = 0;
		count = 0;
		for (int j = 0; j < input.size(); j++) {
			if (input.at(j) == 'O') {
				count++;
				p[i] += count;
			}
			else {
				count = 0;
			}
		}
	}

	for (int k = 0; k < n; k++) {
		cout << p[k] << endl;
	}
	
	return 0;
}