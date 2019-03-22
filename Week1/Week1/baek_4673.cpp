#include <iostream>

using namespace std;

int main_4673() {
	//언제 생성자가 있을까?
	//10* i + j + i + j = answer
	//i와 j가 없는 answer가 셀프넘버
	//11*i + 2*j 해서 결과가 나올수 없는 숫자.
	//즉 11의 배수 11 22 33 44 55 66 77 88 99를 빼고도 2로나눠서 나머지가 0이아닌수.

	//2가지방법. 모든 숫자에서 셀프넘버 아닌거 빼기.
	//셀프넘버 찾기.
	//찾는다면 어떻게 찾아야되나 모든수마다 최대한 11을 빼고 뭘해야되네.
	// 첫번쨰 방법으로 해보자.

	int num[10001] = { 0 };
	for (int i = 0; i < 10001 ; i++){
		num[i] = i;
	}

	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10; c++) {
				for (int d = 0; d < 10; d++) {
					if (1001 * a + 101 * b + 11 * c + 2 * d > 10000) break;
					num[1001 * a + 101 * b + 11 * c + 2 * d] = 0;
				}
			}
		}
	}
	

	for (int j = 1; j < 10001; j++) {
		if (num[j] != 0) {
			cout << num[j] << endl;
		}
	}

	return 0;
}