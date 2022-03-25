#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<unsigned long long> v(n, 0);
	v[0] = 5;

	for (unsigned long long i = 1; i < n; i++) {
		v[i] = v[i - 1] + 4 + i * 3;
	}
	int result = v[n - 1] % 45678;
	std::cout << result << "\n";
}