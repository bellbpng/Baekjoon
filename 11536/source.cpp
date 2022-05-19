#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool compareOrder(const std::vector<std::string>& origin, const std::vector<std::string>& tmp) {
	for (int i = 0; i < origin.size(); i++)
		if (origin[i] != tmp[i]) return false;
	return true;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<std::string> origin(n);
	for (int i = 0; i < n; i++)
		std::cin >> origin[i];
	std::vector<std::string> tmp(n);
	std::copy(origin.begin(), origin.end(), tmp.begin());
	std::sort(tmp.begin(), tmp.end(), std::less<>());
	if (compareOrder(origin, tmp)) {
		std::cout << "INCREASING\n";
		return 0;
	}
	std::sort(tmp.begin(), tmp.end(), std::greater<>());
	if (compareOrder(origin, tmp)) {
		std::cout << "DECREASING\n";
		return 0;
	}
	std::cout << "NEITHER\n";
}