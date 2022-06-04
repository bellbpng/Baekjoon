#include <iostream>
#include <vector>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	while (true) {
		int n = 0;
		std::cin >> n;
		if (n == 0) break;

		std::vector<int> v;
		int current = 0;
		for (int i = 0; i < n; i++) {
			int next = 0;
			std::cin >> next;
			if (current != next) {
				current = next;
				v.push_back(current);
			}
		}
		for (auto ele : v)
			std::cout << ele << " ";
		std::cout << "$\n";
	}
}