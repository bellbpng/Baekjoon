#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt = 0;
	string str;
	cin >> str;
	char ch = NULL;
	for (int i = 0; i < str.length(); i++) {
		ch = str[i];
		switch (ch) {
		case 'a': case 'e': case'i': case'o': case'u':
			cnt++;
		}
	}
	cout << cnt;
}