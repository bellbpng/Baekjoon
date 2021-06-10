#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	while (true) {
		string str;
		cin >> str;
		if (str == "0") { break; }

		stack<char> s;
		string rev;
		for (int i = 0; i < str.length(); i++) {
			s.push(str[i]);
		}

		int size = s.size();
		for (int i = 0; i < size; i++) {
			rev.push_back(s.top());
			s.pop();
		}

		if (str == rev) { printf("yes\n"); }
		else { printf("no\n"); }
	}
}