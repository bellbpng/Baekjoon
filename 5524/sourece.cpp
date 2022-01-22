#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void lowToUp(string& str) {
	int len = str.length();
	int diff = 'a' - 'A';
	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) str[i] += diff;
	}
}

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		lowToUp(str);
		cout << str << "\n";
	}
}