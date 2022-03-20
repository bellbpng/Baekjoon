#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main()
{
	int n = 0, m = 0;
	std::cin >> n >> m;
	std::vector<std::priority_queue<int>> player(n);
	std::vector<int> score(n, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int num = 0;
			std::cin >> num;
			player[i].push(num);
		}
	}

	for (int j = 0; j < m; j++) {
		int max = player[0].top();
		for (int i = 1; i < n; i++) {
			int tmp = player[i].top();
			if (tmp > max) max = tmp;
		}
		for (int i = 0; i < n; i++) {
			if (player[i].top() == max) score[i]++;
			player[i].pop();
		}
	}

	int max = *std::max_element(score.begin(), score.end());
	for(int i=0; i<n; i++)
		if (max == score[i]) {
			std::cout << i + 1 << " ";
		}
}