#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n = 0, k = 0;
	std::cin >> n >> k;
	std::vector<int> v(n);
	
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	std::cout << v[k - 1] << "\n";
}