#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<char>> v(n, std::vector<char>(n));
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++)
			std::cin >> v[row][col];
	}
	int k;
	std::cin >> k;
	if (k == 2) {
		for (int col = 0; col < n / 2; col++) {
			for (int row = 0; row < n; row++) {
				char tmp = v[row][col];
				v[row][col] = v[row][n - 1 - col];
				v[row][n - 1 - col] = tmp;
			}
		}
	}
	else if (k == 3) {
		for (int row = 0; row < n / 2; row++) {
			for (int col = 0; col < n; col++) {
				char tmp = v[row][col];
				v[row][col] = v[n - 1 - row][col];
				v[n - 1 - row][col] = tmp;
			}
		}
	}
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++)
			std::cout << v[row][col];
		std::cout << std::endl;
	}
}