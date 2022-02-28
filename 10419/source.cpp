#include <iostream>

int main()
{
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int d = 0;
		std::cin >> d;
		int tmp = 1;
		while (true) {
			if (tmp + tmp * tmp > d) break;
			tmp++;
		}
		std::cout << tmp - 1 << "\n";
	}
}