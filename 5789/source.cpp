#include <iostream>
#include <string>

int main()
{
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::string str;
		std::cin >> str;
		int len = str.length();
		bool chk = true;
		for (int k = 0, l = len - 1; k <= len / 2; k++, l--) {
			if (str[k] == str[l]) chk = true;
			else chk = false;
		}
		if (chk) std::cout << "Do-it\n";
		else std::cout << "Do-it-Not\n";
	}
}