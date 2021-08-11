#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int min1, min2;
	int b1, b2, b3, d1, d2;
	cin >> b1;
	cin >> b2;
	cin >> b3;
	cin >> d1;
	cin >> d2;
	
	min1 = min(b1, b2);
	min1 = min(min1, b3);
	min2 = min(d1, d2);

	cout << min1 + min2 - 50;

	return 0;
	
}