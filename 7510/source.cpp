#include <iostream>

int main()
{
	int t = 0;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int a = 0, b = 0, c = 0;
		std::cin >> a >> b >> c;

		int length[3] = { a,b,c };
		int others[2] = { b, c};
		int max_idx = 0;
		if (length[max_idx] < length[1]) {
			max_idx = 1; others[0] = a, others[1] = c;
		}
		if (length[max_idx] < length[2]) {
			max_idx = 2; others[0] = a, others[1] = b;
		}

		int limit = length[max_idx] * length[max_idx];
		int val = others[0] * others[0] + others[1] * others[1];

		std::cout << "Scenario #" << i + 1 << ":\n";
		if (val == limit) std::cout << "yes\n\n";
		else std::cout << "no\n\n";
	}
}