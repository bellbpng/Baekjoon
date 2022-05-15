#include <iostream>
#include <vector>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int m = 0, n = 0;
		std::cin >> m >> n;
		std::vector<std::vector<int>> v(m, std::vector<int>(n));
		for (int row = 0; row < m; row++)
			for (int col = 0; col < n; col++)
				std::cin >> v[row][col];
		int mov = 0;
		for (int col = 0; col < n; col++) {
			int row_target = m - 1;
			for (int row = m - 1; row >= 0; row--) {
				int val = v[row][col];
				if (val == 1) {
					mov += (row_target - row);
					row_target--;
				}
			}
		}
		std::cout << mov << "\n";
	}
}