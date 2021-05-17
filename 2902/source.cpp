#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) { printf("%c", str[i]); }
	}
}