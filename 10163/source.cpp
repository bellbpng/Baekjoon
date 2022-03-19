#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::vector<std::vector<int>> arr(1001, std::vector<int>(1001, 0));
	int n = 0;
	std::cin >> n;

	for (int k = 0; k < n; k++) {
		int x = 0, y = 0, w = 0, h = 0;
		std::cin >> x >> y >> w >> h;
		int row = 1000 - y, col = x;

		for (int i = row; i >= row - h + 1; i--) {
			for (int j = col; j <= col + w - 1; j++)
				arr[i][j] = k + 1;
		}
	}

	for (int k = 0; k < n; k++) {
		int cnt = 0;
		for (int row = 0; row < 1001; row++)
			for (int col = 0; col < 1001; col++)
				if (arr[row][col] == k + 1) cnt++;
		std::cout << cnt << "\n";
	}
}