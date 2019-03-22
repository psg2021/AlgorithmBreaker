#include <iostream>
#include <string>

using namespace std;

int main() {
	//string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	//int x, y;
	//cin >> x;
	//cin >> y;

	//int day = 0;

	////1월부터 차례대로 넘어가고 각 월에 맞는 일수를 추가해주고
	////if(x != 1){
	//	for (int i = 1; i < x; i++) {
	//		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10) {
	//			day += 31;
	//		}
	//		else if (i == 2) {
	//			day += 28;
	//		}
	//		else {
	//			day += 30;
	//		}
	//	}
	//	
	////}

	//day += y-1;
	////거기값에 y를 추가해주면	
	////해당 날짜까지 몇일이 걸리는지나오고

	////해당을 7로 나눈 나머지가 0이면 월요일 1이면 화...이런식.
	//cout << days[day % 7];

	string a;

	cin >> a;

	//a = "onetwothreefourfivesixseven";

	int length = a.length();

	for (int i = 0; i < length ; i++) {
		cout << a.at(i);
		if ((i+1) % 10 == 0 && i != 0) {
			cout << "\n";
		}
	}

	return 0;
}