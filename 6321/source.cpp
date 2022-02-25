#include <iostream>
#include <string>

int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string str;
		std::cin >> str;
		std::cout << "String #" << i + 1 << "\n";
		for (auto iter : str) {
			if (iter == 'Z') std::cout << 'A';
			else std::cout << char(iter + 1);
		}
		std::cout << "\n\n";
	}
}