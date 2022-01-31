#include <iostream>
#include <string>
#include <cctype>

bool isVowel(const char& ch) {
	switch (ch) {
	case 'a': case 'e': case 'i': case 'o': case 'u':
		return true;
	default: return false;
	}
}

int main()
{
	std::string str;
	std::getline(std::cin, str);
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (isVowel(str[i])) {
			std::cout << str[i];
			i += 2;
		}
		else std::cout << str[i];
	}
}