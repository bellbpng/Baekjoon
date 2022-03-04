#include <iostream>

int main()
{
	int n = 0, t = 0;
	std::cin >> n >> t;

	int total = 0;
	int cnt = 0; bool chk = true;
	for (int i = 0; i < n; i++) {
		int tmp = 0;
		std::cin >> tmp;
		if (total + tmp <= t && chk) {
			total += tmp;
			cnt++;
		}
		else chk = false;
	}
	std::cout << cnt << "\n";
}