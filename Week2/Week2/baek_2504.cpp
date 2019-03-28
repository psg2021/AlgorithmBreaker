#include <iostream>
#include <stack>
#include <string>

using namespace std;
//stack<int> s;

/*
int func2();
int func1();

int func1() {
	int temp = s.top();
	s.pop();
	int answer = 0;
	int count = 0;
	while (true) {
		if (temp == 1) {
			if (count == 0) answer = 1;
			return (answer * 2);
		}
		else if (temp == 2) {
			answer += func1();
			temp = s.top();
			s.pop();
		}
		else if (temp == 3) {
			return -100000;
		}
		else if (temp == 4) {
			answer += func2();
			temp = s.top();
			s.pop();
		}
		count++;
	}
}

int func2() {
	int temp = s.top();
	s.pop();
	int answer = 0;
	int count = 0;
	while (true) {
		if (temp == 1) {
			return -100000;
		}
		else if (temp == 2) {
			answer += func1();
			temp = s.top();
			s.pop();
		}
		else if (temp == 3) {
			if (count == 0) answer = 1;
			return answer * 3;
			
		}
		else if (temp == 4) {
			answer += func2();
			temp = s.top();
			s.pop();
		}
		count++;
	}
}

int main_2504() {
	string input;
	cin >> input;

	int answer = 0;
	int count_a = 0;
	int count_b = 0;

	for (int i = 0; i < input.size(); i++) {
		char temp = input.at(i);
		if (temp == '(') {
			s.push(1);
		}
		else if (temp == ')') {
			s.push(2);
		}
		else if (temp == '[') {
			s.push(3);
		}
		else if (temp == ']') {
			s.push(4);
		}
		else {
			cout << "push error" << endl;
			return answer;
		}
	}

	while (!s.empty()) {
		int temp = s.top();
		s.pop();

		if (temp == 2) {
			answer += func1();
		}
		else if (temp == 4) {
			answer += func2();
		}
		else {
			answer = -100000000;
		}
	}
	if (answer < 0) {
		cout << "0" << endl;
		return 0;
	}
	cout << answer << endl;
	return 0;	
}
*/

/*
int main_2504() {
	string input;
	cin >> input;
	int answer = 0;

	for (int i = 0; i < input.size(); i++) {
		if (input.at(i) == '(') {
			s.push(-2);
		}
		else if (input.at(i) == '[') {
			s.push(-3);
		}
		else if (input.at(i) == ')') {
			if (s.empty()) {
				answer = 0;
				break;
			}
			else if (s.top() == -2) {
				s.pop();
				s.push(2);
				if (s.size() == 1) {
					answer += s.top();
					s.pop();
				}
			}
			else {
				//다른숫자가 안에 껴있을경우
				int temp = 0;
				while (s.top() != -2) {
					if (s.top() == -3) {
						answer = -100000;
						break;
					}
					temp += s.top();
					s.pop();
				}
				if (s.top() == -2) {
					s.pop();
					s.push(temp * 2);
					if (s.size() == 1) {
						answer += s.top();
						s.pop();
					}
				}	
			}
		}
		else if (input.at(i) == ']') {
			if (s.empty()) {
				answer = -1000000;
			}
			else if (s.top() == -3) {
				s.pop();
				s.push(3);
				if (s.size() == 1) {
					answer += s.top();
					s.pop();
				}
			}
			else {
				//다른숫자가 안에 껴있을경우
				int temp = 0;
				while (s.top() != -3) {
					if (s.top() == -2) {
						answer = -100000;
						break;
					}
					temp += s.top();
					s.pop();
				}
				if (s.top() == -3) {
					s.pop();
					s.push(temp * 3);
					if (s.size() == 1) {
						answer += s.top();
						s.pop();
					}
				}
			}
		}
	}
	if (answer < 0 || s.size() != 0) cout << 0 << endl;
	else cout << answer << endl;

	return 0;
}
*/