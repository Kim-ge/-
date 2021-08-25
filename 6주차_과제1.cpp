#include<iostream>
#include<stack>
using namespace std;

int main() {
    int k, putt;
    cin >> k;
    stack<int> num;

    for (int i = 0; i < k; i++) {
        cin >> putt;

        if (putt != 0) {
            num.push(putt);
        }
        else {
            num.pop();
        }
    }
    int sum = 0;
    int stack = num.size();

    while(!num.empty()) {
        sum += num.top();
        num.pop();
    }
    cout << sum;
  

    return 0;
}
