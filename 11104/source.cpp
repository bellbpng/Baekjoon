#include <iostream>
#include <string>
#include <cmath>

int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string bin;
		std::cin >> bin;
		int len = bin.length();
		unsigned int sum = 0;
		for (int idx = 0; idx < len; idx++) {
			if (bin[idx] == '1') {
				int num = len - idx - 1;
				sum += pow(2, num);
			}
		}
		std::cout << sum << "\n";
	}
}