#include <iostream>

using namespace std;

int main_4344() {
	int line;
	cin >> line;

	//enter�� ���������Ƿ� clear�ѹ�������.
	//cin.clear();

	for (int i = 0; i < line; i++) {
		//�̷��� ���ָ� ��� �ݺ����� ��������.
		int num;
		int sum = 0;

		cin >> num;

		int *arr = new int[num];

		for (int j = 0; j < num; j++) {
			//�ش� line���� ��� �޾ƿ�����.
			cin >> arr[j];
			sum += arr[j];
		}

		int avg = 0;
		avg = sum / num;

		int count = 0;

		for (int k = 0; k < num; k++) {
			if (avg < arr[k]) {
				count++;
			}
		}

		float percent = (float)count / (float)num * 100;
		cout << fixed;
		cout.precision(3);
		cout << percent;

		cout << "\%" << endl;

		delete[] arr;
	}

	return 0;

}