#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int len = str.length();
	stack<char> rev;
	for (int i = 0; i < len; i++) {
		if (str[i] == '<') {
			while (!rev.empty()) {
				printf("%c", rev.top());
				rev.pop();
			}
			printf("%c", str[i]);
			while (str[++i] != '>')
				printf("%c", str[i]);
			printf("%c", str[i]);
		}
		else if (str[i]!=' ') 
			rev.push(str[i]);
		if (str[i] == ' ' || i == len - 1) {
			while (!rev.empty()) {
				printf("%c", rev.top());
				rev.pop();
			}
			printf(" ");
		}
	}
}