#include <iostream>
#include <vector>

int main()
{
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n = 0;
		std::cin >> n;
		std::vector<int> votes(n);
		int total = 0;
		int max = 1, idx = 1;
		for (int j = 0; j < n; j++) {
			std::cin >> votes[j];
			total += votes[j];
			if (max < votes[j]) {
				max = votes[j], idx = j + 1;
			}
		}
		int cnt = 0;
		for (auto iter : votes) {
			if (max == iter) cnt++;
		}
		if (cnt > 1) std::cout << "no winner\n";
		else if (max > total / 2) std::cout << "majority winner " << idx << "\n";
		else std::cout << "minority winner " << idx << "\n";
	}
}