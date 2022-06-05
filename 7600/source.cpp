#include <iostream>
#include <string>
#include <cctype>

int main()
{
	while (true) {
		std::string str;
		std::getline(std::cin, str);
		if (str == "#") break;
		bool alpha[26] = { false, };
		for (auto ch : str) {
			if (std::isalpha(ch)) {
				if (std::isupper(ch)) ch = std::tolower(ch);
				int idx = ch - 'a';
				alpha[idx] = true;
			}
		}
		int cnt = 0;
		for (int i = 0; i < 26; i++)
			if (alpha[i]) cnt++;
		std::cout << cnt << "\n";
	}
}