#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string s;
	while (true) {
		std::string tmp;
		std::cin >> tmp;
		s = s + tmp;
		if (std::cin.eof()) break;
	}
	std::stringstream ss(s);
	std::string token;
	int total = 0;
	while (std::getline(ss, token, ',')) {
		total += stoi(token);
	}
	std::cout << total << "\n";
}