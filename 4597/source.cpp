#include <iostream>
#include <string>

int main()
{
	while (true) {
		std::string str;
		std::cin >> str;
		if (str == "#") break;
		int len = str.length();
		int cnt = 0;
		for (int i = 0; i < len - 1; i++)
			if (str[i] == '1') cnt++;
		int tmp = cnt % 2;
		if (str[len - 1] == 'e' && tmp) str[len - 1] = '1';
		else if (str[len - 1] == 'o' && !tmp) str[len - 1] = '1';
		else str[len - 1] = '0';
		std::cout << str << "\n";
	}
}