#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	while (true) {
		string str;
		getline(cin, str);
		if (str == "END") break;

		int len = str.length();
		stack<char> s;
		for (int i = 0; i < len; i++) {
			s.push(str[i]);
		}
		while (!s.empty()) {
			printf("%c", s.top());
			s.pop();
		}
		printf("\n");
	}
}

