#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;
		std::printf("Pairs for %d: ", n);
		int tmp = 0;
		if (n % 2 == 0) tmp = 1;
		for (int j = 1; j <= n / 2 - tmp; j++) {
			std::printf("%d %d", j, n - j);
			if (j != n / 2 - tmp) std::printf(", ");
		}
		printf("\n");
	}
}