#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	while (true) {
		string str; stack<char> s;
		bool chk = true;
		getline(cin, str, '.');
		if (str.empty()) { break; }
		getchar();

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty() || s.top() != '(') {
					chk = false;
					break;
				}
				else if (s.top() == '(') {
					s.pop();
				}
			}
			else if (str[i] == ']') {
				if (s.empty() || s.top() != '[') {
					chk = false;
					break;
				}
				else if (s.top() == '[') {
					s.pop();
				}
			}
		}
		if (s.empty() && chk) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
}