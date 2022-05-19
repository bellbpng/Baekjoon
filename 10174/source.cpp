#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main()
{
	int n = 0;
	std::cin >> n;
	std::getchar();
	for (int i = 0; i < n; i++) {
		std::string str;
		std::getline(std::cin, str);
		int len = str.length();
		for (int j = 0; j < len; j++) {
			if (std::isupper(str[j])) {
				str[j] = std::tolower(str[j]);
			}
		}
		std::string origin = str;
		std::reverse(str.begin(), str.end());
		if (origin == str) std::cout << "Yes\n";
		else std::cout << "No\n";
	}
}