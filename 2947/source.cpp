#include <iostream>
#include <vector>

void swapNumber(std::vector<int>& v, const int& idx) {
	int tmp = v[idx];
	v[idx] = v[idx + 1];
	v[idx + 1] = tmp;
}

void printOrder(const std::vector<int>& v) {
	for (auto ele : v)
		std::cout << ele << " ";
	std::cout << "\n";
}

bool checkAscend(const std::vector<int>& v) {
	for (int i = 0; i < v.size() - 1; i++)
		if (v[i] > v[i + 1]) return false;
	return true;
}

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::vector<int> v(5);
	for (int i = 0; i < 5; i++)
		std::cin >> v[i];

	while (true) {
		if (v[0] > v[1]) {
			swapNumber(v, 0); printOrder(v);
			if (checkAscend(v)) break;
		}
		if (v[1] > v[2]) {
			swapNumber(v, 1); printOrder(v);
			if (checkAscend(v)) break;
		}
		if (v[2] > v[3]) {
			swapNumber(v, 2); printOrder(v);
			if (checkAscend(v)) break;
		}
		if (v[3] > v[4]) {
			swapNumber(v, 3); printOrder(v);
			if (checkAscend(v)) break;
		}
	}
}