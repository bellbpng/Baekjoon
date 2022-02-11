#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (a == 0 && d == 0) std::cout << "0\n";
	else if (b == 0 && c == 0) std::cout << "0\n";
	else {
		int cnt = (b + c) > (a + d) ? a + d : b + c;
		std::cout << cnt;
	}
}