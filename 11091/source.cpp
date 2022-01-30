#include <iostream>
#include <cctype>
#include <string>

int main()
{
	int N;
	std::cin >> N;
	std::getchar();
	for (int i = 0; i < N; i++) {
		bool alpha[26] = { false, };
		std::string str;
		std::getline(std::cin, str);
		int len = str.length();
		for (int j = 0; j < len; j++) {
			if (isupper(str[j])) str[j] = tolower(str[j]);
			if (isalpha(str[j])) {
				int idx = str[j] - 'a';
				alpha[idx] = true;
			}
		}
		bool flag = true;
		int cnt = 0;
		for (int j = 0; j < 26; j++) {
			if (alpha[j] == false && cnt == 0) {
				flag = false; cnt = 1;
				std::cout << "missing ";
			}
			if (alpha[j] == false && cnt == 1) {
				char ch = j + 'a';
				std::cout << ch;
			}
		}
		if (flag) std::cout << "pangram\n";
		else std::cout << "\n";
	}
}