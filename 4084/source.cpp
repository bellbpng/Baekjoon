#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	while (true) {
		int a = 0, b = 0, c = 0, d = 0;
		std::cin >> a >> b >> c >> d;
		if (((!a && !b) && !c) && !d) break;
		int cnt = 0;
		while (true) {
			if ((a == b && a == c) && a == d) break;
			cnt++;
			int tmp = a;
			a = abs(a - b); b = abs(b - c);
			c = abs(c - d); d = abs(d - tmp);
		}
		std::cout << cnt << "\n";
	}
}