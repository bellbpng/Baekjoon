#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		int len = str.length();
		cout << str[0] << str[len - 1];
		printf("\n");
	}
}