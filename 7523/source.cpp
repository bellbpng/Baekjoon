#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		long long n = 0, m = 0;
		std::cin >> n >> m;
		long long sum = m * (m + 1) / 2;
		if (n < 0) sum -= abs(n) * (abs(n) + 1) / 2;
		else if (n > 1) sum -= (n - 1) * (n) / 2;
		std::cout << "Scenario #" << i + 1 << ":\n";
		std::cout << sum << "\n\n";
	}
}