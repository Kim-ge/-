#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int Tcase;
	cin >> Tcase; 
	for (int i = 0; i <Tcase; i++) {
		int num; 
		string S;
		cin >> num; 
		cin >> S;

		for (int k = 0; k < S.length(); k++) { 
			for (int j = 0; j < num; j++) { 
				cout << S[k]; 
			}
		}
		cout << endl;
	}
	return 0;
}
