#include <iostream>
using namespace std;

int main() {
	int T, A, B, C = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A;
		
		for (int k = 0; k < A; k++) {
			cin >> B;
			C = C + B;

		}
		cout << C << endl;
	}
	return 0;
}
