#include <iostream>
#include <string>

int main()
{
	int cnt = 0;
	while (true) {
		std::string str;
		getline(std::cin, str);
		if (std::cin.eof()) break;
		cnt++;
	}
	std::cout << cnt;
}