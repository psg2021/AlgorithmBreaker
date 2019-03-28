#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main_10845() {
	int line;
	cin >> line;

	string temp;
	int num;

	queue<int> q;

	for (int i = 0; i < line; i++) {
		cin >> temp;
		if (temp == "push") {
			cin >> num;
			q.push(num);
		}
		else if (temp == "front") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.front() << endl;
		}
		else if (temp == "back") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.back() << endl;
		}
		else if (temp == "size") {
			cout << q.size() << endl;
		}
		else if (temp == "empty") {
			if (q.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (temp == "pop") {
			if (q.empty()) cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
	}

	return 0;
}