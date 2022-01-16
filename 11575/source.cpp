#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;	
		string str;
		cin >> str;
		int len = str.length();
		for (int j = 0; j < len; j++) {
			char x = str[j] - 'A';
			str[j] = (a * x + b) % 26 + 'A';
		}
		cout << str << "\n";
	}
}