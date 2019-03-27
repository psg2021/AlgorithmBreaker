#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main_1874() {
	int input;
	int temp = 1;
	int num;
	string answer;
	stack<int> s;

	cin >> input;


	for (int i = 0; i < input; i++) {
		cin >> num;
		if (temp <= num) {
			for (temp; temp <= num; temp++) {
				s.push(temp);
				answer.append("+\n");
			}
			answer.append("-\n");
			s.pop();
		}
		else if(num == s.top()){
			answer.append("-\n");
			s.pop();
		}
		else {
			answer = "NO";
			break;
		}
	}

	cout << answer ;
	return 0;
}