#include <iostream>
#include <vector>

int main()
{
	unsigned long long n;
	std::cin >> n;
	std::vector<unsigned long long> power_two;
	power_two.push_back(1);
	unsigned long long val = 2;
	while (val <= n) {
		power_two.push_back(val);
		val *= 2;
	}
	int len = power_two.size();
	unsigned long long tmp = n;
	for (int i = len - 1; i >= 0; i--) {
		if (tmp >= power_two[i]) {
			printf("1"); tmp -= power_two[i];
		}
		else printf("0");
	}
}