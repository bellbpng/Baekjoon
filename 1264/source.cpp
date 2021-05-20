#include <iostream>
#include <string>
using namespace std;

int main() {
	while (true) {
		int cnt = 0;
		string str;
		getline(cin, str);
		if (str == "#") { break; }

		char ch;
		for (int i = 0; i < str.length(); i++) {
			ch = str[i];
			if (isupper(ch)) { ch = tolower(ch); }
			switch (ch) {
			case 'a': cnt++; break;
			case 'e': cnt++; break;
			case 'i': cnt++; break;
			case 'o': cnt++; break;
			case 'u': cnt++; break;
			}
		}
		printf("%d\n", cnt);
	}
}