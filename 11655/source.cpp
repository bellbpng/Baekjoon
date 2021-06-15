#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			unsigned char ch = str[i] + 13;
			bool con = str[i] >= 'a' ? true : false;
			if (ch > 'z') {
				ch = ch - 'z' - 1 + 'a';
			}
			else if (!con && (ch > 'Z')) {
				ch = ch - 'Z' - 1 + 'A';
			}
			str[i] = ch;
		}
	}
	cout << str;
}