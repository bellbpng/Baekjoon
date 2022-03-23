#include <iostream>

int main()
{
	int n = 0;
	unsigned long long sum = 0;
	std::cin >> n;

	for (int i = 1; i < n; i++)
		sum += (unsigned long long)i * n + i;
	std::cout << sum << "\n";
}