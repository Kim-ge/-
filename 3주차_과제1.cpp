#include <iostream>
using namespace std;

int main() {
	int T= 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int A,B,C= 0;
		cin >> A;

		for (int k = 0; k < A; k++) {
			cin >> B;
			C = C + B;

		}
		cout << C << endl;
	}
	return 0;
}
