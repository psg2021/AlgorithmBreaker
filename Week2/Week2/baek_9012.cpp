#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main_9012() {
	int num;
	cin >> num;
	string input;
	string answer;

	for (int i = 0; i < num; i++) {
		stack<char> s;
		cin >> input;
		answer = "YES";
		
		for (int j = 0; j < input.size(); j++) {
			if (input.at(j) == '(') {
				s.push(input.at(j));
			}
			else {
				if (s.empty()) {
					answer = "NO";
				}
				else{
					s.pop();
				}
			}
		}
		if (s.size() != 0) {
			answer = "NO";
		}
		cout << answer << endl;
	}
	return 0;
}