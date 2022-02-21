#include <iostream>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> v(2 *m);

	for (int i = 0; i < v.size(); i++)
		std::cin >> v[i];
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (auto iter : v)
			if ((iter) == i) cnt++;
		std::cout << cnt << "\n";
	}
}