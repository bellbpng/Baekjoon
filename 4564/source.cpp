#include <iostream>
#include <string>

int main()
{
	while (true) {
		std::string s;
		std::cin >> s;
		if (s == "0") break;
		while (true) {
			std::cout << stoi(s) << " ";
			if (s.length() == 1) break;
			int tmp = 1;
			for (int i = 0; i < s.length(); i++)
				tmp *= (s[i] - '0');
			s = std::to_string(tmp);
		}
		std::cout << "\n";
	}
}