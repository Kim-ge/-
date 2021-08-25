#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    while (true) {
        string str;
        stack<char> st;
        getline(cin, str);
		int a = 0;
		int b = 0;

        if (str == ".") {
            break;
        }

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '[' || str[i] == '(')
				a++;
			if (str[i] == ']' || str[i] == ')')
			    b++;
		}
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '[' || str[i] == '(')
				st.push(str[i]);
			if (!st.empty())
			{
				if ((str[i] == ']' && st.top() == '[') || (str[i] == ')' && st.top() == '('))
					st.pop();
			}
		}
		if (st.empty() && a == b)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	return 0;

}
