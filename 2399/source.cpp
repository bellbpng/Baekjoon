#include <iostream>
#include <cmath>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<long long> x(n);
	for (int i = 0; i < n; i++)
		std::cin >> x[i];
	long long sum = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++)
			sum += abs(x[j] - x[i]);
	}
	std::cout << sum * 2 << "\n";
}