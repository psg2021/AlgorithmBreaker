#include <iostream>
#include <string>

using namespace std;

int main() {

	string input;
	string str;

	for (int i = 0; i < 8; i++) {
		cin >> input;
		str.append(input);
	}

	if (str == "12345678") cout << "ascending" << endl;
	else if (str == "87654321") cout << "descending" << endl;
	else cout << "mixed" << endl;
	/*int arr[8];
	int temp = 0;
	string answer = "mixed";

	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}*/

	//for (int j = 0; j < 8; j++) {
	//	
	//	/*if (j != 7) {
	//		if (temp == 0) {
	//			temp = arr[j] - arr[j + 1];
	//			if (temp == 1) {
	//				answer = "descending";
	//			}
	//			else if(temp == -1){
	//				answer = "ascending";
	//			}
	//		}
	//		else if (temp != arr[j] - arr[j + 1]) {
	//			break;
	//		}
	//	}*/
	//}

	

	return 0;
}