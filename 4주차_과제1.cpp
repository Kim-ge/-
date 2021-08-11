#include <iostream>
using namespace std;

int main() {
    int menu[5];

    int min1 = 9999;
    int min2 = 9999;
    for (int i = 0; i < 3; i++) {
        cin >> menu[i];
        if (menu[i] < min1)
            min1 = menu[i];
    }
    for (int i = 3; i < 5; i++)
    {
        cin >> menu[i];
        if (menu[i] < min2)
            min2 = menu[i];
    }
    cout << min1 + min2 - 50;
}
