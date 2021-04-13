#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (islower(str[i])) { str[i] = toupper(str[i]); }
	}

	int alphabet[26];
	for (int i = 0; i < 26; i++) { alphabet[i] = 0; }
	for (int i = 0; i < str.length(); i++) {
		int index = str[i] - 'A';
		alphabet[index]++;
	}

	int max = alphabet[0];
	int position = 0;
	for (int i = 1; i < 26; i++) {
		if (max < alphabet[i]) {
			position = i;
			max = alphabet[i];
		}
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (max == alphabet[i]) { cnt++; }
	}
	if (cnt >= 2) { printf("?\n"); }
	else { printf("%c\n", position + 'A'); }

	return 0;
}