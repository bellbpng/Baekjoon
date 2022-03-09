#include <iostream>
#include <string>
#include <algorithm>

int factorial(const int& a) {
	int val = 1;
	for (int i = 2; i <= a; i++) val *= i;
	return val;
}

int main()
{
	while (true) {
		std::string str; int n;
		std::cin >> str >> n;
		if (std::cin.eof()) break;
		int len = str.length();
		int limit = factorial(len);
		std::cout << str << " " << n << " = ";
		if (n > limit) {
			std::cout << "No permutation\n";
			continue;
		}
		for (int i = 1; i < n; i++)
			std::next_permutation(str.begin(), str.end());
		std::cout << str << "\n";
	}
}