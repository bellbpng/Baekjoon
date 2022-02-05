#include <iostream>
#include <vector>

int makeArmor(const std::vector<int>& number, const int& m) {
	int cnt = 0;
	for (int i = 0; i < number.size() - 1; i++)
		for (int j = i + 1; j < number.size(); j++)
			if (number[i] + number[j] == m) cnt++;
	return cnt;
}

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> number(n);
	for (int i = 0; i < n; i++)
		std::cin >> number[i];
	int cnt = makeArmor(number, m);
	std::cout << cnt;
}