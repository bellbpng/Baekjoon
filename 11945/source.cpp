#include <iostream>
#include <string>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m/2; col++) {
			char tmp = v[row][col];
			v[row][col] = v[row][m - 1 - col];
			v[row][m - 1 - col] = tmp;
		}
	}
	for (int row = 0; row < n; row++) {
		std::cout << v[row] << "\n";
	}
}