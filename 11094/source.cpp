#include <iostream>
#include <sstream>
#include <string>

int main()
{
	int n = 0;
	std::cin >> n;
	std::getchar();
	for (int i = 0; i < n; i++) {
		std::string str;
		std::getline(std::cin, str);
		std::stringstream ss(str);
		std::string first_token, second_token;
		ss >> first_token;
		ss >> second_token;
		
		if (first_token == "Simon" && second_token == "says") {
			std::string token;
			while (ss >> token)
				std::cout << " " << token;
			std::cout << "\n";
		}
	}
}