#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::string str;
		std::cin >> str;
		int len = str.length();
		int lim = std::sqrt(len);
		for (int k = 0; k < lim; k++)
			for (int l = lim - 1; l < len; l += lim)
				std::cout << str[l - k];
		std::cout << "\n";
	}
}