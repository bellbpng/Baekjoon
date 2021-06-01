#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[5];
	char ch[5][15] = { };
	for (int i = 0; i < 5; i++) {
		cin >> str[i];
	}

	int idx = 0;
	for (int row = 0; row < 5; row++) {
		int len = str[idx].length();
		for (int col = 0; col < len; col++) {
			ch[row][col] = str[idx].front();
			str[idx].erase(0, 1);
		}
		idx++;
	}

	for (int col = 0; col < 15; col++) {
		for (int row = 0; row < 5; row++) {
			if (ch[row][col] == 0) continue;
			printf("%c", ch[row][col]);
		}
	}
}