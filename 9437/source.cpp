#include <iostream>
#include <vector>

int main()
{
	while (true) {
		int n = 0;
		std::cin >> n;
		if (n == 0) break;
		int p = 0; 
		std::cin >> p;
		int len = n / 4;
		std::vector<std::vector<int>> v(len, std::vector<int>(4));
		int a = 1;
		for (int row = 0; row < len; row++) {
			v[row][0] = a, v[row][1] = a + 1;
			v[row][3] = n - a + 1, v[row][2] = v[row][3] - 1;
			a += 2;
		}
		bool chk = false;
		int idx_r = 0;
		for (int row = 0;row < len; row++) {
			for (int col = 0; col < 4; col++) {
				if (v[row][col] == p) {
					idx_r = row; chk = true; break;
				}
			}
			if (chk) break;
		}
		for (int col = 0; col < 4; col++) {
			if (v[idx_r][col] == p) continue;
			std::cout << v[idx_r][col] << " ";
		}
		std::cout << "\n";
	}
}