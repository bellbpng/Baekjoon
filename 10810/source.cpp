#include <iostream>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> basket(n + 1, 0);
	for (int a = 0; a < m; a++) {
		int i, j, k;
		std::cin >> i >> j >> k;
		for (int idx = i; idx <= j; idx++)
			basket[idx] = k;
	}
	for (int a = 1; a <= n; a++)
		std::cout << basket[a] << " ";
}