#include <iostream>
#include <queue>

int main()
{
	std::cin.tie(NULL);
	
	int n;
	std::scanf("%d", &n);
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
	for (int i = 0; i < n; i++) {
		int x;
		std::scanf("%d", &x);
		if (x == 0) {
			if (pq.empty()) printf("0\n");
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else
			pq.push(x);
	}
}