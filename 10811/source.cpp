#include <iostream>
#include <vector>
#include <stack>

int main()
{
	int n = 0, m = 0;
	std::cin >> n >> m;
	std::vector<int> basket(n + 1, 0);
	for (int iter = 1; iter <= n; iter++)
		basket[iter] = iter;
	for (int iter = 0; iter < m; iter++) {
		int i = 0, j = 0;
		std::stack<int> s;
		std::cin >> i >> j;
		for (int idx = i; idx <= j; idx++)
			s.push(basket[idx]);
		for (int idx = i; idx <= j; idx++) {
			basket[idx] = s.top();
			s.pop();
		}
	}
	for (int iter = 1; iter <= n; iter++)
		std::cout << basket[iter] << " ";
}