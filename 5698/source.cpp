#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	while (true) {
		std::string str;
		std::getline(std::cin, str);
		if (str == "*") break;

		std::stringstream ss(str);
		std::string token;
		std::vector<char> v;

		while (std::getline(ss, token, ' ')) {
			char ch = token[0];
			if (isupper(ch)) ch = tolower(ch);
			v.push_back(ch);
		}

		bool mask = true;
		for (int i = 0; i < v.size() - 1; i++)
			if (v[i] != v[i + 1]) {
				mask = false;
				std::cout << "N\n";
				break;
			}
		if (mask) std::cout << "Y\n";
	}
}