#include <iostream>

int main()
{
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n = 0, m = 0;
		std::cin >> n >> m;
		int cnt = 0;
		for (int a = 1; a < n - 1; a++) {
			for (int b = a + 1; b < n; b++) {
				int top = a * a + b * b + m;
				int bottom = a * b;
				if (top % bottom == 0) cnt++;
			}
		}
		std::cout << cnt << "\n";
	}
}