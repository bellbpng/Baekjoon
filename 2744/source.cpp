#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else {
			str[i] = toupper(str[i]);
		}
		cout << str[i];
	}
	printf("\n");
}