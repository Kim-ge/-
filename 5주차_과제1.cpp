#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int Tcase;
	cin >> Tcase; //입력받을 케이스 개수 
	for (int i = 0; i <Tcase; i++) {
		int num; 
		string S;
		cin >> num; //케이스 개수만큼 각각 반복할 횟수, 문자열을 반복해서 입력받기
		cin >> S;

		for (int k = 0; k < S.length(); k++) { //입력받은 문자열 길이만큼
			for (int j = 0; j < num; j++) { //입력받은 반복 횟수만큼 문자열 출력
				cout << S[k]; //각각의 문자들을 같은 횟수만큼 반복해야 하므로 중첩 for문 사용
			}
		}
		cout << endl;
	}
	return 0;
}
