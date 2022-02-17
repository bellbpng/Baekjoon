#include <iostream>
#include <string>

int main()
{
	while (true) {
		std::string str;
		std::getline(std::cin, str);
		if (str == "#") break;
		int len = str.length();
		int total = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] == ' ') continue;
			total += (i + 1) * (str[i] - 'A' + 1);
		}
		std::cout << total << "\n";
	}
}