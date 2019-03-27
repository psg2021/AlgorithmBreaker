#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main_10828() {
	int line;
	int num;
	stack<int> s;

	string cmd;
	cin >> line;
	for (int i = 0; i < line; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> num;
			s.push(num);
		}
		else if (cmd == "top") {
			if (s.empty()) cout << -1 << endl;
			else {
				cout << s.top() << endl;
			}
		}
		else if (cmd == "size") {
			cout << s.size() << endl;
		}
		else if (cmd == "empty") {
			if (s.empty()) cout << 1 << endl;
			else {
				cout << 0 << endl;
			}
		}
		else if (cmd == "pop") {
			if (s.empty()) cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else {
			cout << "error" << endl;
		}
	}

	return 0;
}