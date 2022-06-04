#include <iostream>
#include <vector>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n = 0;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];

	int diff = v[1] - v[0];
	int ratio = v[1] / v[0];
	if (diff == v[2] - v[1]) std::cout << v[n - 1] + diff << "\n";
	else std::cout << v[n - 1] * ratio << "\n";
}