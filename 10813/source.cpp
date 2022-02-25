#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> basket(n);
	for (int i = 0; i < n; i++) basket[i] = i + 1;
	int m = 0;
	std::cin >> m;
	for (int l = 0; l < m; l++) {
		int i, j;
		std::cin >> i >> j;
		int tmp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = tmp;
	}
	for (auto iter : basket) {
		std::cout << iter << " ";
	}
	std::cout << "\n";
}