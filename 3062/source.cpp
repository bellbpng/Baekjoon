#include <iostream>
#include <string>

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::string origin;
		std::cin >> origin;
		int len = origin.length();
		std::string rev;
		rev.reserve(len);
		for (int j = len - 1; j >= 0; j--)
			rev.push_back(origin[j]);
		int tmp = stoi(origin) + stoi(rev);
		std::string result = std::to_string(tmp);
		len = result.length();
		bool chk = true;
		for(int j=0; j<len/2; j++)
			if (result[j] != result[len -1 - j]) {
				std::cout << "NO\n";
				chk = false;
				break;
			}
		if(chk)
			std::cout << "YES\n";
	}
}