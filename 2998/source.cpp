#include <iostream>
#include <string>

char changeOct(const std::string& str) {
	if (str == "000") return '0';
	else if (str == "001") return '1';
	else if (str == "010") return '2';
	else if (str == "011") return '3';
	else if (str == "100") return '4';
	else if (str == "101") return '5';
	else if (str == "110") return '6';
	else return '7';
}

int main()
{
	std::string original;
	std::cin >> original;
	int r = original.length() % 3;

	std::string str;
	if (r == 1) str.push_back('0'), str.push_back('0');
	else if (r == 2) str.push_back('0');
	str += original;
	int len = str.length();
	for (int idx = 0; idx < len; idx += 3) {
		std::string tmp;
		for (int k = 0; k < 3; k++)
			tmp.push_back(str[idx + k]);
		std::cout << changeOct(tmp);
	}
}