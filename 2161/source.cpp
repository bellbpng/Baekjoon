#include <iostream>
#include <queue>

int main()
{
	int n = 0;
	std::cin >> n;
	std::queue<int> q;
	for (int i = 0; i < n; i++) q.push(i + 1);
	while (true) {
		if (q.size() == 1) break;
		std::cout << q.front() << " ";
		q.pop();
		int tmp = q.front();
		q.pop(); q.push(tmp);
	}
	std::cout << q.front() << "\n";
}