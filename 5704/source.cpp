#include <iostream>
#include <cctype>
#include <string>

int main()
{	
	while (true) {
		bool alphabet[26] = { false, };
		std::string str;
		std::getline(std::cin, str);
		if (str == "*") break;
		for (int j = 0; j < str.length(); j++) {
			if (isalpha(str[j])) {
				int idx = str[j] - 'a';
				alphabet[idx] = true;
			}
		}
		bool chk = true;
		for (int j = 0; j < 26; j++)
			if (alphabet[j] == false) {
				chk = false;
				break;
			}
		if (chk) std::cout << "Y" << std::endl;
		else std::cout << "N" << std::endl;
	}
}