#include <iostream>
#include <queue>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n = 0;
	std::cin >> n;
	std::priority_queue<int, std::deque<int>, std::greater<int>> pq1;
	std::priority_queue<int, std::deque<int>, std::less<int>> pq2;
	
	for (int i = 0; i < n; i++) {
		int num = 0;
		std::cin >> num;
		if (num > 0) pq1.push(num);
		else if (num < 0) pq2.push(num);
		if (num == 0) {		
			if (pq1.empty() && pq2.empty()) std::cout << "0\n";
			else if (pq1.empty()) {
				std::cout << pq2.top() << "\n";
				pq2.pop();
			}
			else if (pq2.empty()) {
				std::cout << pq1.top() << "\n";
				pq1.pop();
			}
			else if (pq1.top() < abs(pq2.top())) {
				std::cout << pq1.top() << "\n";
				pq1.pop();
			}
			else {
				std::cout << pq2.top() << "\n";
				pq2.pop();
			}
		}
	}
}