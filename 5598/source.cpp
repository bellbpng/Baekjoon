#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		char ch = str[i] - 3;
		if (ch < 'A') ch = 'Z' - ('A' - ch) + 1;
		printf("%c", ch);
	}
}