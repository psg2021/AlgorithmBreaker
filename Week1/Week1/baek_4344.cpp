#include <iostream>

using namespace std;

int main_4344() {
	int line;
	cin >> line;

	//enter가 남아있으므로 clear한번해주자.
	//cin.clear();

	for (int i = 0; i < line; i++) {
		//이렇게 해주면 몇번 반복할지 정해진다.
		int num;
		int sum = 0;

		cin >> num;

		int *arr = new int[num];

		for (int j = 0; j < num; j++) {
			//해당 line에서 몇개를 받아오는지.
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