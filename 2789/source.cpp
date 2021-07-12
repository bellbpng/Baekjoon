#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	const char* arr = "CAMBRIDGE";
	cin >> str;
	int len = str.length();
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < len; j++) {
			if (arr[i] == str[j]) {
				str.erase(j, 1);
				j--; len--;
			}
		}
	}
	cout << str;
}