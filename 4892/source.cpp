#include <iostream>

int main()
{
	int cnt = 0;
	while (true) {
		int n0 = 0;
		std::cin >> n0;
		if (n0 == 0) break;
		cnt++;
		std::cout << cnt << ". ";
		int n1 = 3 * n0;
		bool chk = false;
		if (n1 % 2 == 0) {
			chk = true;
			std::cout << "even ";
		}
		else std::cout << "odd ";
		int n2 = 0;
		if (chk) n2 = n1 / 2;
		else n2 = (n1 + 1) / 2;
		int n3 = 3 * n2;
		int n4 = n3 / 9;
		std::cout << n4 << "\n";
	}
}