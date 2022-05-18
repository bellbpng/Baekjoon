#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	if (n == 1) {
		std::cout << "1" << "\n";
		return 0;
	}
	else if (n % 2 == 1) {
		std::cout << "0" << "\n";
		return 0;
	}
	int tmp = 2;
	bool chk = true;
	while (tmp != n) {
		tmp = tmp << 1;
		if (tmp > n) {
			chk = false;
			break;
		}
	}
	if (chk) std::cout << "1" << "\n";
	else std::cout << "0" << "\n";
}