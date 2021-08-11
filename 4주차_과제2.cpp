#include<iostream>
using namespace std;

int main() {
	int num1, num2,min;
	int sum = 0;
	int num= 0;
	int pn = 0;
	cin >> num1;
	cin >> num2;

	for (int i = num1; i <= num2; i++) {
		for (int k = 1; k <= i; k++) {
			if (i % k == 0) 
				num++;
			
		}
		if (num == 2) {
			pn++;
			sum += i;
			if (pn == 1) 
				min = i;
		}
		
		
	}
	if (pn == 0) {
		cout << "-1";
	}
	else {
		cout << sum << endl;
		cout << min;
	}
	return 0;
}