#include <iostream>
#include <vector>

int main()
{
	int a = 0, b = 0;
	std::cin >> a >> b;
	int cnt = 1, sz = 0;
	while (true) {
		sz += cnt;
		if (sz >= b) break;
		cnt++;
	}
	std::vector<int> v(sz);
	int idx = 0;
	for (int i = 1; i <= cnt; i++)
		for (int j = 1; j <= i; j++)
			v[idx++] = i;
	int sum = 0;
	for (int idx = a; idx <= b; idx++)
		sum += v[idx - 1];
	std::cout << sum << "\n";
}