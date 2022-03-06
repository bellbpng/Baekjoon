#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) std::printf(" ");
		if (i == 0) std::printf("*");
		else {
			std::printf("*");
			for (int j = 1; j <= 2 * i - 1; j++) std::printf(" ");
			std::printf("*");
		}
		std::printf("\n");
	}
}