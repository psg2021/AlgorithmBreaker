#include <iostream>
#include <string>

using namespace std;

int main() {
	//string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	//int x, y;
	//cin >> x;
	//cin >> y;

	//int day = 0;

	////1������ ���ʴ�� �Ѿ�� �� ���� �´� �ϼ��� �߰����ְ�
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
	////�űⰪ�� y�� �߰����ָ�	
	////�ش� ��¥���� ������ �ɸ�����������

	////�ش��� 7�� ���� �������� 0�̸� ������ 1�̸� ȭ...�̷���.
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