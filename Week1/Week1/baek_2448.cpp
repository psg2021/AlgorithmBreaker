#include <iostream>

using namespace std;

char arr[3072][6143] = { ' ' };
//�ִ밡 k=10�϶� ���δ� ����*2 -1 �� �Ǳ⶧���� 6143

void star(int h, int x, int y) {
	//x�� ������� x�� ��ǥ
	//y�� ������� y�� ��ǥ
	//height�� area�� ����.

	if (h / 3 == 1) {
		//�⺻ �����׸��� �ȴٸ�
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
		//��ܺ�
		star(h / 2, x, y + h / 2);
		//���ϴܺ�
		star(h / 2, x + h / 2, y);
		//���ϴܺ�
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