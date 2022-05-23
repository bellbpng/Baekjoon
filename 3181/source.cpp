#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	std::stringstream ss(str);
	std::string token;
	std::vector<std::string> words;
	while (ss >> token) {
		words.push_back(token);
	}

	std::vector<std::string> meanless = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };

	for (auto ele : meanless) {
		if (words[0] == ele) {
			char ch = words[0][0];
			std::cout << char(std::toupper(ch));
		}
	}

	for (int i = 0; i < words.size(); i++) {
		bool chk = true;
		for (auto ele : meanless) {
			if (ele == words[i]) {
				chk = false; break;
			}
		}
		if (chk) {
			char ch = words[i][0];
			std::cout << char(std::toupper(ch));
		}
	}
}