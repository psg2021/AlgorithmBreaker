#include <iostream>

using namespace std;

char arr[3072][6143] = { ' ' };
//최대가 k=10일때 가로는 세로*2 -1 이 되기때문에 6143

void star(int h, int x, int y) {
	//x는 좌측상단 x의 좌표
	//y는 좌측상단 y의 좌표
	//height는 area의 높이.

	if (h / 3 == 1) {
		//기본 별모양그리면 된다면
		arr[x][y + 2] = '*';
		arr[x + 1][y + 1] = '*';
		arr[x + 1][y + 3] = '*';
		arr[x + 2][y] = '*';
		arr[x + 2][y + 1] = '*';
		arr[x + 2][y + 2] = '*';
		arr[x + 2][y + 3] = '*';
		arr[x + 2][y + 4] = '*';
		return;
	}
	else {
		//상단별
		star(h / 2, x, y + h / 2);
		//좌하단별
		star(h / 2, x + h / 2, y);
		//우하단별
		star(h / 2, x + h / 2, y + h);
	}

}

int main_2448() {
	int input;
	cin >> input;

	star(input, 0, 0);

	for (int p = 0; p < input; p++) {
		for (int q = 0; q < input * 2 - 1; q++) {
			cout << arr[p][q];
		}
		cout << endl;
	}

	

	return 0;
}