#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin >> T;
	getchar();
	for (int i = 0; i < T; i++) {
		string str;
		getline(cin, str);
		int len = str.length();
		stack<char> s;
		for (int j = 0; j < len; j++) {
			char tmp = str[j];
			if (tmp == ' ') {
				while (!s.empty()) {
					printf("%c", s.top());
					s.pop();
				}
				printf(" ");
			}
			else {
				s.push(tmp);
			}
		}
		while (!s.empty()) {
			printf("%c", s.top());
			s.pop();
		}
		printf("\n");
	}
}