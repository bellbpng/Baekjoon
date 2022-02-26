#include <iostream>
#include <string>
#include <cctype>

int main()
{
	int n = 0;
	std::cin >> n;
	std::getchar();
	for (int i = 0; i < n; i++) {
		std::string str;
		std::getline(std::cin, str);
		std::cout << "Case " << i + 1 << ": ";
		int alpha[26] = { 0, };
		int len = str.length();
		for (int j = 0; j < len; j++) {
			if (isupper(str[j])) str[j] = tolower(str[j]);
			if (isalpha(str[j])) {
				int idx = str[j] - 'a';
				alpha[idx]++;
			}
		}
		bool flag = true;
		for (int j = 0; j < 26; j++) {
			if (alpha[j] == 0) {
				std::cout << "Not a pangram\n";
				flag = false; break;
			}
		}
		if (flag) {
			for (int j = 0; j < 26; j++) {
				if (alpha[j] == 1) {
					std::cout << "Pangram!\n";
					flag = false; break;
				}
			}
		}
		if (flag) {
			for (int j = 0; j < 26; j++) {
				if (alpha[j] == 2) {
					std::cout << "Double pangram!!\n";
					flag = false; break;
				}
			}
		}
		if (flag)
			std::cout << "Triple pangram!!!\n";
	}
}