#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(const int& a, const int& b) {
	return a > b;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n = 0;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	sort(v.begin(), v.end(), cmp);
	for (auto iter : v)
		std::cout << iter << "\n";
}