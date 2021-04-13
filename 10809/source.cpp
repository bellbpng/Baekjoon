#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int alphabet[26];
	for (int i = 0; i < 26; i++) { alphabet[i] = -1; }
	for (int i = 0; i < S.length(); i++) {
		int position = S[i] - 'a';
		if (alphabet[position] == -1) { alphabet[position] = i; }
	}
	for (int i = 0; i < 26; i++) { printf("%d ", alphabet[i]); }
	return 0;
}