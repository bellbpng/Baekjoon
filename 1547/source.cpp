#include <iostream>
#include <vector>

int main()
{
	int m = 0;
	std::cin >> m;
	std::vector<int> v(3);
	v[0] = 1, v[1] = 2, v[2] = 3;
	for (int i = 0; i < m; i++) {
		int x = 0, y = 0;
		std::cin >> x >> y;
		int x_idx = 0, y_idx = 0;
		for (int j = 0; j < 3; j++) {
			if (v[j] == x) x_idx = j;
			else if (v[j] == y) y_idx = j;
		}
		int tmp = v[x_idx];
		v[x_idx] = v[y_idx];
		v[y_idx] = tmp;
	}
	std::cout << v[0] << "\n";
}